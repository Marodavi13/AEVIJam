// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AEVIJam2018PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEVIJam2018PlayerController() {}
// Cross Module References
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018PlayerController_NoRegister();
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AEVIJam2018();
// End Cross Module References
	void AAEVIJam2018PlayerController::StaticRegisterNativesAAEVIJam2018PlayerController()
	{
	}
	UClass* Z_Construct_UClass_AAEVIJam2018PlayerController_NoRegister()
	{
		return AAEVIJam2018PlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AAEVIJam2018PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_AEVIJam2018,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "AEVIJam2018PlayerController.h" },
				{ "ModuleRelativePath", "AEVIJam2018PlayerController.h" },
				{ "ToolTip", "PlayerController class used to enable cursor" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAEVIJam2018PlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAEVIJam2018PlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAEVIJam2018PlayerController, 1525291176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAEVIJam2018PlayerController(Z_Construct_UClass_AAEVIJam2018PlayerController, &AAEVIJam2018PlayerController::StaticClass, TEXT("/Script/AEVIJam2018"), TEXT("AAEVIJam2018PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAEVIJam2018PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
