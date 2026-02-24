// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterButtonStrip.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterButtonStrip_generated_h
#error "HoudiniParameterButtonStrip.generated.h already included, missing '#pragma once' in HoudiniParameterButtonStrip.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterButtonStrip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterButtonStrip *********************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterButtonStrip(); \
	friend struct Z_Construct_UClass_UHoudiniParameterButtonStrip_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterButtonStrip_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterButtonStrip, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterButtonStrip_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterButtonStrip)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterButtonStrip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterButtonStrip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterButtonStrip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterButtonStrip); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterButtonStrip(UHoudiniParameterButtonStrip&&) = delete; \
	UHoudiniParameterButtonStrip(const UHoudiniParameterButtonStrip&) = delete; \
	NO_API virtual ~UHoudiniParameterButtonStrip();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_33_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_36_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterButtonStrip;

// ********** End Class UHoudiniParameterButtonStrip ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterButtonStrip_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
