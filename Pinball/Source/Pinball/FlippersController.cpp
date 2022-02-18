// Fill out your copyright notice in the Description page of Project Settings.


#include "FlippersController.h"
#include "Math/UnrealMathUtility.h"
// Sets default values
AFlippersController::AFlippersController()
{
	PrimaryActorTick.bCanEverTick = true;

	center_pivot_ = CreateDefaultSubobject<USceneComponent>(TEXT("Center_Pivot_"));
	RootComponent = center_pivot_;
	camera_ = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	//Init meshes
	left_flipper_mesh_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left_Flipper"));
	right_flipper_mesh_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right_Flipper"));
	
	//Init pivots
	right_flipper_pivot_ = CreateDefaultSubobject<USceneComponent>(TEXT("Right_Flipper_Pivot"));
	left_flipper_pivot_ = CreateDefaultSubobject<USceneComponent>(TEXT("Left_Flipper_Pivot"));

	//Setting attachments
	right_flipper_mesh_->SetupAttachment(right_flipper_pivot_);
	left_flipper_mesh_->SetupAttachment(left_flipper_pivot_);

	left_flipper_pivot_->SetupAttachment(center_pivot_);
	right_flipper_pivot_->SetupAttachment(center_pivot_);

	camera_->SetupAttachment(center_pivot_);

	left_flipper_up_ = false;
	right_flipper_up_ = false;

	count_left_ = 0.0f;
	count_right_ = 0.0f;

}

// Called when the game starts or when spawned
void AFlippersController::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFlippersController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(left_flipper_up_) {
		count_left_ += DeltaTime;
		left_flipper_pivot_->SetWorldRotation(
			FRotator(
				0.0f,
				0.0f,
				FMath::Lerp(right_flipper_pivot_->GetRelativeTransform().Rotator().Roll,-rotation_,count_left_ / time_to_rotate_)
			)
		);
	} else {
		count_left_ += DeltaTime;
		left_flipper_pivot_->SetWorldRotation(
			FRotator(
				0.0f,
				0.0f,
				FMath::Lerp(-rotation_, 0.0f, count_left_ / time_to_rotate_)
			)
		);
	}

	if (right_flipper_up_) {
		count_left_ += DeltaTime;
		right_flipper_pivot_->SetWorldRotation(
			FRotator(
				0.0f,
				0.0f,
				FMath::Lerp(0.0f, rotation_, count_left_ / time_to_rotate_)
			)
		);
	} else {
		count_left_ += DeltaTime;
		right_flipper_pivot_->SetWorldRotation(
			FRotator(
				0.0f,
				0.0f,
				FMath::Lerp(rotation_, 0.0f, count_left_ / time_to_rotate_)
			)
		);
	}
}

// Called to bind functionality to input
void AFlippersController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Left", IE_Pressed, this, &AFlippersController::KickLeft).bConsumeInput = false;
	PlayerInputComponent->BindAction("Right", IE_Pressed, this, &AFlippersController::KickRight).bConsumeInput = false;
	PlayerInputComponent->BindAction("Right", IE_Released, this, &AFlippersController::KickRight).bConsumeInput = false;
	PlayerInputComponent->BindAction("Left", IE_Released, this, &AFlippersController::KickRight).bConsumeInput = false;
}

void AFlippersController::KickLeft() {
	left_flipper_up_ = true;

}

void AFlippersController::KickRight() {
	right_flipper_pivot_->SetWorldRotation(FRotator(0.0f, 00.0f, rotation_));
	right_flipper_up_ = true;

}

void AFlippersController::EndKickLeft() {
	count_left_ = 0;
	left_flipper_up_ = false;
}

void AFlippersController::EndKickRight() {
	count_right_ = 0;
}


