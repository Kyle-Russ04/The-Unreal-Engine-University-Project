// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAsset.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniAsset_generated_h
#error "HoudiniAsset.generated.h already included, missing '#pragma once' in HoudiniAsset.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniAsset ************************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniAsset, NO_API)


HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniAsset(); \
	friend struct Z_Construct_UClass_UHoudiniAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniAsset_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniAsset) \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_42_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniAsset(UHoudiniAsset&&) = delete; \
	UHoudiniAsset(const UHoudiniAsset&) = delete; \
	NO_API virtual ~UHoudiniAsset();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_39_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_42_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniAsset;

// ********** End Class UHoudiniAsset **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
