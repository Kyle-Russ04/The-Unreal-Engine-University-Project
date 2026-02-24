// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniGeoImporter.h"

#ifdef HOUDINIENGINE_HoudiniGeoImporter_generated_h
#error "HoudiniGeoImporter.generated.h already included, missing '#pragma once' in HoudiniGeoImporter.h"
#endif
#define HOUDINIENGINE_HoudiniGeoImporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniGeoImporter ******************************************************
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImporter_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniGeoImporter(); \
	friend struct Z_Construct_UClass_UHoudiniGeoImporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniGeoImporter_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniGeoImporter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngine"), Z_Construct_UClass_UHoudiniGeoImporter_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniGeoImporter)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniGeoImporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniGeoImporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniGeoImporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniGeoImporter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniGeoImporter(UHoudiniGeoImporter&&) = delete; \
	UHoudiniGeoImporter(const UHoudiniGeoImporter&) = delete; \
	NO_API virtual ~UHoudiniGeoImporter();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_45_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_48_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniGeoImporter;

// ********** End Class UHoudiniGeoImporter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniGeoImporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
