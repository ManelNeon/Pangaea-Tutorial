// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PangeaAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGEA_PangeaAnimInstance_generated_h
#error "PangeaAnimInstance.generated.h already included, missing '#pragma once' in PangeaAnimInstance.h"
#endif
#define PANGEA_PangeaAnimInstance_generated_h

#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnStateAnimationEnds);


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPangeaAnimInstance(); \
	friend struct Z_Construct_UClass_UPangeaAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPangeaAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Pangea"), NO_API) \
	DECLARE_SERIALIZER(UPangeaAnimInstance)


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPangeaAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPangeaAnimInstance(UPangeaAnimInstance&&); \
	UPangeaAnimInstance(const UPangeaAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPangeaAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPangeaAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPangeaAnimInstance) \
	NO_API virtual ~UPangeaAnimInstance();


#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_18_PROLOG
#define FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_21_INCLASS_NO_PURE_DECLS \
	FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGEA_API UClass* StaticClass<class UPangeaAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::Locomotion) \
	op(ECharacterState::Attack) \
	op(ECharacterState::Hit) \
	op(ECharacterState::Die) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> PANGEA_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
