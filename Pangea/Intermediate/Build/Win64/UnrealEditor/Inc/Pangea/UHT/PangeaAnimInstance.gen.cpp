// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangea/PangeaAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangeaAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
PANGEA_API UClass* Z_Construct_UClass_UPangeaAnimInstance();
PANGEA_API UClass* Z_Construct_UClass_UPangeaAnimInstance_NoRegister();
PANGEA_API UEnum* Z_Construct_UEnum_Pangea_ECharacterState();
UPackage* Z_Construct_UPackage__Script_Pangea();
// End Cross Module References

// Begin Enum ECharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
static UEnum* ECharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Pangea_ECharacterState, (UObject*)Z_Construct_UPackage__Script_Pangea(), TEXT("ECharacterState"));
	}
	return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
}
template<> PANGEA_API UEnum* StaticEnum<ECharacterState>()
{
	return ECharacterState_StaticEnum();
}
struct Z_Construct_UEnum_Pangea_ECharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Name", "ECharacterState::Attack" },
		{ "BlueprintType", "true" },
		{ "Die.Name", "ECharacterState::Die" },
		{ "Hit.Name", "ECharacterState::Hit" },
		{ "Locomotion.Name", "ECharacterState::Locomotion" },
		{ "ModuleRelativePath", "PangeaAnimInstance.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterState::Locomotion", (int64)ECharacterState::Locomotion },
		{ "ECharacterState::Attack", (int64)ECharacterState::Attack },
		{ "ECharacterState::Hit", (int64)ECharacterState::Hit },
		{ "ECharacterState::Die", (int64)ECharacterState::Die },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Pangea_ECharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Pangea,
	nullptr,
	"ECharacterState",
	"ECharacterState",
	Z_Construct_UEnum_Pangea_ECharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Pangea_ECharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Pangea_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Pangea_ECharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Pangea_ECharacterState()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_Pangea_ECharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
}
// End Enum ECharacterState

// Begin Class UPangeaAnimInstance Function OnStateAnimationEnds
struct Z_Construct_UFunction_UPangeaAnimInstance_OnStateAnimationEnds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PangeaAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPangeaAnimInstance_OnStateAnimationEnds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPangeaAnimInstance, nullptr, "OnStateAnimationEnds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPangeaAnimInstance_OnStateAnimationEnds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPangeaAnimInstance_OnStateAnimationEnds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPangeaAnimInstance_OnStateAnimationEnds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPangeaAnimInstance_OnStateAnimationEnds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPangeaAnimInstance::execOnStateAnimationEnds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStateAnimationEnds();
	P_NATIVE_END;
}
// End Class UPangeaAnimInstance Function OnStateAnimationEnds

// Begin Class UPangeaAnimInstance
void UPangeaAnimInstance::StaticRegisterNativesUPangeaAnimInstance()
{
	UClass* Class = UPangeaAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnStateAnimationEnds", &UPangeaAnimInstance::execOnStateAnimationEnds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPangeaAnimInstance);
UClass* Z_Construct_UClass_UPangeaAnimInstance_NoRegister()
{
	return UPangeaAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPangeaAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PangeaAnimInstance.h" },
		{ "ModuleRelativePath", "PangeaAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "PangeaAnimInstance Params" },
		{ "ModuleRelativePath", "PangeaAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "PangeaAnimInstance Params" },
		{ "ModuleRelativePath", "PangeaAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPangeaAnimInstance_OnStateAnimationEnds, "OnStateAnimationEnds" }, // 3825374727
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPangeaAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPangeaAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPangeaAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPangeaAnimInstance_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPangeaAnimInstance_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPangeaAnimInstance, State), Z_Construct_UEnum_Pangea_ECharacterState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 3631554696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPangeaAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPangeaAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPangeaAnimInstance_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPangeaAnimInstance_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPangeaAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPangeaAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPangeaAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPangeaAnimInstance_Statics::ClassParams = {
	&UPangeaAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPangeaAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPangeaAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPangeaAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPangeaAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPangeaAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPangeaAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPangeaAnimInstance.OuterSingleton, Z_Construct_UClass_UPangeaAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPangeaAnimInstance.OuterSingleton;
}
template<> PANGEA_API UClass* StaticClass<UPangeaAnimInstance>()
{
	return UPangeaAnimInstance::StaticClass();
}
UPangeaAnimInstance::UPangeaAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPangeaAnimInstance);
UPangeaAnimInstance::~UPangeaAnimInstance() {}
// End Class UPangeaAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3631554696U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPangeaAnimInstance, UPangeaAnimInstance::StaticClass, TEXT("UPangeaAnimInstance"), &Z_Registration_Info_UClass_UPangeaAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPangeaAnimInstance), 2299868939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_2631385484(TEXT("/Script/Pangea"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaAnimInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
