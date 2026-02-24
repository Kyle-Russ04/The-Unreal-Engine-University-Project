// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAssetComponent.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniAssetComponent_generated_h
#error "HoudiniAssetComponent.generated.h already included, missing '#pragma once' in HoudiniAssetComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniAssetComponent ***************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_62_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniAssetComponent, NO_API)


HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniAssetComponent(); \
	friend struct Z_Construct_UClass_UHoudiniAssetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniAssetComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniAssetComponent_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniAssetComponent) \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_62_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UHoudiniAssetComponent*>(this); }


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniAssetComponent(UHoudiniAssetComponent&&) = delete; \
	UHoudiniAssetComponent(const UHoudiniAssetComponent&) = delete;


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_59_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_62_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniAssetComponent;

// ********** End Class UHoudiniAssetComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
