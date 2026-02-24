// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniMaterialTranslator.h"

#ifdef HOUDINIENGINE_HoudiniMaterialTranslator_generated_h
#error "HoudiniMaterialTranslator.generated.h already included, missing '#pragma once' in HoudiniMaterialTranslator.h"
#endif
#define HOUDINIENGINE_HoudiniMaterialTranslator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHoudiniMaterialParameterValue ************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniMaterialParameterValue_Statics; \
	HOUDINIENGINE_API static class UScriptStruct* StaticStruct();


struct FHoudiniMaterialParameterValue;
// ********** End ScriptStruct FHoudiniMaterialParameterValue **************************************

// ********** Begin ScriptStruct FHoudiniMaterialInfo **********************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniMaterialInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniMaterialInfo;
// ********** End ScriptStruct FHoudiniMaterialInfo ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniMaterialTranslator_h

// ********** Begin Enum EHoudiniUnrealMaterialParameterType ***************************************
#define FOREACH_ENUM_EHOUDINIUNREALMATERIALPARAMETERTYPE(op) \
	op(EHoudiniUnrealMaterialParameterType::Invalid) \
	op(EHoudiniUnrealMaterialParameterType::StandardParameter) \
	op(EHoudiniUnrealMaterialParameterType::Scalar) \
	op(EHoudiniUnrealMaterialParameterType::StaticSwitch) \
	op(EHoudiniUnrealMaterialParameterType::Vector) \
	op(EHoudiniUnrealMaterialParameterType::Texture) 

enum class EHoudiniUnrealMaterialParameterType : uint8;
template<> struct TIsUEnumClass<EHoudiniUnrealMaterialParameterType> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniUnrealMaterialParameterType>();
// ********** End Enum EHoudiniUnrealMaterialParameterType *****************************************

// ********** Begin Enum EHoudiniUnrealMaterialParameterDataType ***********************************
#define FOREACH_ENUM_EHOUDINIUNREALMATERIALPARAMETERDATATYPE(op) \
	op(EHoudiniUnrealMaterialParameterDataType::Invalid) \
	op(EHoudiniUnrealMaterialParameterDataType::Byte) \
	op(EHoudiniUnrealMaterialParameterDataType::Float) \
	op(EHoudiniUnrealMaterialParameterDataType::String) \
	op(EHoudiniUnrealMaterialParameterDataType::Vector) 

enum class EHoudiniUnrealMaterialParameterDataType : uint8;
template<> struct TIsUEnumClass<EHoudiniUnrealMaterialParameterDataType> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniUnrealMaterialParameterDataType>();
// ********** End Enum EHoudiniUnrealMaterialParameterDataType *************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
