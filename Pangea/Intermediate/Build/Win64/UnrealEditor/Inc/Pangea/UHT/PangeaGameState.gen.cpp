// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangea/PangeaGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangeaGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
PANGEA_API UClass* Z_Construct_UClass_APangeaGameState();
PANGEA_API UClass* Z_Construct_UClass_APangeaGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangea();
// End Cross Module References

// Begin Class APangeaGameState
void APangeaGameState::StaticRegisterNativesAPangeaGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APangeaGameState);
UClass* Z_Construct_UClass_APangeaGameState_NoRegister()
{
	return APangeaGameState::StaticClass();
}
struct Z_Construct_UClass_APangeaGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PangeaGameState.h" },
		{ "ModuleRelativePath", "PangeaGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangeaGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APangeaGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangeaGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APangeaGameState_Statics::ClassParams = {
	&APangeaGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APangeaGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_APangeaGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APangeaGameState()
{
	if (!Z_Registration_Info_UClass_APangeaGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APangeaGameState.OuterSingleton, Z_Construct_UClass_APangeaGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APangeaGameState.OuterSingleton;
}
template<> PANGEA_API UClass* StaticClass<APangeaGameState>()
{
	return APangeaGameState::StaticClass();
}
APangeaGameState::APangeaGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APangeaGameState);
APangeaGameState::~APangeaGameState() {}
// End Class APangeaGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APangeaGameState, APangeaGameState::StaticClass, TEXT("APangeaGameState"), &Z_Registration_Info_UClass_APangeaGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APangeaGameState), 1491107117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameState_h_2468878203(TEXT("/Script/Pangea"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
