// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPDGAssetLink.h"

#ifdef HOUDINIENGINERUNTIME_HoudiniPDGAssetLink_generated_h
#error "HoudiniPDGAssetLink.generated.h already included, missing '#pragma once' in HoudiniPDGAssetLink.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniPDGAssetLink_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOutputActorOwner *************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOutputActorOwner_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOutputActorOwner;
// ********** End ScriptStruct FOutputActorOwner ***************************************************

// ********** Begin ScriptStruct FTOPWorkResultObject **********************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTOPWorkResultObject_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTOPWorkResultObject;
// ********** End ScriptStruct FTOPWorkResultObject ************************************************

// ********** Begin ScriptStruct FTOPWorkResult ****************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTOPWorkResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTOPWorkResult;
// ********** End ScriptStruct FTOPWorkResult ******************************************************

// ********** Begin ScriptStruct FWorkItemTallyBase ************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorkItemTallyBase_Statics; \
	static class UScriptStruct* StaticStruct();


struct FWorkItemTallyBase;
// ********** End ScriptStruct FWorkItemTallyBase **************************************************

// ********** Begin ScriptStruct FWorkItemTally ****************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_253_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorkItemTally_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWorkItemTallyBase Super;


struct FWorkItemTally;
// ********** End ScriptStruct FWorkItemTally ******************************************************

// ********** Begin ScriptStruct FAggregatedWorkItemTally ******************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_315_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAggregatedWorkItemTally_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWorkItemTallyBase Super;


struct FAggregatedWorkItemTally;
// ********** End ScriptStruct FAggregatedWorkItemTally ********************************************

// ********** Begin ScriptStruct FHoudiniPDGWorkResultObjectBakedOutput ****************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_357_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoudiniPDGWorkResultObjectBakedOutput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHoudiniPDGWorkResultObjectBakedOutput;
// ********** End ScriptStruct FHoudiniPDGWorkResultObjectBakedOutput ******************************

// ********** Begin Class UTOPNode *****************************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_371_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTOPNode(); \
	friend struct Z_Construct_UClass_UTOPNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UTOPNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UTOPNode_NoRegister) \
	DECLARE_SERIALIZER(UTOPNode)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_371_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTOPNode(UTOPNode&&) = delete; \
	UTOPNode(const UTOPNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTOPNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTOPNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTOPNode) \
	NO_API virtual ~UTOPNode();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_368_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_371_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_371_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_371_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTOPNode;

// ********** End Class UTOPNode *******************************************************************

// ********** Begin Class UTOPNetwork **************************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_591_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTOPNetwork(); \
	friend struct Z_Construct_UClass_UTOPNetwork_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UTOPNetwork_NoRegister(); \
public: \
	DECLARE_CLASS2(UTOPNetwork, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UTOPNetwork_NoRegister) \
	DECLARE_SERIALIZER(UTOPNetwork)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_591_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTOPNetwork(UTOPNetwork&&) = delete; \
	UTOPNetwork(const UTOPNetwork&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTOPNetwork); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTOPNetwork); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTOPNetwork) \
	NO_API virtual ~UTOPNetwork();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_588_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_591_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_591_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_591_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTOPNetwork;

// ********** End Class UTOPNetwork ****************************************************************

// ********** Begin Class UHoudiniPDGAssetLink *****************************************************
HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_662_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPDGAssetLink(); \
	friend struct Z_Construct_UClass_UHoudiniPDGAssetLink_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPDGAssetLink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), Z_Construct_UClass_UHoudiniPDGAssetLink_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPDGAssetLink)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_662_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPDGAssetLink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPDGAssetLink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPDGAssetLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPDGAssetLink); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPDGAssetLink(UHoudiniPDGAssetLink&&) = delete; \
	UHoudiniPDGAssetLink(const UHoudiniPDGAssetLink&) = delete; \
	NO_API virtual ~UHoudiniPDGAssetLink();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_659_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_662_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_662_INCLASS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h_662_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPDGAssetLink;

// ********** End Class UHoudiniPDGAssetLink *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniPDGAssetLink_h

// ********** Begin Enum EPDGLinkState *************************************************************
#define FOREACH_ENUM_EPDGLINKSTATE(op) \
	op(EPDGLinkState::Inactive) \
	op(EPDGLinkState::Linking) \
	op(EPDGLinkState::Linked) \
	op(EPDGLinkState::Error_Not_Linked) 

enum class EPDGLinkState : uint8;
template<> struct TIsUEnumClass<EPDGLinkState> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGLinkState>();
// ********** End Enum EPDGLinkState ***************************************************************

// ********** Begin Enum EPDGNodeState *************************************************************
#define FOREACH_ENUM_EPDGNODESTATE(op) \
	op(EPDGNodeState::None) \
	op(EPDGNodeState::Dirtied) \
	op(EPDGNodeState::Dirtying) \
	op(EPDGNodeState::Cooking) \
	op(EPDGNodeState::Cook_Complete) \
	op(EPDGNodeState::Cook_Failed) 

enum class EPDGNodeState : uint8;
template<> struct TIsUEnumClass<EPDGNodeState> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGNodeState>();
// ********** End Enum EPDGNodeState ***************************************************************

// ********** Begin Enum EPDGWorkResultState *******************************************************
#define FOREACH_ENUM_EPDGWORKRESULTSTATE(op) \
	op(EPDGWorkResultState::None) \
	op(EPDGWorkResultState::ToLoad) \
	op(EPDGWorkResultState::Loading) \
	op(EPDGWorkResultState::Loaded) \
	op(EPDGWorkResultState::ToDelete) \
	op(EPDGWorkResultState::Deleting) \
	op(EPDGWorkResultState::Deleted) \
	op(EPDGWorkResultState::NotLoaded) 

enum class EPDGWorkResultState : uint8;
template<> struct TIsUEnumClass<EPDGWorkResultState> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGWorkResultState>();
// ********** End Enum EPDGWorkResultState *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
