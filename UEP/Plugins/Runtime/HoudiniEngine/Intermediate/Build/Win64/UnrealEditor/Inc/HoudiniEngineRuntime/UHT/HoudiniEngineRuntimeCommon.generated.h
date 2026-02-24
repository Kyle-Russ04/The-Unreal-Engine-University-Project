// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngineRuntimeCommon.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniEngineRuntimeCommon_generated_h
#error "HoudiniEngineRuntimeCommon.generated.h already included, missing '#pragma once' in HoudiniEngineRuntimeCommon.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniEngineRuntimeCommon_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniEngineRuntimeCommon_h

// ********** Begin Enum EHoudiniRampInterpolationType *********************************************
#define FOREACH_ENUM_EHOUDINIRAMPINTERPOLATIONTYPE(op) \
	op(EHoudiniRampInterpolationType::InValid) \
	op(EHoudiniRampInterpolationType::CONSTANT) \
	op(EHoudiniRampInterpolationType::LINEAR) \
	op(EHoudiniRampInterpolationType::CATMULL_ROM) \
	op(EHoudiniRampInterpolationType::MONOTONE_CUBIC) \
	op(EHoudiniRampInterpolationType::BEZIER) \
	op(EHoudiniRampInterpolationType::BSPLINE) \
	op(EHoudiniRampInterpolationType::HERMITE) 

enum class EHoudiniRampInterpolationType : int8;
template<> struct TIsUEnumClass<EHoudiniRampInterpolationType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampInterpolationType>();
// ********** End Enum EHoudiniRampInterpolationType ***********************************************

// ********** Begin Enum EHoudiniEngineBakeOption **************************************************
#define FOREACH_ENUM_EHOUDINIENGINEBAKEOPTION(op) \
	op(EHoudiniEngineBakeOption::ToActor) \
	op(EHoudiniEngineBakeOption::ToBlueprint) \
	op(EHoudiniEngineBakeOption::ToAsset) 

enum class EHoudiniEngineBakeOption : uint8;
template<> struct TIsUEnumClass<EHoudiniEngineBakeOption> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineBakeOption>();
// ********** End Enum EHoudiniEngineBakeOption ****************************************************

// ********** Begin Enum EHoudiniEngineActorBakeOption *********************************************
#define FOREACH_ENUM_EHOUDINIENGINEACTORBAKEOPTION(op) \
	op(EHoudiniEngineActorBakeOption::OneActorPerComponent) \
	op(EHoudiniEngineActorBakeOption::OneActorPerHDA) 

enum class EHoudiniEngineActorBakeOption : uint8;
template<> struct TIsUEnumClass<EHoudiniEngineActorBakeOption> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineActorBakeOption>();
// ********** End Enum EHoudiniEngineActorBakeOption ***********************************************

// ********** Begin Enum EHoudiniLandscapeOutputBakeType *******************************************
#define FOREACH_ENUM_EHOUDINILANDSCAPEOUTPUTBAKETYPE(op) \
	op(EHoudiniLandscapeOutputBakeType::Detachment) \
	op(EHoudiniLandscapeOutputBakeType::BakeToImage) \
	op(EHoudiniLandscapeOutputBakeType::BakeToWorld) \
	op(EHoudiniLandscapeOutputBakeType::InValid) 

enum class EHoudiniLandscapeOutputBakeType : uint8;
template<> struct TIsUEnumClass<EHoudiniLandscapeOutputBakeType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeOutputBakeType>();
// ********** End Enum EHoudiniLandscapeOutputBakeType *********************************************

// ********** Begin Enum EHoudiniInputType *********************************************************
#define FOREACH_ENUM_EHOUDINIINPUTTYPE(op) \
	op(EHoudiniInputType::Invalid) \
	op(EHoudiniInputType::Geometry) \
	op(EHoudiniInputType::Curve) \
	op(EHoudiniInputType::World) \
	op(EHoudiniInputType::PCGInput) 

enum class EHoudiniInputType : uint8;
template<> struct TIsUEnumClass<EHoudiniInputType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputType>();
// ********** End Enum EHoudiniInputType ***********************************************************

// ********** Begin Enum EHoudiniOutputType ********************************************************
#define FOREACH_ENUM_EHOUDINIOUTPUTTYPE(op) \
	op(EHoudiniOutputType::Invalid) \
	op(EHoudiniOutputType::Mesh) \
	op(EHoudiniOutputType::Instancer) \
	op(EHoudiniOutputType::Landscape) \
	op(EHoudiniOutputType::Curve) \
	op(EHoudiniOutputType::Skeletal) \
	op(EHoudiniOutputType::GeometryCollection) \
	op(EHoudiniOutputType::DataTable) \
	op(EHoudiniOutputType::LandscapeSpline) \
	op(EHoudiniOutputType::AnimSequence) \
	op(EHoudiniOutputType::Cop) \
	op(EHoudiniOutputType::PCG) 

enum class EHoudiniOutputType : uint8;
template<> struct TIsUEnumClass<EHoudiniOutputType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniOutputType>();
// ********** End Enum EHoudiniOutputType **********************************************************

// ********** Begin Enum EHoudiniCurveType *********************************************************
#define FOREACH_ENUM_EHOUDINICURVETYPE(op) \
	op(EHoudiniCurveType::Invalid) \
	op(EHoudiniCurveType::Polygon) \
	op(EHoudiniCurveType::Nurbs) \
	op(EHoudiniCurveType::Bezier) \
	op(EHoudiniCurveType::Points) 

enum class EHoudiniCurveType : int8;
template<> struct TIsUEnumClass<EHoudiniCurveType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveType>();
// ********** End Enum EHoudiniCurveType ***********************************************************

