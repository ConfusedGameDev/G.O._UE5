// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G_O_FiniteRunner/G_O_FiniteRunnerGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG_O_FiniteRunnerGameModeBase() {}
// Cross Module References
	G_O_FINITERUNNER_API UClass* Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_NoRegister();
	G_O_FINITERUNNER_API UClass* Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_G_O_FiniteRunner();
// End Cross Module References
	void AG_O_FiniteRunnerGameModeBase::StaticRegisterNativesAG_O_FiniteRunnerGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AG_O_FiniteRunnerGameModeBase);
	UClass* Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_NoRegister()
	{
		return AG_O_FiniteRunnerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_G_O_FiniteRunner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "G_O_FiniteRunnerGameModeBase.h" },
		{ "ModuleRelativePath", "G_O_FiniteRunnerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AG_O_FiniteRunnerGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_Statics::ClassParams = {
		&AG_O_FiniteRunnerGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AG_O_FiniteRunnerGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AG_O_FiniteRunnerGameModeBase.OuterSingleton, Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AG_O_FiniteRunnerGameModeBase.OuterSingleton;
	}
	template<> G_O_FINITERUNNER_API UClass* StaticClass<AG_O_FiniteRunnerGameModeBase>()
	{
		return AG_O_FiniteRunnerGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AG_O_FiniteRunnerGameModeBase);
	struct Z_CompiledInDeferFile_FID_G_O_FiniteRunner_Source_G_O_FiniteRunner_G_O_FiniteRunnerGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_O_FiniteRunner_Source_G_O_FiniteRunner_G_O_FiniteRunnerGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AG_O_FiniteRunnerGameModeBase, AG_O_FiniteRunnerGameModeBase::StaticClass, TEXT("AG_O_FiniteRunnerGameModeBase"), &Z_Registration_Info_UClass_AG_O_FiniteRunnerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AG_O_FiniteRunnerGameModeBase), 3956042554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G_O_FiniteRunner_Source_G_O_FiniteRunner_G_O_FiniteRunnerGameModeBase_h_364932661(TEXT("/Script/G_O_FiniteRunner"),
		Z_CompiledInDeferFile_FID_G_O_FiniteRunner_Source_G_O_FiniteRunner_G_O_FiniteRunnerGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G_O_FiniteRunner_Source_G_O_FiniteRunner_G_O_FiniteRunnerGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
