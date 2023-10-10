// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "JohnUnrealController.generated.h"

class FInputActionValue;
class UInputAction;

UCLASS()
class CPPFORENGINES_API AJohnUnrealController : public APlayerController
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, Category = Input);
	TObjectPtr<UInputAction>_DebugAction;
	virtual void SetupInputComponent() override;
	void Debug(const FInputActionValue& action);
};
