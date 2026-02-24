// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPCGNode.h"

#ifdef HOUDINIENGINE_HoudiniPCGNode_generated_h
#error "HoudiniPCGNode.generated.h already included, missing '#pragma once' in HoudiniPCGNode.h"
#endif
#define HOUDINIENGINE_HoudiniPCGNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniPCGSettings ******************************************************
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGSettings_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPCGSettings(); \
	friend struct Z_Construct_UClass_UHoudiniPCGSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPCGSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngine"), Z_Construct_UClass_UHoudiniPCGSettings_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPCGSettings)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPCGSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPCGSettings(UHoudiniPCGSettings&&) = delete; \
	UHoudiniPCGSettings(const UHoudiniPCGSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPCGSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPCGSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPCGSettings) \
	NO_API virtual ~UHoudiniPCGSettings();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h_40_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h_43_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPCGSettings;

// ********** End Class UHoudiniPCGSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGNode_h

// ********** Begin Enum EHoudiniPCGOutputType *****************************************************
#define FOREACH_ENUM_EHOUDINIPCGOUTPUTTYPE(op) \
	op(EHoudiniPCGOutputType::Cook) \
	op(EHoudiniPCGOutputType::CookAndBake) 

enum class EHoudiniPCGOutputType : uint8;
template<> struct TIsUEnumClass<EHoudiniPCGOutputType> { enum { Value = true }; };
template<> HOUDINIENGINE_API UEnum* StaticEnum<EHoudiniPCGOutputType>();
// ********** End Enum EHoudiniPCGOutputType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
