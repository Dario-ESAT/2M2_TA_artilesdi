// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
APortal::APortal() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APortal::BeginPlay() {
	Super::BeginPlay();
	
	Mesh->SetGenerateOverlapEvents(true);
	Mesh->OnComponentBeginOverlap.AddDynamic(this, &APortal::OnOverlapBegin);
}

// Called every frame
void APortal::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

void APortal::OnOverlapBegin(class UPrimitiveComponent* newComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {

	if ((OtherActor == nullptr) || (OtherActor == this) || (OtherComp == nullptr)) {
		return;
	}

	UGameplayStatics::OpenLevel(GetWorld(), "map_2");


}
