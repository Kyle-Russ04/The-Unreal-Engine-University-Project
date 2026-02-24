// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPresetActorFactory.h"

#ifdef HOUDINIENGINEEDITOR_HoudiniPresetActorFactory_generated_h
#error "HoudiniPresetActorFactory.generated.h already included, missing '#pragma once' in HoudiniPresetActorFactory.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPresetActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniPresetActorFactory ***********************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPresetActorFactory_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPresetActorFactory(); \
	friend struct Z_Construct_UClass_UHoudiniPresetActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPresetActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPresetActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniPresetActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPresetActorFactory)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPresetActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPresetActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPresetActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPresetActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPresetActorFactory(UHoudiniPresetActorFactory&&) = delete; \
	UHoudiniPresetActorFactory(const UHoudiniPresetActorFactory&) = delete; \
	NO_API virtual ~UHoudiniPresetActorFactory();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_40_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPresetActorFactory;

// ********** End Class UHoudiniPresetActorFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniPresetActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