// ********** Begin Enum EHoudiniCurveMethod *******************************************************
#define FOREACH_ENUM_EHOUDINICURVEMETHOD(op) \
	op(EHoudiniCurveMethod::Invalid) \
	op(EHoudiniCurveMethod::CVs) \
	op(EHoudiniCurveMethod::Breakpoints) \
	op(EHoudiniCurveMethod::Freehand) 

enum class EHoudiniCurveMethod : int8;
template<> struct TIsUEnumClass<EHoudiniCurveMethod> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveMethod>();
// ********** End Enum EHoudiniCurveMethod *********************************************************

// ********** Begin Enum EHoudiniCurveBreakpointParameterization ***********************************
#define FOREACH_ENUM_EHOUDINICURVEBREAKPOINTPARAMETERIZATION(op) \
	op(EHoudiniCurveBreakpointParameterization::Invalid) \
	op(EHoudiniCurveBreakpointParameterization::Uniform) \
	op(EHoudiniCurveBreakpointParameterization::Chord) \
	op(EHoudiniCurveBreakpointParameterization::Centripetal) 

enum class EHoudiniCurveBreakpointParameterization : int8;
template<> struct TIsUEnumClass<EHoudiniCurveBreakpointParameterization> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveBreakpointParameterization>();
// ********** End Enum EHoudiniCurveBreakpointParameterization *************************************

// ********** Begin Enum EHoudiniLandscapeExportType ***********************************************
#define FOREACH_ENUM_EHOUDINILANDSCAPEEXPORTTYPE(op) \
	op(EHoudiniLandscapeExportType::Heightfield) \
	op(EHoudiniLandscapeExportType::Mesh) \
	op(EHoudiniLandscapeExportType::Points) 

enum class EHoudiniLandscapeExportType : uint8;
template<> struct TIsUEnumClass<EHoudiniLandscapeExportType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeExportType>();
// ********** End Enum EHoudiniLandscapeExportType *************************************************

// ********** Begin Enum EPDGBakeSelectionOption ***************************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_EPDGBAKESELECTIONOPTION(op) \
	op(EPDGBakeSelectionOption::All) \
	op(EPDGBakeSelectionOption::SelectedNetwork) \
	op(EPDGBakeSelectionOption::SelectedNode) 

enum class EPDGBakeSelectionOption : uint8;
template<> struct TIsUEnumClass<EPDGBakeSelectionOption> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakeSelectionOption>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum EPDGBakeSelectionOption *****************************************************

// ********** Begin Enum EPDGBakePackageReplaceModeOption ******************************************
#if WITH_EDITORONLY_DATA
#define FOREACH_ENUM_EPDGBAKEPACKAGEREPLACEMODEOPTION(op) \
	op(EPDGBakePackageReplaceModeOption::CreateNewAssets) \
	op(EPDGBakePackageReplaceModeOption::ReplaceExistingAssets) 

enum class EPDGBakePackageReplaceModeOption : uint8;
template<> struct TIsUEnumClass<EPDGBakePackageReplaceModeOption> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakePackageReplaceModeOption>();
#endif // WITH_EDITORONLY_DATA
// ********** End Enum EPDGBakePackageReplaceModeOption ********************************************

// ********** Begin Enum EHoudiniProxyRefineResult *************************************************
#define FOREACH_ENUM_EHOUDINIPROXYREFINERESULT(op) \
	op(EHoudiniProxyRefineResult::Invalid) \
	op(EHoudiniProxyRefineResult::Failed) \
	op(EHoudiniProxyRefineResult::Success) \
	op(EHoudiniProxyRefineResult::Skipped) 

enum class EHoudiniProxyRefineResult : uint8;
template<> struct TIsUEnumClass<EHoudiniProxyRefineResult> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineResult>();
// ********** End Enum EHoudiniProxyRefineResult ***************************************************

// ********** Begin Enum EHoudiniProxyRefineRequestResult ******************************************
#define FOREACH_ENUM_EHOUDINIPROXYREFINEREQUESTRESULT(op) \
	op(EHoudiniProxyRefineRequestResult::Invalid) \
	op(EHoudiniProxyRefineRequestResult::None) \
	op(EHoudiniProxyRefineRequestResult::PendingCooks) \
	op(EHoudiniProxyRefineRequestResult::Refined) 

enum class EHoudiniProxyRefineRequestResult : uint8;
template<> struct TIsUEnumClass<EHoudiniProxyRefineRequestResult> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineRequestResult>();
// ********** End Enum EHoudiniProxyRefineRequestResult ********************************************

// ********** Begin Enum EHoudiniStaticMeshMethod **************************************************
#define FOREACH_ENUM_EHOUDINISTATICMESHMETHOD(op) \
	op(EHoudiniStaticMeshMethod::RawMesh_DELETED) \
	op(EHoudiniStaticMeshMethod::FMeshDescription) \
	op(EHoudiniStaticMeshMethod::UHoudiniStaticMesh) 

enum class EHoudiniStaticMeshMethod : uint8;
template<> struct TIsUEnumClass<EHoudiniStaticMeshMethod> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniStaticMeshMethod>();
// ********** End Enum EHoudiniStaticMeshMethod ****************************************************

// ********** Begin Enum EHoudiniBakeAfterNextCook *************************************************
#define FOREACH_ENUM_EHOUDINIBAKEAFTERNEXTCOOK(op) \
	op(EHoudiniBakeAfterNextCook::Disabled) \
	op(EHoudiniBakeAfterNextCook::Always) \
	op(EHoudiniBakeAfterNextCook::Once) 

enum class EHoudiniBakeAfterNextCook : uint8;
template<> struct TIsUEnumClass<EHoudiniBakeAfterNextCook> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniBakeAfterNextCook>();
// ********** End Enum EHoudiniBakeAfterNextCook ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
