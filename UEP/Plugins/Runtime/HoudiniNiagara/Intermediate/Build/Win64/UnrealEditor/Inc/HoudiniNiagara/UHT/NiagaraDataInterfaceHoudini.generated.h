// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceHoudini.h"

#ifdef HOUDININIAGARA_NiagaraDataInterfaceHoudini_generated_h
#error "NiagaraDataInterfaceHoudini.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceHoudini.h"
#endif
#define HOUDININIAGARA_NiagaraDataInterfaceHoudini_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHoudiniEvent *****************************************************
#define FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniEvent_Statics; \
	HOUDININIAGARA_API static class UScriptStruct* StaticStruct();


struct FHoudiniEvent;
// ********** End ScriptStruct FHoudiniEvent *******************************************************

// ********** Begin Class UNiagaraDataInterfaceHoudini *********************************************
HOUDININIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_113_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceHoudini(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDININIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraDataInterfaceHoudini, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniNiagara"), Z_Construct_UClass_UNiagaraDataInterfaceHoudini_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceHoudini)


#define FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceHoudini(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceHoudini) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceHoudini); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceHoudini); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceHoudini(UNiagaraDataInterfaceHoudini&&) = delete; \
	UNiagaraDataInterfaceHoudini(const UNiagaraDataInterfaceHoudini&) = delete; \
	NO_API virtual ~UNiagaraDataInterfaceHoudini();


#define FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_110_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_113_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraDataInterfaceHoudini;

// ********** End Class UNiagaraDataInterfaceHoudini ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniNiagara_Source_HoudiniNiagara_Classes_NiagaraDataInterfaceHoudini_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
