// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "EnemyAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnemyController.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensor"));

	static ConstructorHelpers::FObjectFinder<UBlueprint> blueprint_finder(TEXT("Blueprint'/Game/TopDown/Blueprints/BP_Hammer.BP_Hammer'"));

	_WeaponClass = (UClass*)blueprint_finder.Object->GeneratedClass;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	_HealthPoints = HealthPoints;

	_Weapon = Cast<AWeapon>(GetWorld()->SpawnActor(_WeaponClass));

	_Weapon->Holder = this;

	_Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, FName("hand_rSocket"));
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto animInst = Cast<UEnemyAnimInstance>(GetMesh()->GetAnimInstance());

	animInst->speed = GetCharacterMovement()->Velocity.Size2D();

	if (_AttackCountingDown == AttackInterval)
	{
		animInst->State = EEnemyState::Attack;
	}

	if (_AttackCountingDown > 0.0f)
		_AttackCountingDown -= DeltaTime;

	if (_chasedTarget != nullptr && animInst->State == EEnemyState::Locomotion)
	{
		auto enemyController = Cast<AEnemyController>(GetController());
		enemyController->MakeAttackDecision(_chasedTarget);
	}
}

int AEnemy::GetHealthPoints()
{
	return _HealthPoints;
}

bool AEnemy::IsKilled()
{
	return(_HealthPoints <= 0.0f);
}

bool AEnemy::CanAttack()
{
	auto animInst = GetMesh()->GetAnimInstance();
	auto enemyAnimInst = Cast<UEnemyAnimInstance>(animInst);
	return(_AttackCountingDown <= 0.0f && enemyAnimInst->State == EEnemyState::Locomotion);
}

void AEnemy::Chase(APawn* targetPawn)
{
	if (!targetPawn) return;

	auto animInst = GetMesh()->GetAnimInstance();
	auto enemyAnimInst = Cast<UEnemyAnimInstance>(animInst);

	if (targetPawn != nullptr && enemyAnimInst->State == EEnemyState::Locomotion)
	{
		auto enemyController = Cast<AEnemyController>(GetController());
		enemyController->MoveToActor(targetPawn, 90.0f);
	}

	_chasedTarget = targetPawn;
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::Attack()
{
	GetController()->StopMovement();
	_AttackCountingDown = AttackInterval;
}

void AEnemy::Hit(int damage)
{
	_HealthPoints -= damage;

	auto animInst = GetMesh()->GetAnimInstance();
	auto enemyAnimInst = Cast<UEnemyAnimInstance>(animInst);

	enemyAnimInst->State = EEnemyState::Hit;

	if (IsKilled())
	{
		DieProcess();
	}
}

void AEnemy::DieProcess()
{
	PrimaryActorTick.bCanEverTick = false;
	K2_DestroyActor();
	GEngine->ForceGarbageCollection(true);
}
