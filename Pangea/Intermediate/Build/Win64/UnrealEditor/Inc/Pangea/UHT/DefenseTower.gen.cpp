// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangea/DefenseTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefenseTower() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PANGEA_API UClass* Z_Construct_UClass_ADefenseTower();
PANGEA_API UClass* Z_Construct_UClass_ADefenseTower_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangea();
// End Cross Module References

// Begin Class ADefenseTower Function CanFire
struct Z_Construct_UFunction_ADefenseTower_CanFire_Statics
{
	struct DefenseTower_eventCanFire_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangea|Defense Tower" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DefenseTower_eventCanFire_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DefenseTower_eventCanFire_Parms), &Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_CanFire_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_CanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "CanFire", nullptr, nullptr, Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::DefenseTower_eventCanFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefenseTower_CanFire_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefenseTower_CanFire_Statics::DefenseTower_eventCanFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefenseTower_CanFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_CanFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefenseTower::execCanFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanFire();
	P_NATIVE_END;
}
// End Class ADefenseTower Function CanFire

// Begin Class ADefenseTower Function GetHealthPoints
struct Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics
{
	struct DefenseTower_eventGetHealthPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangea|Defense Tower" },
		{ "DisplayName", "GetHP" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DefenseTower_eventGetHealthPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "GetHealthPoints", nullptr, nullptr, Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::DefenseTower_eventGetHealthPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::DefenseTower_eventGetHealthPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefenseTower_GetHealthPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_GetHealthPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefenseTower::execGetHealthPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealthPoints();
	P_NATIVE_END;
}
// End Class ADefenseTower Function GetHealthPoints

// Begin Class ADefenseTower Function IsDestroyed
struct Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics
{
	struct DefenseTower_eventIsDestroyed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangea|Defense Tower" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DefenseTower_eventIsDestroyed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DefenseTower_eventIsDestroyed_Parms), &Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefenseTower, nullptr, "IsDestroyed", nullptr, nullptr, Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::DefenseTower_eventIsDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::DefenseTower_eventIsDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADefenseTower_IsDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefenseTower_IsDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADefenseTower::execIsDestroyed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDestroyed();
	P_NATIVE_END;
}
// End Class ADefenseTower Function IsDestroyed

// Begin Class ADefenseTower
void ADefenseTower::StaticRegisterNativesADefenseTower()
{
	UClass* Class = ADefenseTower::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanFire", &ADefenseTower::execCanFire },
		{ "GetHealthPoints", &ADefenseTower::execGetHealthPoints },
		{ "IsDestroyed", &ADefenseTower::execIsDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefenseTower);
UClass* Z_Construct_UClass_ADefenseTower_NoRegister()
{
	return ADefenseTower::StaticClass();
}
struct Z_Construct_UClass_ADefenseTower_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DefenseTower.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Tower Params" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShellDefense_MetaData[] = {
		{ "Category", "Tower Params" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Tower Params" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadInterval_MetaData[] = {
		{ "Category", "Tower Params" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tower Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tower Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefenseTower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HealthPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShellDefense;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__BoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefenseTower_CanFire, "CanFire" }, // 1824670244
		{ &Z_Construct_UFunction_ADefenseTower_GetHealthPoints, "GetHealthPoints" }, // 3355050670
		{ &Z_Construct_UFunction_ADefenseTower_IsDestroyed, "IsDestroyed" }, // 3635065430
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefenseTower>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, HealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPoints_MetaData), NewProp_HealthPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_ShellDefense = { "ShellDefense", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, ShellDefense), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShellDefense_MetaData), NewProp_ShellDefense_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp_ReloadInterval = { "ReloadInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, ReloadInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadInterval_MetaData), NewProp_ReloadInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp__BoxComponent = { "_BoxComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, _BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__BoxComponent_MetaData), NewProp__BoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefenseTower_Statics::NewProp__MeshComponent = { "_MeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefenseTower, _MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__MeshComponent_MetaData), NewProp__MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefenseTower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_HealthPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_ShellDefense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp_ReloadInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp__BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefenseTower_Statics::NewProp__MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefenseTower_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefenseTower_Statics::ClassParams = {
	&ADefenseTower::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADefenseTower_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefenseTower_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefenseTower_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefenseTower()
{
	if (!Z_Registration_Info_UClass_ADefenseTower.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefenseTower.OuterSingleton, Z_Construct_UClass_ADefenseTower_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefenseTower.OuterSingleton;
}
template<> PANGEA_API UClass* StaticClass<ADefenseTower>()
{
	return ADefenseTower::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefenseTower);
ADefenseTower::~ADefenseTower() {}
// End Class ADefenseTower

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefenseTower, ADefenseTower::StaticClass, TEXT("ADefenseTower"), &Z_Registration_Info_UClass_ADefenseTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefenseTower), 1723611607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_835927871(TEXT("/Script/Pangea"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_DefenseTower_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
