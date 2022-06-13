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
	struct FTimerHandle myTimerHandle;
	struct FTimerHandle myTimerHandleMovement;

	UCharacterMovementComponent* movement_comp_;
	class AEnemyAIController* ai_controller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	FVector objective_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float slow_time_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		float slow_factor_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
	float original_speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
	FVector unactive_loc_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
	bool active_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
	int id_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float hp_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		float base_hp_;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	void OnAIMoveCompleted(struct FAIRequestID RequestID, const struct FPathFollowingResult& Result);

	void Move();

	void Die();

	void StartSlowEffect();

	void TakeDmg(float dmg);

	UFUNCTION()
	void StopSlowEffect();

};
