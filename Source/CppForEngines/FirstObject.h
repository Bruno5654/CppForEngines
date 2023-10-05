// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FirstObject.generated.h"

class URotatingMovementComponent;
class UArrowComponent;

UCLASS(Abstract)
class CPPFORENGINES_API AFirstObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFirstObject();

protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	TObjectPtr<USceneComponent> _Root;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UArrowComponent> _Arrow;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> _Mesh;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<URotatingMovementComponent> _Rotator;

	UFUNCTION(BlueprintCallable)
	void MyRotateFunction();

};
