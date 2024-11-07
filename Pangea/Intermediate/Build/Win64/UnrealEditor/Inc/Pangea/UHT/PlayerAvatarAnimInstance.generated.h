// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerAvatarAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGEA_PlayerAvatarAnimInstance_generated_h
#error "PlayerAvatarAnimInstance.generated.h already included, missing '#pragma once' in PlayerAvatarAnimInstance.h"
#endif
#define PANGEA_PlayerAvatarAnimInstance_generated_h

#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnStateAnimationEnds);


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAvatarAnimInstance(); \
	friend struct Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPlayerAvatarAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Pangea"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAvatarAnimInstance)


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAvatarAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerAvatarAnimInstance(UPlayerAvatarAnimInstance&&); \
	UPlayerAvatarAnimInstance(const UPlayerAvatarAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAvatarAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAvatarAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAvatarAnimInstance) \
	NO_API virtual ~UPlayerAvatarAnimInstance();


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_21_PROLOG
#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_24_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEA_API UClass* StaticClass<class UPlayerAvatarAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h


#define FOREACH_ENUM_EPLAYERSTATE(op) \
	op(EPlayerState::Locomotion) \
	op(EPlayerState::Attack) \
	op(EPlayerState::Hit) \
	op(EPlayerState::Die) 

enum class EPlayerState : uint8;
template<> struct TIsUEnumClass<EPlayerState> { enum { Value = true }; };
template<> PANGEA_API UEnum* StaticEnum<EPlayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
