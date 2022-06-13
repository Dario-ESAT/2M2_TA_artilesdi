// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Trap.h"
#include "ArcherTrap.generated.h"

class AProyectile;

UCLASS()
class PROYECTOFINAL_API AArcherTrap : public ATrap
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Trap)
	class USphereComponent* CollisionComp;

	UPROPERTY(EditAnywhere, Category = Placeholder)
		TSubclassOf<AProyectile> proyectile_;

public:
		AArcherTrap();
		struct FTimerHandle myTimerHandle;
		struct FTimerHandle myTimerHandleCheckEnemy;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Trap")
			class AEnemy_AI* enemy_objective_;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trap")
			USceneComponent* shoot_location_;

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Trap")
			bool enemy_detected_;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trap")
			float fire_rate_;

protected:

	virtual void BeginPlay() override;


public:
		UFUNCTION()
			void BeginOverlap(UPrimitiveComponent* OveralappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
		
		UFUNCTION()
			void ShootEnemy();

		UFUNCTION()
			void FireProyectile();

		UFUNCTION()
			void StopShootingEnemy();

		UFUNCTION()
			void CheckEnemyInArea();

		virtual void Activate() override;

};
