// Fill out your copyright notice in the Description page of Project Settings.


#include "BallLauncher.h"

// Sets default values
ABallLauncher::ABallLauncher()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABallLauncher::BeginPlay()
{
	Super::BeginPlay();
	//right_flipper_ = GetChild(0);

}


// Called every frame
void ABallLauncher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

// Called to bind functionality to input
void ABallLauncher::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

