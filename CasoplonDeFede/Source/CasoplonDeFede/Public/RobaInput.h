// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RobaInput.generated.h"

UCLASS()
class CASOPLONDEFEDE_API ARobaInput : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARobaInput();
	UPROPERTY(EditAnywhere, Category = "Components")
	float speed_;

	UFUNCTION()
	void MoveForward(float falue);

	UFUNCTION()
	void MoveRight(float falue);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
