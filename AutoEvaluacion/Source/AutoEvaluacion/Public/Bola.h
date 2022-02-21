// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bola.generated.h"

UCLASS()
class AUTOEVALUACION_API ABola : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABola();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AABola")
	UStaticMeshComponent* SMComp_;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void HitCharacter(UPrimitiveComponent* HitComponent, AActor*
		OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const
		FHitResult& Hit);
};
