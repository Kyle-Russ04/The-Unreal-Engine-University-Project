// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterFile.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterFile_generated_h
#error "HoudiniParameterFile.generated.h already included, missing '#pragma once' in HoudiniParameterFile.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterFile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterFile ****************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFile_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterFile(); \
	friend struct Z_Construct_UClass_UHoudiniParameterFile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFile_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterFile, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterFile_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterFile)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterFile); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterFile(UHoudiniParameterFile&&) = delete; \
	UHoudiniParameterFile(const UHoudiniParameterFile&) = delete; \
	NO_API virtual ~UHoudiniParameterFile();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_33_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_36_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterFile;

// ********** End Class UHoudiniParameterFile ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
