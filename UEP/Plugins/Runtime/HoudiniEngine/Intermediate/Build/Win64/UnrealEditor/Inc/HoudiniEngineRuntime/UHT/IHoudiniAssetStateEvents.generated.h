// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IHoudiniAssetStateEvents.h"

#ifdef HOUDINIENGINERUNTIME_IHoudiniAssetStateEvents_generated_h
#error "IHoudiniAssetStateEvents.generated.h already included, missing '#pragma once' in IHoudiniAssetStateEvents.h"
#endif
#define HOUDINIENGINERUNTIME_IHoudiniAssetStateEvents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UHoudiniAssetStateEvents *********************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetStateEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniAssetStateEvents(UHoudiniAssetStateEvents&&) = delete; \
	UHoudiniAssetStateEvents(const UHoudiniAssetStateEvents&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetStateEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetStateEvents); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetStateEvents) \
	virtual ~UHoudiniAssetStateEvents() = default;


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHoudiniAssetStateEvents(); \
	friend struct Z_Construct_UClass_UHoudiniAssetStateEvents_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniAssetStateEvents, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniAssetStateEvents_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniAssetStateEvents)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_GENERATED_UINTERFACE_BODY() \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHoudiniAssetStateEvents() {} \
public: \
	typedef UHoudiniAssetStateEvents UClassType; \
	typedef IHoudiniAssetStateEvents ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_39_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h_42_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniAssetStateEvents;

// ********** End Interface UHoudiniAssetStateEvents ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_IHoudiniAssetStateEvents_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
