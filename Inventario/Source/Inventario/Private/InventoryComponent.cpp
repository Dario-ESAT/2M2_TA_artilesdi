// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryComponent::TakeItem(FVector location, FVector direction) {
	TArray<FHitResult> hits;
	FVector end = location + direction * range_;
	GetWorld()->SweepMultiByProfile(hits, location, end, direction.Rotation().Quaternion(), FName("OverlapAllDynamic"), FCollisionShape::MakeSphere(radius_));
	
	for(FHitResult tonto : hits) {
		if (tonto.Actor->GetClass()->ImplementsInterface(UPickUpItem::StaticClass())) {
			bool saved = false;
			if (!inventory_.Slots.Contains(1)) {
				saved = true;
				inventory_.Slots.Emplace(1, Cast<AItem>(tonto.GetActor()));

			} else if (!inventory_.Slots.Contains(2)) {
				saved = true;
				inventory_.Slots.Emplace(2, Cast<AItem>(tonto.GetActor()));
			}
			if (saved) {
				IPickUpItem::Execute_PickUp(tonto.GetActor());
			}
			
		}
	}
}

void UInventoryComponent::DropItem(int32 slot, FVector location) {
	if (!inventory_.Slots.Contains(slot)) {
		
		
		IPickUpItem::Execute_Drop(*(inventory_.Slots.Find(slot)), location);
	}
	
}


