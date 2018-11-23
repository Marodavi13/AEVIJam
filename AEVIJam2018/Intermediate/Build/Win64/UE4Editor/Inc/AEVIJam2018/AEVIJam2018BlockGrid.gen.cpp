// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AEVIJam2018BlockGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEVIJam2018BlockGrid() {}
// Cross Module References
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018BlockGrid_NoRegister();
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018BlockGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AEVIJam2018();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AAEVIJam2018BlockGrid::StaticRegisterNativesAAEVIJam2018BlockGrid()
	{
	}
	UClass* Z_Construct_UClass_AAEVIJam2018BlockGrid_NoRegister()
	{
		return AAEVIJam2018BlockGrid::StaticClass();
	}
	UClass* Z_Construct_UClass_AAEVIJam2018BlockGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_AEVIJam2018,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AEVIJam2018BlockGrid.h" },
				{ "ModuleRelativePath", "AEVIJam2018BlockGrid.h" },
				{ "ToolTip", "Class used to spawn blocks and manage score" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSpacing_MetaData[] = {
				{ "Category", "Grid" },
				{ "ModuleRelativePath", "AEVIJam2018BlockGrid.h" },
				{ "ToolTip", "Spacing of blocks" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockSpacing = { UE4CodeGen_Private::EPropertyClass::Float, "BlockSpacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018BlockGrid, BlockSpacing), METADATA_PARAMS(NewProp_BlockSpacing_MetaData, ARRAY_COUNT(NewProp_BlockSpacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "Category", "Grid" },
				{ "ModuleRelativePath", "AEVIJam2018BlockGrid.h" },
				{ "ToolTip", "Number of blocks along each side of grid" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Int, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018BlockGrid, Size), METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Grid" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AEVIJam2018BlockGrid.h" },
				{ "ToolTip", "Text component for the score" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText = { UE4CodeGen_Private::EPropertyClass::Object, "ScoreText", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018BlockGrid, ScoreText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(NewProp_ScoreText_MetaData, ARRAY_COUNT(NewProp_ScoreText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Grid" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AEVIJam2018BlockGrid.h" },
				{ "ToolTip", "Dummy root component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot = { UE4CodeGen_Private::EPropertyClass::Object, "DummyRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018BlockGrid, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_DummyRoot_MetaData, ARRAY_COUNT(NewProp_DummyRoot_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockSpacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScoreText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DummyRoot,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAEVIJam2018BlockGrid>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAEVIJam2018BlockGrid::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAEVIJam2018BlockGrid, 463361709);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAEVIJam2018BlockGrid(Z_Construct_UClass_AAEVIJam2018BlockGrid, &AAEVIJam2018BlockGrid::StaticClass, TEXT("/Script/AEVIJam2018"), TEXT("AAEVIJam2018BlockGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAEVIJam2018BlockGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
