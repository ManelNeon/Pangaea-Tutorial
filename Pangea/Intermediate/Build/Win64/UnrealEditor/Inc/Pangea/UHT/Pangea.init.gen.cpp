// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangea_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Pangea;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Pangea()
	{
		if (!Z_Registration_Info_UPackage__Script_Pangea.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Pangea",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x81008509,
				0xAB07C354,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Pangea.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Pangea.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Pangea(Z_Construct_UPackage__Script_Pangea, TEXT("/Script/Pangea"), Z_Registration_Info_UPackage__Script_Pangea, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x81008509, 0xAB07C354));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
