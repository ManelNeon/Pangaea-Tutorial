// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangea/PangeaGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangeaGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PANGEA_API UClass* Z_Construct_UClass_UPangeaGameInstance();
PANGEA_API UClass* Z_Construct_UClass_UPangeaGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangea();
// End Cross Module References

// Begin Class UPangeaGameInstance
void UPangeaGameInstance::StaticRegisterNativesUPangeaGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPangeaGameInstance);
UClass* Z_Construct_UClass_UPangeaGameInstance_NoRegister()
{
	return UPangeaGameInstance::StaticClass();
}
struct Z_Construct_UClass_UPangeaGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PangeaGameInstance.h" },
		{ "ModuleRelativePath", "PangeaGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPangeaGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPangeaGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPangeaGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPangeaGameInstance_Statics::ClassParams = {
	&UPangeaGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPangeaGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPangeaGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPangeaGameInstance()
{
	if (!Z_Registration_Info_UClass_UPangeaGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPangeaGameInstance.OuterSingleton, Z_Construct_UClass_UPangeaGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPangeaGameInstance.OuterSingleton;
}
template<> PANGEA_API UClass* StaticClass<UPangeaGameInstance>()
{
	return UPangeaGameInstance::StaticClass();
}
UPangeaGameInstance::UPangeaGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPangeaGameInstance);
UPangeaGameInstance::~UPangeaGameInstance() {}
// End Class UPangeaGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPangeaGameInstance, UPangeaGameInstance::StaticClass, TEXT("UPangeaGameInstance"), &Z_Registration_Info_UClass_UPangeaGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPangeaGameInstance), 2743492474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameInstance_h_2396585817(TEXT("/Script/Pangea"),
	Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDev_UnrealProjects_Pangaea_Tutorial_Pangea_Source_Pangea_PangeaGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
