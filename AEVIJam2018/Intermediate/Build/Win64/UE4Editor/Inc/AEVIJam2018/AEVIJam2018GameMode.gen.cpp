// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AEVIJam2018GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEVIJam2018GameMode() {}
// Cross Module References
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018GameMode_NoRegister();
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AEVIJam2018();
// End Cross Module References
	void AAEVIJam2018GameMode::StaticRegisterNativesAAEVIJam2018GameMode()
	{
	}
	UClass* Z_Construct_UClass_AAEVIJam2018GameMode_NoRegister()
	{
		return AAEVIJam2018GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AAEVIJam2018GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AEVIJam2018,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "AEVIJam2018GameMode.h" },
				{ "ModuleRelativePath", "AEVIJam2018GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAEVIJam2018GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAEVIJam2018GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAEVIJam2018GameMode, 3590582552);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAEVIJam2018GameMode(Z_Construct_UClass_AAEVIJam2018GameMode, &AAEVIJam2018GameMode::StaticClass, TEXT("/Script/AEVIJam2018"), TEXT("AAEVIJam2018GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAEVIJam2018GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
