// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PangeaCharacter.generated.h"

UCLASS(Blueprintable)
class APangeaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APangeaCharacter();

	UPROPERTY(EditAnywhere, Category = "Pangea Character Params")
	int HealthPoints = 100;

	UPROPERTY(EditAnywhere, Category = "Pangaea Character Params")
	float Strength = 5;

	UPROPERTY(EditAnywhere, Category = "Pangaea Character Params")
	float Armer = 1;

	UPROPERTY(EditAnywhere, Category = "Pangaea Character Params")
	float AttackRange = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Pangaea Character Params")
	float AttackInterval = 3.0f;

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable, Category = "Pangea | Character", meta = (DisplayName = "Get HP"))
	int GetHealthPoints();

	UFUNCTION(BlueprintCallable, Category = "Pangaea|Character")
	bool IsKilled();

	UFUNCTION(BlueprintCallable, Category = "Pangaea|Character")
	bool CanAttack();

	virtual void Attack();

	virtual void Hit(int damage);
	
	virtual void DieProcess();

	
	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

protected:

	virtual void BeginPlay() override;

	class UPangeaAnimInstance* _AnimInstance;
	
	int _HealthPoints;
	
	float _AttackCountingDown;

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};

