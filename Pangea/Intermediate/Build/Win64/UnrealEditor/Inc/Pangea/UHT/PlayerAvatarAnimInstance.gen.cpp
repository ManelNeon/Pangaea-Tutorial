// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangea/PlayerAvatarAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAvatarAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
PANGEA_API UClass* Z_Construct_UClass_UPlayerAvatarAnimInstance();
PANGEA_API UClass* Z_Construct_UClass_UPlayerAvatarAnimInstance_NoRegister();
PANGEA_API UEnum* Z_Construct_UEnum_Pangea_EPlayerState();
UPackage* Z_Construct_UPackage__Script_Pangea();
// End Cross Module References

// Begin Enum EPlayerState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerState;
static UEnum* EPlayerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Pangea_EPlayerState, (UObject*)Z_Construct_UPackage__Script_Pangea(), TEXT("EPlayerState"));
	}
	return Z_Registration_Info_UEnum_EPlayerState.OuterSingleton;
}
template<> PANGEA_API UEnum* StaticEnum<EPlayerState>()
{
	return EPlayerState_StaticEnum();
}
struct Z_Construct_UEnum_Pangea_EPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Name", "EPlayerState::Attack" },
		{ "BlueprintType", "true" },
		{ "Die.Name", "EPlayerState::Die" },
		{ "Hit.Name", "EPlayerState::Hit" },
		{ "Locomotion.Name", "EPlayerState::Locomotion" },
		{ "ModuleRelativePath", "PlayerAvatarAnimInstance.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerState::Locomotion", (int64)EPlayerState::Locomotion },
		{ "EPlayerState::Attack", (int64)EPlayerState::Attack },
		{ "EPlayerState::Hit", (int64)EPlayerState::Hit },
		{ "EPlayerState::Die", (int64)EPlayerState::Die },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Pangea_EPlayerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Pangea,
	nullptr,
	"EPlayerState",
	"EPlayerState",
	Z_Construct_UEnum_Pangea_EPlayerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Pangea_EPlayerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Pangea_EPlayerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Pangea_EPlayerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Pangea_EPlayerState()
{
	if (!Z_Registration_Info_UEnum_EPlayerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerState.InnerSingleton, Z_Construct_UEnum_Pangea_EPlayerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerState.InnerSingleton;
}
// End Enum EPlayerState

// Begin Class UPlayerAvatarAnimInstance Function OnStateAnimationEnds
struct Z_Construct_UFunction_UPlayerAvatarAnimInstance_OnStateAnimationEnds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerAvatarAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAvatarAnimInstance_OnStateAnimationEnds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAvatarAnimInstance, nullptr, "OnStateAnimationEnds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAvatarAnimInstance_OnStateAnimationEnds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAvatarAnimInstance_OnStateAnimationEnds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerAvatarAnimInstance_OnStateAnimationEnds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAvatarAnimInstance_OnStateAnimationEnds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAvatarAnimInstance::execOnStateAnimationEnds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStateAnimationEnds();
	P_NATIVE_END;
}
// End Class UPlayerAvatarAnimInstance Function OnStateAnimationEnds

// Begin Class UPlayerAvatarAnimInstance
void UPlayerAvatarAnimInstance::StaticRegisterNativesUPlayerAvatarAnimInstance()
{
	UClass* Class = UPlayerAvatarAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnStateAnimationEnds", &UPlayerAvatarAnimInstance::execOnStateAnimationEnds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAvatarAnimInstance);
UClass* Z_Construct_UClass_UPlayerAvatarAnimInstance_NoRegister()
{
	return UPlayerAvatarAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerAvatarAnimInstance.h" },
		{ "ModuleRelativePath", "PlayerAvatarAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "PlayerAvatarAnimInstance" },
		{ "ModuleRelativePath", "PlayerAvatarAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isAttacking_MetaData[] = {
		{ "Category", "PlayerAvatarAnimInstance" },
		{ "ModuleRelativePath", "PlayerAvatarAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "PlayerAvatarAnimInstance" },
		{ "ModuleRelativePath", "PlayerAvatarAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static void NewProp_isAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttacking;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAvatarAnimInstance_OnStateAnimationEnds, "OnStateAnimationEnds" }, // 1535031966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAvatarAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAvatarAnimInstance, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
void Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_isAttacking_SetBit(void* Obj)
{
	((UPlayerAvatarAnimInstance*)Obj)->isAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAvatarAnimInstance), &Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAttacking_MetaData), NewProp_isAttacking_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAvatarAnimInstance, State), Z_Construct_UEnum_Pangea_EPlayerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2082475894
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_isAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::ClassParams = {
	&UPlayerAvatarAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAvatarAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPlayerAvatarAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAvatarAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAvatarAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAvatarAnimInstance.OuterSingleton;
}
template<> PANGEA_API UClass* StaticClass<UPlayerAvatarAnimInstance>()
{
	return UPlayerAvatarAnimInstance::StaticClass();
}
UPlayerAvatarAnimInstance::UPlayerAvatarAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAvatarAnimInstance);
UPlayerAvatarAnimInstance::~UPlayerAvatarAnimInstance() {}
// End Class UPlayerAvatarAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerState_StaticEnum, TEXT("EPlayerState"), &Z_Registration_Info_UEnum_EPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2082475894U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAvatarAnimInstance, UPlayerAvatarAnimInstance::StaticClass, TEXT("UPlayerAvatarAnimInstance"), &Z_Registration_Info_UClass_UPlayerAvatarAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAvatarAnimInstance), 2883792743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_4172370356(TEXT("/Script/Pangea"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PlayerAvatarAnimInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
