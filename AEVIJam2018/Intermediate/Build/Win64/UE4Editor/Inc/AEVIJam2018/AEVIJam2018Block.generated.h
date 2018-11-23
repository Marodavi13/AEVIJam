// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef AEVIJAM2018_AEVIJam2018Block_generated_h
#error "AEVIJam2018Block.generated.h already included, missing '#pragma once' in AEVIJam2018Block.h"
#endif
#define AEVIJAM2018_AEVIJam2018Block_generated_h

#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAEVIJam2018Block(); \
	friend AEVIJAM2018_API class UClass* Z_Construct_UClass_AAEVIJam2018Block(); \
public: \
	DECLARE_CLASS(AAEVIJam2018Block, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AEVIJam2018"), AEVIJAM2018_API) \
	DECLARE_SERIALIZER(AAEVIJam2018Block) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAEVIJam2018Block(); \
	friend AEVIJAM2018_API class UClass* Z_Construct_UClass_AAEVIJam2018Block(); \
public: \
	DECLARE_CLASS(AAEVIJam2018Block, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AEVIJam2018"), AEVIJAM2018_API) \
	DECLARE_SERIALIZER(AAEVIJam2018Block) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AEVIJAM2018_API AAEVIJam2018Block(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAEVIJam2018Block) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AEVIJAM2018_API, AAEVIJam2018Block); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAEVIJam2018Block); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEVIJAM2018_API AAEVIJam2018Block(AAEVIJam2018Block&&); \
	AEVIJAM2018_API AAEVIJam2018Block(const AAEVIJam2018Block&); \
public:


#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEVIJAM2018_API AAEVIJam2018Block(AAEVIJam2018Block&&); \
	AEVIJAM2018_API AAEVIJam2018Block(const AAEVIJam2018Block&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AEVIJAM2018_API, AAEVIJam2018Block); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAEVIJam2018Block); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAEVIJam2018Block)


#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(AAEVIJam2018Block, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(AAEVIJam2018Block, BlockMesh); }


#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_10_PROLOG
#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_PRIVATE_PROPERTY_OFFSET \
	AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_RPC_WRAPPERS \
	AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_INCLASS \
	AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_PRIVATE_PROPERTY_OFFSET \
	AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_INCLASS_NO_PURE_DECLS \
	AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AEVIJam2018_Source_AEVIJam2018_AEVIJam2018Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
