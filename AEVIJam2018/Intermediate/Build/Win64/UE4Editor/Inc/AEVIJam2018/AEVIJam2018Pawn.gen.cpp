// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AEVIJam2018Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEVIJam2018Pawn() {}
// Cross Module References
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018Pawn_NoRegister();
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AEVIJam2018();
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018Block_NoRegister();
// End Cross Module References
	void AAEVIJam2018Pawn::StaticRegisterNativesAAEVIJam2018Pawn()
	{
	}
	UClass* Z_Construct_UClass_AAEVIJam2018Pawn_NoRegister()
	{
		return AAEVIJam2018Pawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AAEVIJam2018Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_AEVIJam2018,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "AEVIJam2018Pawn.h" },
				{ "ModuleRelativePath", "AEVIJam2018Pawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[] = {
				{ "Category", "AEVIJam2018Pawn" },
				{ "ModuleRelativePath", "AEVIJam2018Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentBlockFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000805, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018Pawn, CurrentBlockFocus), Z_Construct_UClass_AAEVIJam2018Block_NoRegister, METADATA_PARAMS(NewProp_CurrentBlockFocus_MetaData, ARRAY_COUNT(NewProp_CurrentBlockFocus_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentBlockFocus,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAEVIJam2018Pawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAEVIJam2018Pawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAEVIJam2018Pawn, 3169856936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAEVIJam2018Pawn(Z_Construct_UClass_AAEVIJam2018Pawn, &AAEVIJam2018Pawn::StaticClass, TEXT("/Script/AEVIJam2018"), TEXT("AAEVIJam2018Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAEVIJam2018Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
