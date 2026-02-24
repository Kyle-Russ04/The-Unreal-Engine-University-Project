// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAssetActor.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniAssetActor_generated_h
#error "HoudiniAssetActor.generated.h already included, missing '#pragma once' in HoudiniAssetActor.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHoudiniAssetActor *******************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAHoudiniAssetActor(); \
	friend struct Z_Construct_UClass_AHoudiniAssetActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AHoudiniAssetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_AHoudiniAssetActor_NoRegister) \
	DECLARE_SERIALIZER(AHoudiniAssetActor)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHoudiniAssetActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHoudiniAssetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoudiniAssetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoudiniAssetActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHoudiniAssetActor(AHoudiniAssetActor&&) = delete; \
	AHoudiniAssetActor(const AHoudiniAssetActor&) = delete; \
	NO_API virtual ~AHoudiniAssetActor();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_39_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_42_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHoudiniAssetActor;

// ********** End Class AHoudiniAssetActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
