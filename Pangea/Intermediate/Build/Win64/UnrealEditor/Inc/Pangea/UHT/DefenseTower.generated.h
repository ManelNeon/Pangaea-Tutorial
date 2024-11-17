// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefenseTower.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PANGEA_DefenseTower_generated_h
#error "DefenseTower.generated.h already included, missing '#pragma once' in DefenseTower.h"
#endif
#define PANGEA_DefenseTower_generated_h

#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMeshBeginOverlap); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execIsDestroyed); \
	DECLARE_FUNCTION(execGetHealthPoints);


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefenseTower(); \
	friend struct Z_Construct_UClass_ADefenseTower_Statics; \
public: \
	DECLARE_CLASS(ADefenseTower, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangea"), NO_API) \
	DECLARE_SERIALIZER(ADefenseTower)


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADefenseTower(ADefenseTower&&); \
	ADefenseTower(const ADefenseTower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefenseTower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefenseTower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefenseTower) \
	NO_API virtual ~ADefenseTower();


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_11_PROLOG
#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEA_API UClass* StaticClass<class ADefenseTower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
