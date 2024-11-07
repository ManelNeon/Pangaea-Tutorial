// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PangeaCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGEA_PangeaCharacter_generated_h
#error "PangeaCharacter.generated.h already included, missing '#pragma once' in PangeaCharacter.h"
#endif
#define PANGEA_PangeaCharacter_generated_h

#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPangeaCharacter(); \
	friend struct Z_Construct_UClass_APangeaCharacter_Statics; \
public: \
	DECLARE_CLASS(APangeaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangea"), NO_API) \
	DECLARE_SERIALIZER(APangeaCharacter)


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APangeaCharacter(APangeaCharacter&&); \
	APangeaCharacter(const APangeaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APangeaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APangeaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APangeaCharacter) \
	NO_API virtual ~APangeaCharacter();


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_9_PROLOG
#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEA_API UClass* StaticClass<class APangeaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
