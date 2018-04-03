// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "BattleTank.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();


	auto ControlledTank = GetControlledTank();
	if (ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("%s possessed by PlayerController"),*(ControlledTank->GetName()));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Tank not possessed by PlayerController"));
	}

	UE_LOG(LogTemp, Warning, TEXT("PlayerController BeginPlay"));
}

ATank * ATankPlayerController::GetControlledTank() const
{
	
	
	return Cast<ATank>(GetPawn());
}


