// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SHoudiniToolsPanel.h"

#ifdef HOUDINIENGINEEDITOR_SHoudiniToolsPanel_generated_h
#error "SHoudiniToolsPanel.generated.h already included, missing '#pragma once' in SHoudiniToolsPanel.h"
#endif
#define HOUDINIENGINEEDITOR_SHoudiniToolsPanel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniToolDirectoryProperties ******************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolDirectoryProperties_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniToolDirectoryProperties(); \
	friend struct Z_Construct_UClass_UHoudiniToolDirectoryProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolDirectoryProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniToolDirectoryProperties, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniToolDirectoryProperties_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniToolDirectoryProperties)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniToolDirectoryProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniToolDirectoryProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniToolDirectoryProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniToolDirectoryProperties); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniToolDirectoryProperties(UHoudiniToolDirectoryProperties&&) = delete; \
	UHoudiniToolDirectoryProperties(const UHoudiniToolDirectoryProperties&) = delete; \
	NO_API virtual ~UHoudiniToolDirectoryProperties();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_258_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_261_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniToolDirectoryProperties;

// ********** End Class UHoudiniToolDirectoryProperties ********************************************

// ********** Begin Class UHoudiniToolHelpers ******************************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolHelpers_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniToolHelpers(); \
	friend struct Z_Construct_UClass_UHoudiniToolHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniToolHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniToolHelpers, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniToolHelpers_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniToolHelpers)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniToolHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniToolHelpers(UHoudiniToolHelpers&&) = delete; \
	UHoudiniToolHelpers(const UHoudiniToolHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniToolHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniToolHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniToolHelpers) \
	NO_API virtual ~UHoudiniToolHelpers();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_274_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h_277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniToolHelpers;

// ********** End Class UHoudiniToolHelpers ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_SHoudiniToolsPanel_h

// ********** Begin Enum EHoudiniToolsViewMode *****************************************************
#define FOREACH_ENUM_EHOUDINITOOLSVIEWMODE(op) \
	op(EHoudiniToolsViewMode::TileView) \
	op(EHoudiniToolsViewMode::ListView) 

enum class EHoudiniToolsViewMode;
template<> struct TIsUEnumClass<EHoudiniToolsViewMode> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolsViewMode>();
// ********** End Enum EHoudiniToolsViewMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
