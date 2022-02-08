// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fantasma.generated.h"

UCLASS()
class LABERINTO_API AFantasma : public AActor
{
	GENERATED_BODY()
private:
	float count_;
public:	
	AFantasma();

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Path")
	FVector LimitActor1;
	UPROPERTY(EditEverywhere, BlueprintReadWrite, Category = "Path")
	float seconds_;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
