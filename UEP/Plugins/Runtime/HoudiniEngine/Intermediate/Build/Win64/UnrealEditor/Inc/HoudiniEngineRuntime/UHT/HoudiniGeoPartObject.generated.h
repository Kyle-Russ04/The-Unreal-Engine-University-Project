// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniGeoPartObject.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniGeoPartObject_generated_h
#error "HoudiniGeoPartObject.generated.h already included, missing '#pragma once' in HoudiniGeoPartObject.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniGeoPartObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHoudiniObjectInfo ************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniObjectInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniObjectInfo;
// ********** End ScriptStruct FHoudiniObjectInfo **************************************************

// ********** Begin ScriptStruct FHoudiniGeoInfo ***************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGeoInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniGeoInfo;
// ********** End ScriptStruct FHoudiniGeoInfo *****************************************************

// ********** Begin ScriptStruct FHoudiniPartInfo **************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPartInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniPartInfo;
// ********** End ScriptStruct FHoudiniPartInfo ****************************************************

// ********** Begin ScriptStruct FHoudiniVolumeInfo ************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniVolumeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniVolumeInfo;
// ********** End ScriptStruct FHoudiniVolumeInfo **************************************************

// ********** Begin ScriptStruct FHoudiniCurveInfo *************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniCurveInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniCurveInfo;
// ********** End ScriptStruct FHoudiniCurveInfo ***************************************************

// ********** Begin ScriptStruct FHoudiniMeshSocket ************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniMeshSocket_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniMeshSocket;
// ********** End ScriptStruct FHoudiniMeshSocket **************************************************

// ********** Begin ScriptStruct FHoudiniGeoPartObject *********************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniGeoPartObject_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniGeoPartObject;
// ********** End ScriptStruct FHoudiniGeoPartObject ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniGeoPartObject_h

// ********** Begin Enum EHoudiniGeoType ***********************************************************
#define FOREACH_ENUM_EHOUDINIGEOTYPE(op) \
	op(EHoudiniGeoType::Invalid) \
	op(EHoudiniGeoType::Default) \
	op(EHoudiniGeoType::Intermediate) \
	op(EHoudiniGeoType::Input) \
	op(EHoudiniGeoType::Curve) 

enum class EHoudiniGeoType : uint8;
template<> struct TIsUEnumClass<EHoudiniGeoType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniGeoType>();
// ********** End Enum EHoudiniGeoType *************************************************************

// ********** Begin Enum EHoudiniPartType **********************************************************
#define FOREACH_ENUM_EHOUDINIPARTTYPE(op) \
	op(EHoudiniPartType::Invalid) \
	op(EHoudiniPartType::Mesh) \
	op(EHoudiniPartType::Instancer) \
	op(EHoudiniPartType::Curve) \
	op(EHoudiniPartType::Volume) \
	op(EHoudiniPartType::DataTable) \
	op(EHoudiniPartType::LandscapeSpline) \
	op(EHoudiniPartType::SkeletalMeshShape) \
	op(EHoudiniPartType::SkeletalMeshPose) \
	op(EHoudiniPartType::MotionClip) \
	op(EHoudiniPartType::SkeletalMeshPhysAsset) \
	op(EHoudiniPartType::Cop) \
	op(EHoudiniPartType::PCG) 

enum class EHoudiniPartType : uint8;
template<> struct TIsUEnumClass<EHoudiniPartType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniPartType>();
// ********** End Enum EHoudiniPartType ************************************************************

// ********** Begin Enum EHoudiniInstancerType *****************************************************
#define FOREACH_ENUM_EHOUDINIINSTANCERTYPE(op) \
	op(EHoudiniInstancerType::Invalid) \
	op(EHoudiniInstancerType::ObjectInstancer) \
	op(EHoudiniInstancerType::PackedPrimitive) \
	op(EHoudiniInstancerType::AttributeInstancer) \
	op(EHoudiniInstancerType::OldSchoolAttributeInstancer) \
	op(EHoudiniInstancerType::GeometryCollection) \
	op(EHoudiniInstancerType::SkeletalMesh) \
	op(EHoudiniInstancerType::MotionClip) 

enum class EHoudiniInstancerType : uint8;
template<> struct TIsUEnumClass<EHoudiniInstancerType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInstancerType>();
// ********** End Enum EHoudiniInstancerType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
