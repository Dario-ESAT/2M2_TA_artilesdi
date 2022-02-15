// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"

#include "FlippersController.generated.h"
UCLASS()
class PINBALL_API AFlippersController : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFlippersController();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Flippers")
		USceneComponent* center_pivot_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Flippers")
		UStaticMeshComponent* right_flipper_mesh_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Flippers")
		USceneComponent* right_flipper_pivot_;

	//ACameraActor* camera_;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Flippers")
		UCameraComponent* camera_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Flippers")
		UStaticMeshComponent* left_flipper_mesh_;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Flippers")
		USceneComponent* left_flipper_pivot_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flippers")
		float time_to_rotate_;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flippers")
		float rotation_;

	UFUNCTION()
		void KickLeft();
	UFUNCTION()
		void KickRight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	void StartKick();
	void EndKick();


	bool is_rotating_;
	float count_;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
