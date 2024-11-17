// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGEA_EnemyAnimInstance_generated_h
#error "EnemyAnimInstance.generated.h already included, missing '#pragma once' in EnemyAnimInstance.h"
#endif
#define PANGEA_EnemyAnimInstance_generated_h

#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_EnemyAnimInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnStateAnimationEnds);


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_EnemyAnimInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyAnimInstance(); \
	friend struct Z_Construct_UClass_UEnemyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UEnemyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Pangea"), NO_API) \
	DECLARE_SERIALIZER(UEnemyAnimInstance)


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_EnemyAnimInstance_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemyAnimInstance(UEnemyAnimInstance&&); \
	UEnemyAnimInstance(const UEnemyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyAnimInstance) \
	NO_API virtual ~UEnemyAnimInstance();


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_EnemyAnimInstance_h_21_PROLOG
#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_EnemyAnimInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_EnemyAnimInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_EnemyAnimInstance_h_24_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_EnemyAnimInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEA_API UClass* StaticClass<class UEnemyAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_EnemyAnimInstance_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Locomotion) \
	op(EEnemyState::Attack) \
	op(EEnemyState::Hit) \
	op(EEnemyState::Die) 

enum class EEnemyState : uint8;
template<> struct TIsUEnumClass<EEnemyState> { enum { Value = true }; };
template<> PANGEA_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
