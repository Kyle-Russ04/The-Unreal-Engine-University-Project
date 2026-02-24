// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPCGManagedResource.h"

#ifdef HOUDINIENGINE_HoudiniPCGManagedResource_generated_h
#error "HoudiniPCGManagedResource.generated.h already included, missing '#pragma once' in HoudiniPCGManagedResource.h"
#endif
#define HOUDINIENGINE_HoudiniPCGManagedResource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniPCGManagedResource ***********************************************
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGManagedResource_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPCGManagedResource(); \
	friend struct Z_Construct_UClass_UHoudiniPCGManagedResource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGManagedResource_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPCGManagedResource, UPCGManagedResource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngine"), Z_Construct_UClass_UHoudiniPCGManagedResource_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPCGManagedResource)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPCGManagedResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPCGManagedResource(UHoudiniPCGManagedResource&&) = delete; \
	UHoudiniPCGManagedResource(const UHoudiniPCGManagedResource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPCGManagedResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPCGManagedResource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPCGManagedResource) \
	NO_API virtual ~UHoudiniPCGManagedResource();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h_32_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h_38_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPCGManagedResource;

// ********** End Class UHoudiniPCGManagedResource *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGManagedResource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
