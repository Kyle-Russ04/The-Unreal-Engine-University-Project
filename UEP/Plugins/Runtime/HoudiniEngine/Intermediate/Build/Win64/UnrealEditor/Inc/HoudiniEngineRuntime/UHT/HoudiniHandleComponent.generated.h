// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniHandleComponent.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniHandleComponent_generated_h
#error "HoudiniHandleComponent.generated.h already included, missing '#pragma once' in HoudiniHandleComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniHandleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniHandleParameter **************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniHandleParameter(); \
	friend struct Z_Construct_UClass_UHoudiniHandleParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniHandleParameter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniHandleParameter_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniHandleParameter)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniHandleParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniHandleParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniHandleParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniHandleParameter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniHandleParameter(UHoudiniHandleParameter&&) = delete; \
	UHoudiniHandleParameter(const UHoudiniHandleParameter&) = delete; \
	NO_API virtual ~UHoudiniHandleParameter();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_44_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_48_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniHandleParameter;

// ********** End Class UHoudiniHandleParameter ****************************************************

// ********** Begin Class UHoudiniHandleComponent **************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_96_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHoudiniHandleComponent, NO_API)


HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniHandleComponent(); \
	friend struct Z_Construct_UClass_UHoudiniHandleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniHandleComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniHandleComponent_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniHandleComponent) \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_96_ARCHIVESERIALIZER


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniHandleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniHandleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniHandleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniHandleComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniHandleComponent(UHoudiniHandleComponent&&) = delete; \
	UHoudiniHandleComponent(const UHoudiniHandleComponent&) = delete; \
	NO_API virtual ~UHoudiniHandleComponent();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_85_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_96_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniHandleComponent;

// ********** End Class UHoudiniHandleComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniHandleComponent_h

// ********** Begin Enum EXformParameter ***********************************************************
#define FOREACH_ENUM_EXFORMPARAMETER(op) \
	op(EXformParameter::TX) \
	op(EXformParameter::TY) \
	op(EXformParameter::TZ) \
	op(EXformParameter::RX) \
	op(EXformParameter::RY) \
	op(EXformParameter::RZ) \
	op(EXformParameter::SX) \
	op(EXformParameter::SY) \
	op(EXformParameter::SZ) \
	op(EXformParameter::COUNT) 

enum class EXformParameter : uint8;
template<> struct TIsUEnumClass<EXformParameter> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EXformParameter>();
// ********** End Enum EXformParameter *************************************************************

// ********** Begin Enum EHoudiniHandleType ********************************************************
#define FOREACH_ENUM_EHOUDINIHANDLETYPE(op) \
	op(EHoudiniHandleType::Xform) \
	op(EHoudiniHandleType::Bounder) \
	op(EHoudiniHandleType::Unsupported) 

enum class EHoudiniHandleType : uint8;
template<> struct TIsUEnumClass<EHoudiniHandleType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniHandleType>();
// ********** End Enum EHoudiniHandleType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
