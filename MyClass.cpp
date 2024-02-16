// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClass.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
DEFINE_LOG_CATEGORY(OwlUA)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Sets default values
AMyClass::AMyClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyClass::BeginPlay()
{
	Super::BeginPlay();

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	UE_LOG(OwlUA, Error, TEXT("Custom log works!!!1"));
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

// Called every frame
void AMyClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
