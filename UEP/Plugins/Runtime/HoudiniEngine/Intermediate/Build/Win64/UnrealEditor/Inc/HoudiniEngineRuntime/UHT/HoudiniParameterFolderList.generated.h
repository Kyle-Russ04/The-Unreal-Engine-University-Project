// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterFolderList.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterFolderList_generated_h
#error "HoudiniParameterFolderList.generated.h already included, missing '#pragma once' in HoudiniParameterFolderList.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterFolderList_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterFolderList **********************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolderList_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterFolderList(); \
	friend struct Z_Construct_UClass_UHoudiniParameterFolderList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolderList_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterFolderList, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterFolderList_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterFolderList)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterFolderList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterFolderList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterFolderList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterFolderList); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterFolderList(UHoudiniParameterFolderList&&) = delete; \
	UHoudiniParameterFolderList(const UHoudiniParameterFolderList&) = delete; \
	NO_API virtual ~UHoudiniParameterFolderList();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_35_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_38_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterFolderList;

// ********** End Class UHoudiniParameterFolderList ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolderList_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
