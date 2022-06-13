// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectile.generated.h"

UCLASS()
class PROYECTOFINAL_API AProyectile : public AActor
{
	GENERATED_BODY()
	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		class USphereComponent* CollisionComp;

	/** Projectile movement component */


public:	
	// Sets default values for this actor's properties
	AProyectile();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tonterias")
		UStaticMeshComponent* SMComp_;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
		class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
		float dmg_;

protected:
	// Called when the game starts or when spawned

public:	

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


};
