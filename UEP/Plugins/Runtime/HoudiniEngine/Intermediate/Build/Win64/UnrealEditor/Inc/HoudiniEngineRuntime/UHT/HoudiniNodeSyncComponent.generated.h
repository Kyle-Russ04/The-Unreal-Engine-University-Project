// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniNodeSyncComponent.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniNodeSyncComponent_generated_h
#error "HoudiniNodeSyncComponent.generated.h already included, missing '#pragma once' in HoudiniNodeSyncComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniNodeSyncComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniNodeSyncComponent ************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniNodeSyncComponent_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniNodeSyncComponent(); \
	friend struct Z_Construct_UClass_UHoudiniNodeSyncComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniNodeSyncComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniNodeSyncComponent, UHoudiniAssetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniNodeSyncComponent_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniNodeSyncComponent)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniNodeSyncComponent(UHoudiniNodeSyncComponent&&) = delete; \
	UHoudiniNodeSyncComponent(const UHoudiniNodeSyncComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniNodeSyncComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniNodeSyncComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniNodeSyncComponent) \
	NO_API virtual ~UHoudiniNodeSyncComponent();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_49_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_52_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniNodeSyncComponent;

// ********** End Class UHoudiniNodeSyncComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniNodeSyncComponent_h

// ********** Begin Enum EHoudiniNodeSyncStatus ****************************************************
#define FOREACH_ENUM_EHOUDININODESYNCSTATUS(op) \
	op(EHoudiniNodeSyncStatus::None) \
	op(EHoudiniNodeSyncStatus::Failed) \
	op(EHoudiniNodeSyncStatus::Success) \
	op(EHoudiniNodeSyncStatus::SuccessWithErrors) \
	op(EHoudiniNodeSyncStatus::Running) \
	op(EHoudiniNodeSyncStatus::Warning) 

enum class EHoudiniNodeSyncStatus : uint8;
template<> struct TIsUEnumClass<EHoudiniNodeSyncStatus> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniNodeSyncStatus>();
// ********** End Enum EHoudiniNodeSyncStatus ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
