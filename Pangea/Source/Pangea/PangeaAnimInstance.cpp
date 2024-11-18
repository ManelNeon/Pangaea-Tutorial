// Fill out your copyright notice in the Description page of Project Settings.


#include "PangeaAnimInstance.h"
#include "PangeaCharacter.h"

void UPangeaAnimInstance::OnStateAnimationEnds()
{
	if (State == ECharacterState::Attack)
	{
		State = ECharacterState::Locomotion;
		return;
	}

	auto ownerActor = this->GetOwningActor();
	auto playerAvatar = Cast<APangeaCharacter>(ownerActor);

	if (playerAvatar == nullptr) return;

	if (State == ECharacterState::Hit)
	{
		if (playerAvatar->GetHealthPoints() > 0.0f)
		{
			State = ECharacterState::Locomotion;
			return;
		}
		else
		{
			State = ECharacterState::Die;
			return;
		}
	}

	if (State == ECharacterState::Die)
	{
		playerAvatar->DieProcess();
		//.....
		return;
	}
}
