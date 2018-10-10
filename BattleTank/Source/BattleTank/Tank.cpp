// CarnivalSpaceWhale Very Definitely Original Code Do Not Steal

#include "Tank.h"


// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
	
	//TankAimComp = CreateDefaultSubobject<UTankAimingComponent>(FName("Aiming Component"));
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATank::AimAt(FVector AimPointLocation)
{
	UE_LOG(LogTemp, Warning, TEXT("TankID: %s  AimingAt: %s"), *this->GetName(), *AimPointLocation.ToString());
}