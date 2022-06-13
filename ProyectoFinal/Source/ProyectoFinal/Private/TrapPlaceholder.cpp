// Fill out your copyright notice in the Description page of Project Settings.


#include "TrapPlaceholder.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
ATrapPlaceholder::ATrapPlaceholder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SMComp_ = CreateDefaultSubobject<UStaticMeshComponent>(
		TEXT("SMComp")
		);

	collision_mesh_ = CreateDefaultSubobject<UBoxComponent>(
		TEXT("CMComp")
		);

	RootComponent = SMComp_;
	collision_mesh_->SetupAttachment(SMComp_);
	collision_mesh_->SetGenerateOverlapEvents(true);
	number_collisioned = 0;
	size_.X = 100;
	size_.Y = 100;
	max_traps_ = 10;

}

// Called when the game starts or when spawned
void ATrapPlaceholder::BeginPlay()
{
	Super::BeginPlay();
	original_loc_ = GetActorLocation();
	collision_mesh_->OnComponentBeginOverlap.AddDynamic(this, &ATrapPlaceholder::BeginOverlap);
	collision_mesh_->OnComponentEndOverlap.AddDynamic(this, &ATrapPlaceholder::EndOverlap);

	GenerateTraps();
}

void ATrapPlaceholder::GenerateTraps(){
	for(size_t i = 0; i < max_traps_; i++){
		ATrap* new_trap = GetWorld()->SpawnActor<ATrap>(trap_, GetActorLocation(), FRotator());
		trap_arr_.Add(new_trap);
		new_trap->id_ = i;
		new_trap->unactive_loc_ = original_loc_;
		new_trap->Deactivate();
	}
}

void ATrapPlaceholder::BeginOverlap(UPrimitiveComponent* OveralappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){
	number_collisioned++;
	FString x = FString::Printf(TEXT("%d"), number_collisioned);
	GEngine->AddOnScreenDebugMessage(1, 1, FColor::Purple, x);
}

void ATrapPlaceholder::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){
	number_collisioned--;
	FString x = FString::Printf(TEXT("%d"), number_collisioned);
	GEngine->AddOnScreenDebugMessage(6, 1, FColor::Cyan, x);
}

// Called every frame
void ATrapPlaceholder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrapPlaceholder::SetLocationInGrid(FVector origin){
	
	int factor_x = FMath::FloorToInt(origin.X / size_.X);
	int factor_y = FMath::FloorToInt(origin.Y / size_.Y);

	SMComp_->SetWorldLocation(FVector(factor_x * size_.X + (size_.X / 2), factor_y * size_.Y + (size_.Y / 2), origin.Z));
}

void ATrapPlaceholder::SetToOriginalLoc(){
	SMComp_->SetWorldLocation(original_loc_);
}

void ATrapPlaceholder::PlaceTrap(){
	if(number_collisioned <= 0){
		GEngine->AddOnScreenDebugMessage(11, 1, FColor::Purple, FString("Placed"));
		for(int i = 0; i < max_traps_; i++){
			ATrap* trap = trap_arr_[i];
			if(!trap->active_){
				trap->SetActorLocation(GetActorLocation());
				trap->Activate();
				number_collisioned = 0;
				return;
			}
		}
	}
}



