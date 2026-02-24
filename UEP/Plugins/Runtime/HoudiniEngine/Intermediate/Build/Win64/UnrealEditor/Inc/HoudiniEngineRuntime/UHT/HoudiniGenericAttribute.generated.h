// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniGenericAttribute.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniGenericAttribute_generated_h
#error "HoudiniGenericAttribute.generated.h already included, missing '#pragma once' in HoudiniGenericAttribute.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniGenericAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHoudiniGenericAttributeChangedProperty ***************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGenericAttributeChangedProperty_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniGenericAttributeChangedProperty;
// ********** End ScriptStruct FHoudiniGenericAttributeChangedProperty *****************************

// ********** Begin ScriptStruct FHoudiniGenericAttribute ******************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGenericAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniGenericAttribute;
// ********** End ScriptStruct FHoudiniGenericAttribute ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGenericAttribute_h

// ********** Begin Enum EAttribStorageType ********************************************************
#define FOREACH_ENUM_EATTRIBSTORAGETYPE(op) \
	op(EAttribStorageType::Invalid) \
	op(EAttribStorageType::INT) \
	op(EAttribStorageType::INT64) \
	op(EAttribStorageType::FLOAT) \
	op(EAttribStorageType::FLOAT64) \
	op(EAttribStorageType::STRING) 

enum class EAttribStorageType : int8;
template<> struct TIsUEnumClass<EAttribStorageType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribStorageType>();
// ********** End Enum EAttribStorageType **********************************************************

// ********** Begin Enum EAttribOwner **************************************************************
#define FOREACH_ENUM_EATTRIBOWNER(op) \
	op(EAttribOwner::Invalid) \
	op(EAttribOwner::Vertex) \
	op(EAttribOwner::Point) \
	op(EAttribOwner::Prim) \
	op(EAttribOwner::Detail) 

enum class EAttribOwner : int8;
template<> struct TIsUEnumClass<EAttribOwner> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EAttribOwner>();
// ********** End Enum EAttribOwner ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
