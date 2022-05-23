// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy_AI.generated.h"

UCLASS()
class PROYECTOFINAL_API AEnemy_AI : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy_AI();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
	class UNavigationSystemV1* NavArea;

	FVector unactive_loc_;
	bool active_;
	int id_;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Move();

	void Die();

};
