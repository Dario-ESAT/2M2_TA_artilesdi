// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Booster.generated.h"
UCLASS()
class PINBALL_API ABooster : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ABooster();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AABooster")
	UStaticMeshComponent* SMComp_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AABooster")
	float booster_force_;

	UFUNCTION()

	void ChocaBola(UPrimitiveComponent* HitComponent, AActor*
			OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const
			FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
