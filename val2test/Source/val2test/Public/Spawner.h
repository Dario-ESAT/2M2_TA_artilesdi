// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"

UCLASS()
class VAL2TEST_API ASpawner : public AActor {
	GENERATED_BODY()

	
public:	
	// Sets default values for this actor's properties
	ASpawner();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Move")
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Move")
	class UStaticMeshComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector offset_dir_;
	FTimerHandle timer_;

	UFUNCTION()
	void SpawnEnemy();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Content")
	int32 level_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Content")
	TSubclassOf<AActor> enemy_;

	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Content")
	TSubclassOf<AActor> cube_;*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Content")
	float offset_timer_;



};
