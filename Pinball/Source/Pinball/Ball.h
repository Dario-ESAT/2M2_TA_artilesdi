// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball.generated.h"

UCLASS()
class PINBALL_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tonterias")
	UStaticMeshComponent* SMComp_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tonterias")
	AActor* InitialPosition_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tonterias")
	FVector direction_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tonterias")
	float force_;

	bool simulando_;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void ShootBall();

	UFUNCTION()
	void ReturnToInitialPosition();
};
