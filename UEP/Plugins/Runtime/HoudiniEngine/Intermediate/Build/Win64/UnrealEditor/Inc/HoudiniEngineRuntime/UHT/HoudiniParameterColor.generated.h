// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterColor.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterColor_generated_h
#error "HoudiniParameterColor.generated.h already included, missing '#pragma once' in HoudiniParameterColor.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterColor ***************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterColor_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterColor(); \
	friend struct Z_Construct_UClass_UHoudiniParameterColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterColor, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterColor_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterColor)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterColor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterColor(UHoudiniParameterColor&&) = delete; \
	UHoudiniParameterColor(const UHoudiniParameterColor&) = delete; \
	NO_API virtual ~UHoudiniParameterColor();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_33_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_36_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterColor;

// ********** End Class UHoudiniParameterColor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterColor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
