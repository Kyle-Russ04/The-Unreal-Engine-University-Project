// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngineCopyPropertiesInterface.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniEngineCopyPropertiesInterface_generated_h
#error "HoudiniEngineCopyPropertiesInterface.generated.h already included, missing '#pragma once' in HoudiniEngineCopyPropertiesInterface.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniEngineCopyPropertiesInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UHoudiniEngineCopyPropertiesInterface ********************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOUDINIENGINERUNTIME_API UHoudiniEngineCopyPropertiesInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniEngineCopyPropertiesInterface(UHoudiniEngineCopyPropertiesInterface&&) = delete; \
	UHoudiniEngineCopyPropertiesInterface(const UHoudiniEngineCopyPropertiesInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOUDINIENGINERUNTIME_API, UHoudiniEngineCopyPropertiesInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniEngineCopyPropertiesInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniEngineCopyPropertiesInterface) \
	virtual ~UHoudiniEngineCopyPropertiesInterface() = default;


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_40_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHoudiniEngineCopyPropertiesInterface(); \
	friend struct Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniEngineCopyPropertiesInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniEngineCopyPropertiesInterface_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniEngineCopyPropertiesInterface)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_40_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_40_GENERATED_UINTERFACE_BODY() \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_40_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHoudiniEngineCopyPropertiesInterface() {} \
public: \
	typedef UHoudiniEngineCopyPropertiesInterface UClassType; \
	typedef IHoudiniEngineCopyPropertiesInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_37_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniEngineCopyPropertiesInterface;

// ********** End Interface UHoudiniEngineCopyPropertiesInterface **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniEngineCopyPropertiesInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
