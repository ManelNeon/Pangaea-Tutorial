// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangea/PangeaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangeaGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PANGEA_API UClass* Z_Construct_UClass_APangeaGameMode();
PANGEA_API UClass* Z_Construct_UClass_APangeaGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangea();
// End Cross Module References

// Begin Class APangeaGameMode
void APangeaGameMode::StaticRegisterNativesAPangeaGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APangeaGameMode);
UClass* Z_Construct_UClass_APangeaGameMode_NoRegister()
{
	return APangeaGameMode::StaticClass();
}
struct Z_Construct_UClass_APangeaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PangeaGameMode.h" },
		{ "ModuleRelativePath", "PangeaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangeaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APangeaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangeaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APangeaGameMode_Statics::ClassParams = {
	&APangeaGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APangeaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APangeaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APangeaGameMode()
{
	if (!Z_Registration_Info_UClass_APangeaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APangeaGameMode.OuterSingleton, Z_Construct_UClass_APangeaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APangeaGameMode.OuterSingleton;
}
template<> PANGEA_API UClass* StaticClass<APangeaGameMode>()
{
	return APangeaGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APangeaGameMode);
APangeaGameMode::~APangeaGameMode() {}
// End Class APangeaGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APangeaGameMode, APangeaGameMode::StaticClass, TEXT("APangeaGameMode"), &Z_Registration_Info_UClass_APangeaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APangeaGameMode), 1897139388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameMode_h_2351308570(TEXT("/Script/Pangea"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
