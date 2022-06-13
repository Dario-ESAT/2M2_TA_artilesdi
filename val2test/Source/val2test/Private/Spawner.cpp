// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"
#include "Ball.h"


// Sets default values
ASpawner::ASpawner() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	level_ = 1;

	offset_dir_ = FVector(0, 100, 0);
}

// Called when the game starts or when spawned
void ASpawner::BeginPlay() {
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(timer_, this, &ASpawner::SpawnEnemy, offset_timer_, true);
}

// Called every frame
void ASpawner::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);



}

void ASpawner::SpawnEnemy() {
	const FVector location = GetActorLocation();
	const FRotator rotation = GetActorRotation();

	if (level_ == 1) {
		
		ABall* enemy;

		enemy = GetWorld()->SpawnActor<ABall>(enemy_, location + offset_dir_, rotation);
		enemy->speed_ = 1000.0f;
		offset_dir_.Normalize();
		enemy->dir_ = offset_dir_;

	} /*else {

	}*/

}





