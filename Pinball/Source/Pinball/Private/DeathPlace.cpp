// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathPlace.h"

// Sets default values
ADeathPlace::ADeathPlace()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);
	RootComponent = SMComp_;
}

// Called when the game starts or when spawned
void ADeathPlace::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeathPlace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

