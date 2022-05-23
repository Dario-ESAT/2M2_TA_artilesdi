// Copyright Epic Games, Inc. All Rights Reserved.

#include "TrapPlaceholder.h"
#include "ProyectoFinalCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "DrawDebugHelpers.h"

//////////////////////////////////////////////////////////////////////////
// AProyectoFinalCharacter

AProyectoFinalCharacter::AProyectoFinalCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)


	selected_trap_ = 0;
}

//////////////////////////////////////////////////////////////////////////
// Input
void AProyectoFinalCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) {
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("FirstTrap", IE_Pressed, this, &AProyectoFinalCharacter::SelectTrap1);
	PlayerInputComponent->BindAction("SecondTrap", IE_Pressed, this, &AProyectoFinalCharacter::SelectTrap2);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AProyectoFinalCharacter::PlaceTrap);
	PlayerInputComponent->BindAction("Cancel", IE_Pressed, this, &AProyectoFinalCharacter::CancelTrap);

	PlayerInputComponent->BindAxis("MoveForward", this, &AProyectoFinalCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AProyectoFinalCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AProyectoFinalCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AProyectoFinalCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AProyectoFinalCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AProyectoFinalCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AProyectoFinalCharacter::OnResetVR);
}

void AProyectoFinalCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	if(selected_trap_ != 0){
		FHitResult hit;
		FVector origin = FollowCamera->GetComponentLocation();
		FVector end = origin + FollowCamera->GetForwardVector() * PlaceRange_;
		//DrawDebugLine(GetOwner()->GetWorld(), origin, end,FColor::Blue, false, -1.0f, (uint8)'\000', 3.0f);
		if (GetWorld()->LineTraceSingleByProfile(hit,origin,end, FName("BlockAll"))) {
			if(hit.GetActor()->IsA(ATrap::StaticClass())){
				aiming_trap_ = (dynamic_cast<ATrap*>(hit.GetActor()));
			} else if ((hit.Normal - FVector(0.0f,0.0f,1.0f)).IsNearlyZero()) {
				//GEngine->AddOnScreenDebugMessage(4, 0.1f, FColor::Cyan, FString("Suelo"));
				aiming_trap_ = nullptr;
				if(selected_trap_ == 1){
					Tarr_->SetLocationInGrid(hit.Location);
				} else if(selected_trap_ == 2){
					Archer_->SetLocationInGrid(hit.Location);
				}
			}
		} else{
			Archer_->SetToOriginalLoc();
			Tarr_->SetToOriginalLoc();
		}
	}
}

void AProyectoFinalCharacter::OnResetVR()
{
	// If ProyectoFinal is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in ProyectoFinal.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AProyectoFinalCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AProyectoFinalCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AProyectoFinalCharacter::SelectTrap1(){
	if(selected_trap_ == 1){
		selected_trap_ = 0;
		Tarr_->SetToOriginalLoc();
	} else{
		selected_trap_ = 1;
		Archer_->SetToOriginalLoc();
	}
	FString x = FString::Printf(TEXT("%d"), selected_trap_);
	GEngine->AddOnScreenDebugMessage(10, 1, FColor::Purple, x);
}

void AProyectoFinalCharacter::SelectTrap2(){
	if(selected_trap_ == 2){
		selected_trap_ = 0;
		Archer_->SetToOriginalLoc();
	} else{
		selected_trap_ = 2;
		Tarr_->SetToOriginalLoc();
	}
	FString x = FString::Printf(TEXT("%d"), selected_trap_);
	GEngine->AddOnScreenDebugMessage(10, 1, FColor::Purple, x);
}

void AProyectoFinalCharacter::PlaceTrap(){
	GEngine->AddOnScreenDebugMessage(11, 1, FColor::Purple, FString("NOP"));
	if(selected_trap_ == 1){
		Tarr_->PlaceTrap();
	} else if(selected_trap_ == 2){
		Archer_->PlaceTrap();
	}
}

void AProyectoFinalCharacter::CancelTrap(){
	if(aiming_trap_ != nullptr){
		aiming_trap_->Deactivate();
	}
}

void AProyectoFinalCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AProyectoFinalCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AProyectoFinalCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AProyectoFinalCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
