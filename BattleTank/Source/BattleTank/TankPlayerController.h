// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = .5;

	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = .3333;

	// Start moving the tank barrel to crosshair
	void ATankPlayerController::AimTowardsCrosshair();

	// return out parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;

};
