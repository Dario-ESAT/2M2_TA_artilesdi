// Fill out your copyright notice in the Description page of Project Settings.


#include "Bola.h"
#include "Personajillo.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
ABola::ABola()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);
	SMComp_->SetSimulatePhysics(true);
	SMComp_->SetNotifyRigidBodyCollision(true);

	SMComp_->OnComponentHit.AddDynamic(this, &ABola::HitCharacter);

	RootComponent = SMComp_;
}

// Called when the game starts or when spawned
void ABola::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABola::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABola::HitCharacter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

	if (OtherActor->ActorHasTag("Tonto")) {
		UGameplayStatics::OpenLevel(GetWorld(),"Win");
	}
}