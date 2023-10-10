// Fill out your copyright notice in the Description page of Project Settings.


#include "JohnUnrealController.h"
#include "EnhancedInputComponent.h"

void AJohnUnrealController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if(UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(_DebugAction,ETriggerEvent::Triggered,this,&AJohnUnrealController::Debug);
	}
}

void AJohnUnrealController::Debug(const FInputActionValue& action)
{
	UE_LOG(LogTemp,Display,TEXT("_DebugInput Worked!!!!!!!!!!"));
}
