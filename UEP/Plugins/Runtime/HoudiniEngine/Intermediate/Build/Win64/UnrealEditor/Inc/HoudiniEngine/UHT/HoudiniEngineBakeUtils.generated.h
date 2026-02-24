// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniEngineBakeUtils.h"

#ifdef HOUDINIENGINE_HoudiniEngineBakeUtils_generated_h
#error "HoudiniEngineBakeUtils.generated.h already included, missing '#pragma once' in HoudiniEngineBakeUtils.h"
#endif
#define HOUDINIENGINE_HoudiniEngineBakeUtils_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniEngineBakeUtils_h

// ********** Begin Enum EHoudiniInstancerComponentType ********************************************
#define FOREACH_ENUM_EHOUDINIINSTANCERCOMPONENTTYPE(op) \
	op(EHoudiniInstancerComponentType::StaticMeshComponent) \
	op(EHoudiniInstancerComponentType::InstancedStaticMeshComponent) \
	op(EHoudiniInstancerComponentType::MeshSplitInstancerComponent) \
	op(EHoudiniInstancerComponentType::InstancedActorComponent) \
	op(EHoudiniInstancerComponentType::FoliageInstancedStaticMeshComponent) \
	op(EHoudiniInstancerComponentType::FoliageAsHierarchicalInstancedStaticMeshComponent) \
	op(EHoudiniInstancerComponentType::GeometryCollectionComponent) 

enum class EHoudiniInstancerComponentType : uint8;
template<> struct TIsUEnumClass<EHoudiniInstancerComponentType> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniInstancerComponentType>();
// ********** End Enum EHoudiniInstancerComponentType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
