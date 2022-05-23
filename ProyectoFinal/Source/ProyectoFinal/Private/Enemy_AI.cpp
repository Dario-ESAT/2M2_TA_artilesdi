// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_AI.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"
#include "NavigationSystem.h"

// Sets default values
AEnemy_AI::AEnemy_AI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy_AI::BeginPlay()
{
	Super::BeginPlay();

	NavArea = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);
	

}

// Called every frame
void AEnemy_AI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy_AI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

