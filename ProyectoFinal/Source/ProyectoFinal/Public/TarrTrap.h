// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Trap.h"
#include "TarrTrap.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOFINAL_API ATarrTrap : public ATrap
{
	GENERATED_BODY()
public:
	ATarrTrap();

	struct FTimerHandle myTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trap")
		FVector box_half_extent_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trap")
		float effect_delay_;



protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	void CheckEnemy();
public:
	virtual void Deactivate() override;
	virtual void Activate() override;

};
