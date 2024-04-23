// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/SurvivalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SURVIVAL_API UClass* Z_Construct_UClass_ASurvivalGameMode();
	SURVIVAL_API UClass* Z_Construct_UClass_ASurvivalGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void ASurvivalGameMode::StaticRegisterNativesASurvivalGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivalGameMode);
	UClass* Z_Construct_UClass_ASurvivalGameMode_NoRegister()
	{
		return ASurvivalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SurvivalGameMode.h" },
		{ "ModuleRelativePath", "SurvivalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalGameMode_Statics::ClassParams = {
		&ASurvivalGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalGameMode()
	{
		if (!Z_Registration_Info_UClass_ASurvivalGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalGameMode.OuterSingleton, Z_Construct_UClass_ASurvivalGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvivalGameMode.OuterSingleton;
	}
	template<> SURVIVAL_API UClass* StaticClass<ASurvivalGameMode>()
	{
		return ASurvivalGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalGameMode);
	ASurvivalGameMode::~ASurvivalGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unity_PortfolioProjects_UnrealSurvival_Survival_Source_Survival_SurvivalGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unity_PortfolioProjects_UnrealSurvival_Survival_Source_Survival_SurvivalGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalGameMode, ASurvivalGameMode::StaticClass, TEXT("ASurvivalGameMode"), &Z_Registration_Info_UClass_ASurvivalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalGameMode), 1563815770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unity_PortfolioProjects_UnrealSurvival_Survival_Source_Survival_SurvivalGameMode_h_3960375843(TEXT("/Script/Survival"),
		Z_CompiledInDeferFile_FID_Unity_PortfolioProjects_UnrealSurvival_Survival_Source_Survival_SurvivalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unity_PortfolioProjects_UnrealSurvival_Survival_Source_Survival_SurvivalGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
