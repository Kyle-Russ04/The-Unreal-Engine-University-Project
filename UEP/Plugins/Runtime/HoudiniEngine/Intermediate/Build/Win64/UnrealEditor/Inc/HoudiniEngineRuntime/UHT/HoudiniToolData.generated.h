// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniToolData.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniToolData_generated_h
#error "HoudiniToolData.generated.h already included, missing '#pragma once' in HoudiniToolData.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniToolData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHImageData *******************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHImageData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHImageData;
// ********** End ScriptStruct FHImageData *********************************************************

// ********** Begin Class UHoudiniToolData *********************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveToJSONFile); \
	DECLARE_FUNCTION(execConvertToJSONData); \
	DECLARE_FUNCTION(execPopulateFromJSONFile); \
	DECLARE_FUNCTION(execPopulateFromJSONData);


HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniToolData_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniToolData(); \
	friend struct Z_Construct_UClass_UHoudiniToolData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniToolData_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniToolData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniToolData_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniToolData)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniToolData(UHoudiniToolData&&) = delete; \
	UHoudiniToolData(const UHoudiniToolData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniToolData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniToolData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniToolData) \
	NO_API virtual ~UHoudiniToolData();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_85_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniToolData;

// ********** End Class UHoudiniToolData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniToolData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
