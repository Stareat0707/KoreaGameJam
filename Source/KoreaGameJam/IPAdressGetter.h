// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IPAddress.h"
#include "SocketSubsystem.h"
#include "GameFramework/Actor.h"
#include "IPAdressGetter.generated.h"

UCLASS()
class KOREAGAMEJAM_API AIPAdressGetter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIPAdressGetter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	FString GetMyIPAddress();
};
