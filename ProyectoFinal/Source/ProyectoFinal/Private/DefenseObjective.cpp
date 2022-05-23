// Fill out your copyright notice in the Description page of Project Settings.


#include "DefenseObjective.h"
#include "Components/SphereComponent.h"
#include "Enemy_AI.h"

// Sets default values
ADefenseObjective::ADefenseObjective()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);

	RootComponent = SMComp_;

	DamageDetection = CreateDefaultSubobject<USphereComponent>(
		TEXT("Damage Detection")
		);

	DamageDetection->SetupAttachment(RootComponent);

}

void ADefenseObjective::BeginOverlap(UPrimitiveComponent* OveralappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){
	//FString x = FString::Printf(TEXT("%s"), "Colision");
	GEngine->AddOnScreenDebugMessage(15, 4, FColor::Purple, "Colision");
	if(OtherActor->IsA(AEnemy_AI::StaticClass())){

	}
}

// Called when the game starts or when spawned
void ADefenseObjective::BeginPlay()
{
	Super::BeginPlay();
	
	hp_ = max_hp_;

	DamageDetection->OnComponentBeginOverlap.AddDynamic(this, &ADefenseObjective::BeginOverlap);
	SMComp_->OnComponentBeginOverlap.AddDynamic(this, &ADefenseObjective::BeginOverlap);
}

// Called every frame
void ADefenseObjective::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

