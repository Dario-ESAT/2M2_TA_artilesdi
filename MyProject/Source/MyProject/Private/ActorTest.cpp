// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorTest.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AActorTest::AActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SMComp"));

}

// Called when the game starts or when spawned
void AActorTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

