// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

class AEnemy_AI;
class ADefenseObjective;

UCLASS()
class PROYECTOFINAL_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tonterias")
	UStaticMeshComponent* SMComp_;

	TVector<AEnemy_AI*>;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
	int max_enemies_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enemies")
		int current_enemies_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enemies")
		int dead_enemies_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
	float spawn_delay_;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
