// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Engine/Engine.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);

	RootComponent = SMComp_;
	SMComp_->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AItem::PickUp_Implementation() {
	GEngine->AddOnScreenDebugMessage(3, 1, FColor::Cyan, FString("Picked Up"));
	SetActorHiddenInGame(true);
	
	//SMComp_->SetActive(false);
	return true;
}

bool AItem::Drop_Implementation(FVector position) {
	GEngine->AddOnScreenDebugMessage(3, 1, FColor::Cyan, FString("Droped"));
	SetActorHiddenInGame(false);
	//SMComp_->SetActive(true);
	
	//SMComp_->GetComponentTransform().GetLocation().Set(position.X, position.Y, position.Z);
	SMComp_->SetWorldLocation(position);
	return true;
}


