// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Enemy_AI.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"


AProyectile::AProyectile()
{
	PrimaryActorTick.bCanEverTick = false;
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(15.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	
	CollisionComp->OnComponentHit.AddDynamic(this, &AProyectile::OnHit);		// set up a notification for when this component hits something blocking

	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	RootComponent = CollisionComp;

	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);

	SMComp_->SetupAttachment(CollisionComp);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
	dmg_ = 10.0f;
}

void AProyectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit){
	if(OtherActor != nullptr){
		if(OtherActor->IsA(AEnemy_AI::StaticClass())){
			AEnemy_AI* enemy = Cast<AEnemy_AI>(OtherActor);
			enemy->TakeDmg(dmg_);
		}

		Destroy();
	}
}


