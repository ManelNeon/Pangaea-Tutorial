// Fill out your copyright notice in the Description page of Project Settings.


#include "DefenseTower.h"
#include "Projectile.h"
#include "PlayerAvatar.h"
#include "Weapon.h"
#include "PangeaCharacter.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ADefenseTower::ADefenseTower()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	SetRootComponent(_SphereComponent);
	_SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ADefenseTower::OnBeginOverlap);
	_SphereComponent->OnComponentEndOverlap.AddDynamic(this, &ADefenseTower::OnEndOverlap);

	_MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	_MeshComponent->SetupAttachment(_SphereComponent);

	static ConstructorHelpers::FObjectFinder<UBlueprint> blueprint_finder(TEXT("Blueprint'/Game/TopDown/Blueprints/BP_Fireball.BP_Fireball'"));
	_FireballClass = (UClass*)blueprint_finder.Object->GeneratedClass;
}

// Called when the game starts or when spawned
void ADefenseTower::BeginPlay()
{
	Super::BeginPlay();

	SetActorTickInterval(0.5f);
	
}

int ADefenseTower::GetHealthPoints() 
{
	return _HealthPoints;
}

bool ADefenseTower::IsDestroyed() 
{
	return (_HealthPoints > 0.0f);
}

bool ADefenseTower::CanFire() 
{
	return (_ReloadCountingDown <= 0.0f);
}

void ADefenseTower::Fire()
{
	auto fireball = Cast<AProjectile>(GetWorld()->SpawnActor(_FireballClass));

	FVector startLocation = GetActorLocation();
	startLocation.Z += 100.0f;

	FVector targetLocation = _Target->GetActorLocation();
	targetLocation.Z = startLocation.Z;

	FRotator rotation = UKismetMathLibrary::FindLookAtRotation(startLocation, targetLocation);

	fireball->SetActorLocation(startLocation);
	fireball->SetActorRotation(rotation);
}

// Called every frame
void ADefenseTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (_Target != nullptr) Fire();
}

void ADefenseTower::Hit(int Damage)
{
	UE_LOG(LogTemp, Warning, TEXT("Damaged My Tower Balls"));
}

void ADefenseTower::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerAvatar* player = Cast<APlayerAvatar>(OtherActor);

	if (player)
	{
		UE_LOG(LogTemp, Warning, TEXT("Is Targeting"));
		_Target = player;
	}
}

void ADefenseTower::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex)
{
	auto player = Cast<APlayerAvatar>(OtherActor);

	if (!player) return;
	
	if (!_Target && player == _Target)
	{
		UE_LOG(LogTemp, Warning, TEXT("Is Not Targeting"));
		_Target = nullptr;
	}
}

void ADefenseTower::OnMeshBeginOverlap(AActor* OtherActor)
{
	AWeapon* weapon = Cast<AWeapon>(OtherActor);
	if (weapon == nullptr || weapon->Holder == nullptr)
	{
		return;
	}

	APlayerAvatar* character = Cast<APlayerAvatar>(weapon->Holder);
	if (character->IsA(APlayerAvatar::StaticClass()) && character->IsAttacking() && weapon->IsWithinAttackRange(character->AttackRange, this) && CanBeDamaged())
	{
		Hit(weapon->Strength);
	}
}


