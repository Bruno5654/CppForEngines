// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstObject.h"

#include "Components/ArrowComponent.h"
#include "GameFramework/RotatingMovementComponent.h"

// Sets default values
AFirstObject::AFirstObject()
{
	_Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = _Root;

	_Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	_Arrow->SetupAttachment(_Root);

	_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	_Mesh->SetupAttachment(_Root);

	_Rotator = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotator"));
	_Rotator->RotationRate = FRotator(0.0f,0.0f,180.0f);
}

void AFirstObject::MyRotateFunction() 
{
	
}



