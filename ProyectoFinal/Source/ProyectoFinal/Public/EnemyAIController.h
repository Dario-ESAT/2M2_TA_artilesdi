// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOFINAL_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
public:
  void BeginPlay() override;

private:

  class UNavigationSystemV1* nav_area_;

  FVector RandomLocation;

public:

  UFUNCTION()
    void RandomPatrol();
};
