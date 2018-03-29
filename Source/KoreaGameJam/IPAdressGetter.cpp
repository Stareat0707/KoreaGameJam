// Fill out your copyright notice in the Description page of Project Settings.

#include "IPAdressGetter.h"


// Sets default values
AIPAdressGetter::AIPAdressGetter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIPAdressGetter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIPAdressGetter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AIPAdressGetter::GetMyIPAddress()
{
	FString IpAddress("NONE");

	bool bCanBind = false;
	TSharedRef<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, bCanBind);

	if (localIp->IsValid())
	{
		IpAddress = localIp->ToString(false);
	}

	return IpAddress;
}

