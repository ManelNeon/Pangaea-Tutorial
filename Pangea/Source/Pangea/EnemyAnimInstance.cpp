// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAnimInstance.h"
#include "Enemy.h"

void UEnemyAnimInstance::OnStateAnimationEnds()
{
	if (State == EEnemyState::Attack)
	{
		State = EEnemyState::Locomotion;
		return;
	}

	auto enemyAvatar = Cast<AEnemy>(GetOwningActor());

	if (enemyAvatar == nullptr) return;

	if (State == EEnemyState::Hit)
	{
		if (enemyAvatar->GetHealthPoints() > 0.0f)
		{
			State = EEnemyState::Locomotion;
			return;
		}
		
		State = EEnemyState::Die;
		return;
	}

	if (State == EEnemyState::Die)
	{
		enemyAvatar->DieProcess();
		//.....
		return;
	}
}