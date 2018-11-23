// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AEVIJam2018Block.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEVIJam2018Block() {}
// Cross Module References
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018Block_NoRegister();
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018Block();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AEVIJam2018();
	AEVIJAM2018_API UFunction* Z_Construct_UFunction_AAEVIJam2018Block_BlockClicked();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	AEVIJAM2018_API UFunction* Z_Construct_UFunction_AAEVIJam2018Block_OnFingerPressedBlock();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	AEVIJAM2018_API UClass* Z_Construct_UClass_AAEVIJam2018BlockGrid_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AAEVIJam2018Block::StaticRegisterNativesAAEVIJam2018Block()
	{
		UClass* Class = AAEVIJam2018Block::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlockClicked", &AAEVIJam2018Block::execBlockClicked },
			{ "OnFingerPressedBlock", &AAEVIJam2018Block::execOnFingerPressedBlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AAEVIJam2018Block_BlockClicked()
	{
		struct AEVIJam2018Block_eventBlockClicked_Parms
		{
			UPrimitiveComponent* ClickedComp;
			FKey ButtonClicked;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonClicked = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonClicked", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AEVIJam2018Block_eventBlockClicked_Parms, ButtonClicked), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClickedComp = { UE4CodeGen_Private::EPropertyClass::Object, "ClickedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AEVIJam2018Block_eventBlockClicked_Parms, ClickedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClickedComp_MetaData, ARRAY_COUNT(NewProp_ClickedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonClicked,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClickedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "AEVIJam2018Block.h" },
				{ "ToolTip", "Handle the block being clicked" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAEVIJam2018Block, "BlockClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(AEVIJam2018Block_eventBlockClicked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AAEVIJam2018Block_OnFingerPressedBlock()
	{
		struct AEVIJam2018Block_eventOnFingerPressedBlock_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			UPrimitiveComponent* TouchedComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TouchedComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AEVIJam2018Block_eventOnFingerPressedBlock_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_TouchedComponent_MetaData, ARRAY_COUNT(NewProp_TouchedComponent_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "FingerIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AEVIJam2018Block_eventOnFingerPressedBlock_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TouchedComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FingerIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "AEVIJam2018Block.h" },
				{ "ToolTip", "Handle the block being touched" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AAEVIJam2018Block, "OnFingerPressedBlock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(AEVIJam2018Block_eventOnFingerPressedBlock_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAEVIJam2018Block_NoRegister()
	{
		return AAEVIJam2018Block::StaticClass();
	}
	UClass* Z_Construct_UClass_AAEVIJam2018Block()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_AEVIJam2018,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AAEVIJam2018Block_BlockClicked, "BlockClicked" }, // 3707110039
				{ &Z_Construct_UFunction_AAEVIJam2018Block_OnFingerPressedBlock, "OnFingerPressedBlock" }, // 2151708323
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AEVIJam2018Block.h" },
				{ "ModuleRelativePath", "AEVIJam2018Block.h" },
				{ "ToolTip", "A block that can be clicked" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[] = {
				{ "ModuleRelativePath", "AEVIJam2018Block.h" },
				{ "ToolTip", "Grid that owns us" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGrid = { UE4CodeGen_Private::EPropertyClass::Object, "OwningGrid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018Block, OwningGrid), Z_Construct_UClass_AAEVIJam2018BlockGrid_NoRegister, METADATA_PARAMS(NewProp_OwningGrid_MetaData, ARRAY_COUNT(NewProp_OwningGrid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrangeMaterial_MetaData[] = {
				{ "ModuleRelativePath", "AEVIJam2018Block.h" },
				{ "ToolTip", "Pointer to orange material used on active blocks" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "OrangeMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018Block, OrangeMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(NewProp_OrangeMaterial_MetaData, ARRAY_COUNT(NewProp_OrangeMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueMaterial_MetaData[] = {
				{ "ModuleRelativePath", "AEVIJam2018Block.h" },
				{ "ToolTip", "Pointer to blue material used on inactive blocks" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "BlueMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018Block, BlueMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(NewProp_BlueMaterial_MetaData, ARRAY_COUNT(NewProp_BlueMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[] = {
				{ "ModuleRelativePath", "AEVIJam2018Block.h" },
				{ "ToolTip", "Pointer to white material used on the focused block" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "BaseMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018Block, BaseMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_BaseMaterial_MetaData, ARRAY_COUNT(NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Block" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AEVIJam2018Block.h" },
				{ "ToolTip", "StaticMesh component for the clickable block" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BlockMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018Block, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_BlockMesh_MetaData, ARRAY_COUNT(NewProp_BlockMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Block" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AEVIJam2018Block.h" },
				{ "ToolTip", "Dummy root component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot = { UE4CodeGen_Private::EPropertyClass::Object, "DummyRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAEVIJam2018Block, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_DummyRoot_MetaData, ARRAY_COUNT(NewProp_DummyRoot_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningGrid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OrangeMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlueMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DummyRoot,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAEVIJam2018Block>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAEVIJam2018Block::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AAEVIJam2018Block, 144134066);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAEVIJam2018Block(Z_Construct_UClass_AAEVIJam2018Block, &AAEVIJam2018Block::StaticClass, TEXT("/Script/AEVIJam2018"), TEXT("AAEVIJam2018Block"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAEVIJam2018Block);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
