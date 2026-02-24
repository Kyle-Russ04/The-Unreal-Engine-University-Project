// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniRuntimeSettings.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniRuntimeSettings_generated_h
#error "HoudiniRuntimeSettings.generated.h already included, missing '#pragma once' in HoudiniRuntimeSettings.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHoudiniStaticMeshGenerationProperties ****************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniStaticMeshGenerationProperties_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniStaticMeshGenerationProperties;
// ********** End ScriptStruct FHoudiniStaticMeshGenerationProperties ******************************

// ********** Begin Class UHoudiniRuntimeSettings **************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_159_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniRuntimeSettings(); \
	friend struct Z_Construct_UClass_UHoudiniRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_159_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniRuntimeSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniRuntimeSettings(UHoudiniRuntimeSettings&&) = delete; \
	UHoudiniRuntimeSettings(const UHoudiniRuntimeSettings&) = delete;


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_156_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_159_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_159_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h_159_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniRuntimeSettings;

// ********** End Class UHoudiniRuntimeSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniRuntimeSettings_h

// ********** Begin Enum EHoudiniRuntimeSettingsSessionType ****************************************
#define FOREACH_ENUM_EHOUDINIRUNTIMESETTINGSSESSIONTYPE(op) \
	op(HRSST_InProcess) \
	op(HRSST_Socket) \
	op(HRSST_NamedPipe) \
	op(HRSST_None) \
	op(HRSST_MemoryBuffer) 

enum EHoudiniRuntimeSettingsSessionType : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRuntimeSettingsSessionType>();
// ********** End Enum EHoudiniRuntimeSettingsSessionType ******************************************

// ********** Begin Enum EHoudiniRuntimeSettingsRecomputeFlag **************************************
#define FOREACH_ENUM_EHOUDINIRUNTIMESETTINGSRECOMPUTEFLAG(op) \
	op(HRSRF_Always) \
	op(HRSRF_OnlyIfMissing) \
	op(HRSRF_Never) 

enum EHoudiniRuntimeSettingsRecomputeFlag : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRuntimeSettingsRecomputeFlag>();
// ********** End Enum EHoudiniRuntimeSettingsRecomputeFlag ****************************************

// ********** Begin Enum EHoudiniExecutableType ****************************************************
#define FOREACH_ENUM_EHOUDINIEXECUTABLETYPE(op) \
	op(HRSHE_Houdini) \
	op(HRSHE_HoudiniFX) \
	op(HRSHE_HoudiniCore) \
	op(HRSHE_HoudiniIndie) 

enum EHoudiniExecutableType : int8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniExecutableType>();
// ********** End Enum EHoudiniExecutableType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
