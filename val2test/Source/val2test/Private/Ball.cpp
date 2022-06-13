// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "HealthInstance.h"
#include "Kismet/GameplayStatics.h"
#include "../val2testCharacter.h"

// Sets default values
ABall::ABall() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

	damage_ = 20.0f;

}

// Called when the game starts or when spawned
void ABall::BeginPlay() {
	Super::BeginPlay();

	Mesh->SetGenerateOverlapEvents(true);

	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ABall::OnOverlapBegin);

}

// Called every frame
void ABall::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	FVector location = GetActorLocation();

	location += dir_ * speed_ * DeltaTime;
	SetActorLocation(location);

	UHealthInstance* health = Cast<UHealthInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	//health->event.AddDynamic(this, &ABall::ReloadLevel);

	//GEngine->AddOnScreenDebugMessage(100, 50.0f, FColor::Red, TEXT("health"));

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("health = %f"), health->player_current_health_));

}

void ABall::OnOverlapBegin(class UPrimitiveComponent* newComp,
	class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {

	if ((OtherActor == nullptr) || (OtherActor == this) || (OtherComp == nullptr)) {
		return;
	}

	if ((OtherActor->IsA(Aval2testCharacter::StaticClass()))) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("pum te pego"));

		UHealthInstance* health = Cast<UHealthInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
		health->player_current_health_ -= damage_;

		if (health->player_current_health_ <= 0) {
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "me mori uwu");

			health->event.Broadcast(30);
		}

		this->Destroy();
	}
}

//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("pum te pego"));


