// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPCGComponent.h"

#ifdef HOUDINIENGINE_HoudiniPCGComponent_generated_h
#error "HoudiniPCGComponent.generated.h already included, missing '#pragma once' in HoudiniPCGComponent.h"
#endif
#define HOUDINIENGINE_HoudiniPCGComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHoudiniPCGComponent *****************************************************
HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGComponent_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPCGComponent(); \
	friend struct Z_Construct_UClass_UHoudiniPCGComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINE_API UClass* Z_Construct_UClass_UHoudiniPCGComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPCGComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngine"), Z_Construct_UClass_UHoudiniPCGComponent_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPCGComponent)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPCGComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPCGComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPCGComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPCGComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPCGComponent(UHoudiniPCGComponent&&) = delete; \
	UHoudiniPCGComponent(const UHoudiniPCGComponent&) = delete; \
	NO_API virtual ~UHoudiniPCGComponent();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_37_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_42_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPCGComponent;

// ********** End Class UHoudiniPCGComponent *******************************************************

// ********** Begin Class AHoudiniPCGActor *********************************************************
HOUDINIENGINE_API UClass* Z_Construct_UClass_AHoudiniPCGActor_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoudiniPCGActor(); \
	friend struct Z_Construct_UClass_AHoudiniPCGActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINE_API UClass* Z_Construct_UClass_AHoudiniPCGActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AHoudiniPCGActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngine"), Z_Construct_UClass_AHoudiniPCGActor_NoRegister) \
	DECLARE_SERIALIZER(AHoudiniPCGActor)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHoudiniPCGActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHoudiniPCGActor(AHoudiniPCGActor&&) = delete; \
	AHoudiniPCGActor(const AHoudiniPCGActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoudiniPCGActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoudiniPCGActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHoudiniPCGActor) \
	NO_API virtual ~AHoudiniPCGActor();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_71_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_75_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h_75_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHoudiniPCGActor;

// ********** End Class AHoudiniPCGActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngine_Private_HoudiniPCGComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
