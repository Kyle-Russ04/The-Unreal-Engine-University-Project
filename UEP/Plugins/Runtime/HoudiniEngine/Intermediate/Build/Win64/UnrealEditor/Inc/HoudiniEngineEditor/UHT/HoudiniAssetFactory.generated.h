// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAssetFactory.h"

#ifdef HOUDINIENGINEEDITOR_HoudiniAssetFactory_generated_h
#error "HoudiniAssetFactory.generated.h already included, missing '#pragma once' in HoudiniAssetFactory.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniAssetFactory *****************************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetFactory_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniAssetFactory(); \
	friend struct Z_Construct_UClass_UHoudiniAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniAssetFactory) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniAssetFactory(UHoudiniAssetFactory&&) = delete; \
	UHoudiniAssetFactory(const UHoudiniAssetFactory&) = delete; \
	NO_API virtual ~UHoudiniAssetFactory();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_37_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniAssetFactory;

// ********** End Class UHoudiniAssetFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
