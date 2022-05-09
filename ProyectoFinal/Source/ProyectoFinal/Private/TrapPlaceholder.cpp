// Fill out your copyright notice in the Description page of Project Settings.


#include "TrapPlaceholder.h"

// Sets default values
ATrapPlaceholder::ATrapPlaceholder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ATrapPlaceholder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrapPlaceholder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

