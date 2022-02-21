// Fill out your copyright notice in the Description page of Project Settings.


#include "Personajillo.h"

// Sets default values
APersonajillo::APersonajillo()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	camera_ = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	camera_->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APersonajillo::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void APersonajillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APersonajillo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveSides", this, &APersonajillo::MoveRight).bConsumeInput = false;
}

void APersonajillo::MoveRight(float direction) {
	if (direction != 0.0f) {
		AddMovementInput(FVector::RightVector, direction);
	}
}

