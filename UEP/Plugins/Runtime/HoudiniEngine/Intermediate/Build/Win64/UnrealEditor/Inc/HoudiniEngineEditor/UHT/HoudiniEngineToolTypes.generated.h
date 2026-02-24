// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngineToolTypes.h"

#ifdef HOUDINIENGINEEDITOR_HoudiniEngineToolTypes_generated_h
#error "HoudiniEngineToolTypes.generated.h already included, missing '#pragma once' in HoudiniEngineToolTypes.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniEngineToolTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHoudiniToolDirectory *********************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniToolDirectory_Statics; \
	HOUDINIENGINEEDITOR_API static class UScriptStruct* StaticStruct();


struct FHoudiniToolDirectory;
// ********** End ScriptStruct FHoudiniToolDirectory ***********************************************

// ********** Begin ScriptStruct FHoudiniToolCategory **********************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniToolCategory_Statics; \
	HOUDINIENGINEEDITOR_API static class UScriptStruct* StaticStruct();


struct FHoudiniToolCategory;
// ********** End ScriptStruct FHoudiniToolCategory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniEngineToolTypes_h

// ********** Begin Enum EHoudiniToolCategoryType **************************************************
#define FOREACH_ENUM_EHOUDINITOOLCATEGORYTYPE(op) \
	op(EHoudiniToolCategoryType::Package) \
	op(EHoudiniToolCategoryType::User) 

enum class EHoudiniToolCategoryType : uint8;
template<> struct TIsUEnumClass<EHoudiniToolCategoryType> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolCategoryType>();
// ********** End Enum EHoudiniToolCategoryType ****************************************************

// ********** Begin Enum EHoudiniPackageToolType ***************************************************
#define FOREACH_ENUM_EHOUDINIPACKAGETOOLTYPE(op) \
	op(EHoudiniPackageToolType::HoudiniAsset) \
	op(EHoudiniPackageToolType::Preset) 

enum class EHoudiniPackageToolType : uint8;
template<> struct TIsUEnumClass<EHoudiniPackageToolType> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPackageToolType>();
// ********** End Enum EHoudiniPackageToolType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
