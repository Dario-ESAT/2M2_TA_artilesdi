// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BallLauncher.generated.h"

UCLASS()
class PINBALL_API ABallLauncher : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABallLauncher();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Flippers")
	UStaticMeshComponent* right_flipper_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Flippers")
	UStaticMeshComponent* left_flipper_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Flippers")
	float time_to_rotate;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	void StartRotation();
	void StopRotation();

	bool is_rotating_;
	float count_;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
