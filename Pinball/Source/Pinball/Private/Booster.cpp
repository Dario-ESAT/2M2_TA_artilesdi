// Fill out your copyright notice in the Description page of Project Settings.


#include "Booster.h"
#include "../Ball.h"
// Sets default values
ABooster::ABooster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);
	SMComp_->SetNotifyRigidBodyCollision(true);

	RootComponent = SMComp_;

	SMComp_->OnComponentHit.AddDynamic(this, &ABooster::ChocaBola);
}


// Called when the game starts or when spawned
void ABooster::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABooster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABooster::ChocaBola(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
	
	UE_LOG(LogTemp, Warning, TEXT("AAAAAAAAAAAAAAAAAAAAAA"));
	ABall* bola = Cast<ABall>(OtherActor);
	FVector direction = ( bola->GetActorLocation() - GetActorLocation());
	direction.Normalize(1.0f);


	bola->SMComp_->AddForce(direction * booster_force_ * bola->SMComp_->GetMass());
}
