// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniParameterFolder.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniParameterFolder_generated_h
#error "HoudiniParameterFolder.generated.h already included, missing '#pragma once' in HoudiniParameterFolder.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniParameterFolder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniParameterFolder **************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniParameterFolder(); \
	friend struct Z_Construct_UClass_UHoudiniParameterFolder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterFolder_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniParameterFolder, UHoudiniParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniParameterFolder_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniParameterFolder)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniParameterFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniParameterFolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniParameterFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniParameterFolder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniParameterFolder(UHoudiniParameterFolder&&) = delete; \
	UHoudiniParameterFolder(const UHoudiniParameterFolder&) = delete; \
	NO_API virtual ~UHoudiniParameterFolder();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_45_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniParameterFolder;

// ********** End Class UHoudiniParameterFolder ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterFolder_h

// ********** Begin Enum EHoudiniFolderParameterType ***********************************************
#define FOREACH_ENUM_EHOUDINIFOLDERPARAMETERTYPE(op) \
	op(EHoudiniFolderParameterType::Invalid) \
	op(EHoudiniFolderParameterType::Collapsible) \
	op(EHoudiniFolderParameterType::Simple) \
	op(EHoudiniFolderParameterType::Tabs) \
	op(EHoudiniFolderParameterType::Radio) \
	op(EHoudiniFolderParameterType::Other) 

enum class EHoudiniFolderParameterType : uint8;
template<> struct TIsUEnumClass<EHoudiniFolderParameterType> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniFolderParameterType>();
// ********** End Enum EHoudiniFolderParameterType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
