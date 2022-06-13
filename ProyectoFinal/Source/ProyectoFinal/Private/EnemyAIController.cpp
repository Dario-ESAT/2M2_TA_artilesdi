// Fill out your copyright notice in the Description page of Project Settings.


#include "NavigationSystem.h"
#include "EnemyAIController.h"


void AEnemyAIController::BeginPlay(){
  Super::BeginPlay();
  nav_area_ = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);

  //RandomPatrol();
}

void AEnemyAIController::RandomPatrol(){
  if(nav_area_){
    nav_area_->K2_GetRandomReachablePointInRadius(GetWorld(), GetPawn()->GetActorLocation(),
                                                RandomLocation, 1500.0f);

    MoveToLocation(RandomLocation);
  }
}
