// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPublicAPIBlueprintLib.h"

#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPIBlueprintLib_generated_h
#error "HoudiniPublicAPIBlueprintLib.generated.h already included, missing '#pragma once' in HoudiniPublicAPIBlueprintLib.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPIBlueprintLib_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UHoudiniPublicAPI;

// ********** Begin Class UHoudiniPublicAPIBlueprintLib ********************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_42_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAPI);


HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIBlueprintLib(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPublicAPIBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniPublicAPIBlueprintLib_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIBlueprintLib)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIBlueprintLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIBlueprintLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIBlueprintLib); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPublicAPIBlueprintLib(UHoudiniPublicAPIBlueprintLib&&) = delete; \
	UHoudiniPublicAPIBlueprintLib(const UHoudiniPublicAPIBlueprintLib&) = delete; \
	NO_API virtual ~UHoudiniPublicAPIBlueprintLib();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_39_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_42_RPC_WRAPPERS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_42_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPublicAPIBlueprintLib;

// ********** End Class UHoudiniPublicAPIBlueprintLib **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIBlueprintLib_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
