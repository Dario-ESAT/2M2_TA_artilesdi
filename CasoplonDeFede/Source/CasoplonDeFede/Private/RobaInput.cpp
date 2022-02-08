// Fill out your copyright notice in the Description page of Project Settings.


#include "RobaInput.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
ARobaInput::ARobaInput()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARobaInput::BeginPlay()
{
	Super::BeginPlay();
	
	EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	FInputBinding HorizontalRules;
	FInputBinding VerticalRules;

	check(InputComponent);

	InputComponent->BindAxis("MoveForward", this, &ARobaInput::MoveForward).bConsumeInput = false;
	InputComponent->BindAxis("MoveMoveRight", this, &ARobaInput::MoveRight).bConsumeInput = false;
}

// Called every frame
void ARobaInput::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARobaInput::MoveForward(float value) {
	if (value != 0.0f) {
		FVector direction = value * -GetActorForwardVector() * speed_ * GetWorld()->GetDeltaSeconds();
		AddActorLocalOffset(direction);
	}
}

void ARobaInput::MoveRight(float value) {
	if (value != 0.0f) {
		FVector direction = value * -GetActorRightVector() * speed_ * GetWorld()->GetDeltaSeconds();
		AddActorLocalOffset(direction);
	}
}
