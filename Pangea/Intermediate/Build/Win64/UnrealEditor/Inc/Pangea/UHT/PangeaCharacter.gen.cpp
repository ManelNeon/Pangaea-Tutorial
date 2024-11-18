// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangea/PangeaCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangeaCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PANGEA_API UClass* Z_Construct_UClass_APangeaCharacter();
PANGEA_API UClass* Z_Construct_UClass_APangeaCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangea();
// End Cross Module References

// Begin Class APangeaCharacter Function CanAttack
struct Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics
{
	struct PangeaCharacter_eventCanAttack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Character" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PangeaCharacter_eventCanAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PangeaCharacter_eventCanAttack_Parms), &Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APangeaCharacter, nullptr, "CanAttack", nullptr, nullptr, Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::PangeaCharacter_eventCanAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::PangeaCharacter_eventCanAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APangeaCharacter_CanAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APangeaCharacter_CanAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APangeaCharacter::execCanAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAttack();
	P_NATIVE_END;
}
// End Class APangeaCharacter Function CanAttack

// Begin Class APangeaCharacter Function GetHealthPoints
struct Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics
{
	struct PangeaCharacter_eventGetHealthPoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangea | Character" },
		{ "DisplayName", "Get HP" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PangeaCharacter_eventGetHealthPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APangeaCharacter, nullptr, "GetHealthPoints", nullptr, nullptr, Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::PangeaCharacter_eventGetHealthPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::PangeaCharacter_eventGetHealthPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APangeaCharacter_GetHealthPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APangeaCharacter_GetHealthPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APangeaCharacter::execGetHealthPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealthPoints();
	P_NATIVE_END;
}
// End Class APangeaCharacter Function GetHealthPoints

// Begin Class APangeaCharacter Function IsKilled
struct Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics
{
	struct PangeaCharacter_eventIsKilled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pangaea|Character" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PangeaCharacter_eventIsKilled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PangeaCharacter_eventIsKilled_Parms), &Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APangeaCharacter, nullptr, "IsKilled", nullptr, nullptr, Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::PropPointers), sizeof(Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::PangeaCharacter_eventIsKilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::PangeaCharacter_eventIsKilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APangeaCharacter_IsKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APangeaCharacter_IsKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APangeaCharacter::execIsKilled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsKilled();
	P_NATIVE_END;
}
// End Class APangeaCharacter Function IsKilled

// Begin Class APangeaCharacter
void APangeaCharacter::StaticRegisterNativesAPangeaCharacter()
{
	UClass* Class = APangeaCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAttack", &APangeaCharacter::execCanAttack },
		{ "GetHealthPoints", &APangeaCharacter::execGetHealthPoints },
		{ "IsKilled", &APangeaCharacter::execIsKilled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APangeaCharacter);
UClass* Z_Construct_UClass_APangeaCharacter_NoRegister()
{
	return APangeaCharacter::StaticClass();
}
struct Z_Construct_UClass_APangeaCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PangeaCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Pangea Character Params" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Pangaea Character Params" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armer_MetaData[] = {
		{ "Category", "Pangaea Character Params" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Pangaea Character Params" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackInterval_MetaData[] = {
		{ "Category", "Pangaea Character Params" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PangeaCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HealthPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Armer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APangeaCharacter_CanAttack, "CanAttack" }, // 211555361
		{ &Z_Construct_UFunction_APangeaCharacter_GetHealthPoints, "GetHealthPoints" }, // 657519246
		{ &Z_Construct_UFunction_APangeaCharacter_IsKilled, "IsKilled" }, // 3870837071
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangeaCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APangeaCharacter_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangeaCharacter, HealthPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPoints_MetaData), NewProp_HealthPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APangeaCharacter_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangeaCharacter, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APangeaCharacter_Statics::NewProp_Armer = { "Armer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangeaCharacter, Armer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armer_MetaData), NewProp_Armer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APangeaCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangeaCharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APangeaCharacter_Statics::NewProp_AttackInterval = { "AttackInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangeaCharacter, AttackInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackInterval_MetaData), NewProp_AttackInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APangeaCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangeaCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APangeaCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APangeaCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APangeaCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangeaCharacter_Statics::NewProp_HealthPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangeaCharacter_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangeaCharacter_Statics::NewProp_Armer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangeaCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangeaCharacter_Statics::NewProp_AttackInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangeaCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APangeaCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangeaCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APangeaCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangeaCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APangeaCharacter_Statics::ClassParams = {
	&APangeaCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APangeaCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APangeaCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APangeaCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APangeaCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APangeaCharacter()
{
	if (!Z_Registration_Info_UClass_APangeaCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APangeaCharacter.OuterSingleton, Z_Construct_UClass_APangeaCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APangeaCharacter.OuterSingleton;
}
template<> PANGEA_API UClass* StaticClass<APangeaCharacter>()
{
	return APangeaCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APangeaCharacter);
APangeaCharacter::~APangeaCharacter() {}
// End Class APangeaCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APangeaCharacter, APangeaCharacter::StaticClass, TEXT("APangeaCharacter"), &Z_Registration_Info_UClass_APangeaCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APangeaCharacter), 3664239839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_3030443034(TEXT("/Script/Pangea"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
