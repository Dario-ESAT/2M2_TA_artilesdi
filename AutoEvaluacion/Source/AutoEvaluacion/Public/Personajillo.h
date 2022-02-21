// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"

#include "Personajillo.generated.h"

UCLASS()
class AUTOEVALUACION_API APersonajillo : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APersonajillo();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AAPersonajillo")
	UCameraComponent* camera_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AAPersonajillo")
	float walking_speed_;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveRight(float direction);
};
