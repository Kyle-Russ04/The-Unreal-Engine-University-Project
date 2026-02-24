// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterMultiParm.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterMultiParm_generated_h
#error "HoudiniParameterMultiParm.generated.h already included, missing '#pragma once' in HoudiniParameterMultiParm.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterMultiParm_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterMultiParm ***********************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterMultiParm(); \
	friend struct Z_Construct_UClass_UHoudiniParameterMultiParm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterMultiParm_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterMultiParm, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterMultiParm_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterMultiParm)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterMultiParm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterMultiParm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterMultiParm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterMultiParm); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterMultiParm(UHoudiniParameterMultiParm&&) = delete; \
	UHoudiniParameterMultiParm(const UHoudiniParameterMultiParm&) = delete; \
	NO_API virtual ~UHoudiniParameterMultiParm();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_43_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterMultiParm;

// ********** End Class UHoudiniParameterMultiParm *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterMultiParm_h

// ********** Begin Enum EHoudiniMultiParmModificationType *****************************************
#define FOREACH_ENUM_EHOUDINIMULTIPARMMODIFICATIONTYPE(op) \
	op(EHoudiniMultiParmModificationType::None) \
	op(EHoudiniMultiParmModificationType::Inserted) \
	op(EHoudiniMultiParmModificationType::Removed) \
	op(EHoudiniMultiParmModificationType::Modified) 

enum class EHoudiniMultiParmModificationType : uint8;
template<> struct TIsUEnumClass<EHoudiniMultiParmModificationType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniMultiParmModificationType>();
// ********** End Enum EHoudiniMultiParmModificationType *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
