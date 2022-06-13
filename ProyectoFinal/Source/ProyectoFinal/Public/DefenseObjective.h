// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DefenseObjective.generated.h"

class AEnemy_AI;

UCLASS()
class PROYECTOFINAL_API ADefenseObjective : public AActor
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere)
	class USphereComponent* DamageDetection;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tonterias")
	UStaticMeshComponent* SMComp_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int max_hp_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Stats")
	int hp_;
public:	
	// Sets default values for this actor's properties
	ADefenseObjective();

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OveralappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
