// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniSplineComponent.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniSplineComponent_generated_h
#error "HoudiniSplineComponent.generated.h already included, missing '#pragma once' in HoudiniSplineComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniSplineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniSplineComponent **************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniSplineComponent, NO_API)


HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniSplineComponent_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniSplineComponent(); \
	friend struct Z_Construct_UClass_UHoudiniSplineComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniSplineComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniSplineComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniSplineComponent_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniSplineComponent) \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_46_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UHoudiniSplineComponent*>(this); }


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniSplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniSplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniSplineComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniSplineComponent(UHoudiniSplineComponent&&) = delete; \
	UHoudiniSplineComponent(const UHoudiniSplineComponent&) = delete;


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_43_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_46_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniSplineComponent;

// ********** End Class UHoudiniSplineComponent ****************************************************

// ********** Begin ScriptStruct FHoudiniSplineComponentInstanceData *******************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniSplineComponentInstanceData_Statics; \
	HOUDINIENGINERUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


struct FHoudiniSplineComponentInstanceData;
// ********** End ScriptStruct FHoudiniSplineComponentInstanceData *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniSplineComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
