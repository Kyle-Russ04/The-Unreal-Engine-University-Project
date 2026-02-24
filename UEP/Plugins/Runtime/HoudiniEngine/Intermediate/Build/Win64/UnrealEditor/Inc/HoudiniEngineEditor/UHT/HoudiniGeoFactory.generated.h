// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniGeoFactory.h"

#ifdef HOUDINIENGINEEDITOR_HoudiniGeoFactory_generated_h
#error "HoudiniGeoFactory.generated.h already included, missing '#pragma once' in HoudiniGeoFactory.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniGeoFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniGeoFactory *******************************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniGeoFactory_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniGeoFactory(); \
	friend struct Z_Construct_UClass_UHoudiniGeoFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniGeoFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniGeoFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniGeoFactory_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniGeoFactory) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniGeoFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniGeoFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniGeoFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniGeoFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniGeoFactory(UHoudiniGeoFactory&&) = delete; \
	UHoudiniGeoFactory(const UHoudiniGeoFactory&) = delete; \
	NO_API virtual ~UHoudiniGeoFactory();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_37_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniGeoFactory;

// ********** End Class UHoudiniGeoFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniGeoFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
