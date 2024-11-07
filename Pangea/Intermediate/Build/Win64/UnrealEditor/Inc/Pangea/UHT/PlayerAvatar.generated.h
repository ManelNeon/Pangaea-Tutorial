// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerAvatar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGEA_PlayerAvatar_generated_h
#error "PlayerAvatar.generated.h already included, missing '#pragma once' in PlayerAvatar.h"
#endif
#define PANGEA_PlayerAvatar_generated_h

#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanAttack); \
	DECLARE_FUNCTION(execIsKilled); \
	DECLARE_FUNCTION(execGetHealthPoints);


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatar_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerAvatar(); \
	friend struct Z_Construct_UClass_APlayerAvatar_Statics; \
public: \
	DECLARE_CLASS(APlayerAvatar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangea"), NO_API) \
	DECLARE_SERIALIZER(APlayerAvatar)


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatar_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerAvatar(APlayerAvatar&&); \
	APlayerAvatar(const APlayerAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAvatar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerAvatar) \
	NO_API virtual ~APlayerAvatar();


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatar_h_12_PROLOG
#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatar_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatar_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatar_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatar_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEA_API UClass* StaticClass<class APlayerAvatar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS