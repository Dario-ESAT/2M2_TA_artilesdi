// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Trap.h"
#include "TrapPlaceholder.generated.h"

UCLASS()
class PROYECTOFINAL_API ATrapPlaceholder : public AActor {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = Placeholder)
	TSubclassOf<ATrap> trap_;

	UPROPERTY(EditAnywhere, Category = Placeholder)
	class UBoxComponent* collision_mesh_;

	TArray<ATrap*> trap_arr_;

public:	
	// Sets default values for this actor's properties
	ATrapPlaceholder();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Tonterias")
	UStaticMeshComponent* SMComp_;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placeholder")
	FVector2D size_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Placeholder)
	FVector original_loc_;

	int number_collisioned;

	int max_traps_;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void GenerateTraps();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent* OveralappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION()
	void SetLocationInGrid(FVector origin);

	UFUNCTION()
	void SetToOriginalLoc();

	UFUNCTION()
	void PlaceTrap();
	
};
