// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPublicAPIInputTypes.h"

#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPIInputTypes_generated_h
#error "HoudiniPublicAPIInputTypes.generated.h already included, missing '#pragma once' in HoudiniPublicAPIInputTypes.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPIInputTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
enum class EHoudiniPublicAPICurveBreakpointParameterization : uint8;
enum class EHoudiniPublicAPICurveMethod : uint8;
enum class EHoudiniPublicAPICurveType : uint8;

// ********** Begin Class UHoudiniPublicAPIInput ***************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetInputObjects_Implementation(TArray<UObject*>& OutObjects); \
	virtual bool SetInputObjects_Implementation(TArray<UObject*> const& InObjects); \
	DECLARE_FUNCTION(execGetInputObjects); \
	DECLARE_FUNCTION(execSetInputObjects); \
	DECLARE_FUNCTION(execIsAcceptableObjectForInput);


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_59_CALLBACK_WRAPPERS
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPublicAPIInput, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniPublicAPIInput_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIInput)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPublicAPIInput(UHoudiniPublicAPIInput&&) = delete; \
	UHoudiniPublicAPIInput(const UHoudiniPublicAPIInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIInput) \
	NO_API virtual ~UHoudiniPublicAPIInput();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_56_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_59_CALLBACK_WRAPPERS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_59_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPublicAPIInput;

// ********** End Class UHoudiniPublicAPIInput *****************************************************

// ********** Begin Class UHoudiniPublicAPIGeoInput ************************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetInputObjectTransformOffsetArray_Implementation(TArray<FTransform>& OutInputObjectTransformOffsetArray) const; \
	virtual bool GetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform& OutTransform) const; \
	virtual bool SetInputObjectTransformOffset_Implementation(const int32 InInputObjectIndex, FTransform const& InTransform); \
	DECLARE_FUNCTION(execGetInputObjectTransformOffsetArray); \
	DECLARE_FUNCTION(execGetInputObjectTransformOffset); \
	DECLARE_FUNCTION(execSetInputObjectTransformOffset);


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_199_CALLBACK_WRAPPERS
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIGeoInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIGeoInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPublicAPIGeoInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniPublicAPIGeoInput_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIGeoInput)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_199_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPublicAPIGeoInput(UHoudiniPublicAPIGeoInput&&) = delete; \
	UHoudiniPublicAPIGeoInput(const UHoudiniPublicAPIGeoInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIGeoInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIGeoInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIGeoInput) \
	NO_API virtual ~UHoudiniPublicAPIGeoInput();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_196_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_199_CALLBACK_WRAPPERS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_199_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPublicAPIGeoInput;

// ********** End Class UHoudiniPublicAPIGeoInput **************************************************

// ********** Begin Class UHoudiniPublicAPICurveInputObject ****************************************
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCurveBreakpointParameterization); \
	DECLARE_FUNCTION(execGetCurveBreakpointParameterization); \
	DECLARE_FUNCTION(execSetCurveMethod); \
	DECLARE_FUNCTION(execGetCurveMethod); \
	DECLARE_FUNCTION(execSetCurveType); \
	DECLARE_FUNCTION(execGetCurveType); \
	DECLARE_FUNCTION(execSetReversed); \
	DECLARE_FUNCTION(execIsReversed); \
	DECLARE_FUNCTION(execSetClosed); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execGetCurvePoints); \
	DECLARE_FUNCTION(execClearCurvePoints); \
	DECLARE_FUNCTION(execAppendCurvePoint); \
	DECLARE_FUNCTION(execSetCurvePoints);


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_318_CALLBACK_WRAPPERS
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_318_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInputObject(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPublicAPICurveInputObject, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInputObject)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_318_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPublicAPICurveInputObject(UHoudiniPublicAPICurveInputObject&&) = delete; \
	UHoudiniPublicAPICurveInputObject(const UHoudiniPublicAPICurveInputObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInputObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInputObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInputObject) \
	NO_API virtual ~UHoudiniPublicAPICurveInputObject();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_315_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_318_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_318_CALLBACK_WRAPPERS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_318_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_318_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPublicAPICurveInputObject;

// ********** End Class UHoudiniPublicAPICurveInputObject ******************************************

// ********** Begin Class UHoudiniPublicAPICurveInput **********************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_493_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPICurveInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPublicAPICurveInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniPublicAPICurveInput_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInput)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_493_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPublicAPICurveInput(UHoudiniPublicAPICurveInput&&) = delete; \
	UHoudiniPublicAPICurveInput(const UHoudiniPublicAPICurveInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInput) \
	NO_API virtual ~UHoudiniPublicAPICurveInput();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_490_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_493_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_493_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_493_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPublicAPICurveInput;

// ********** End Class UHoudiniPublicAPICurveInput ************************************************

// ********** Begin Class UHoudiniPublicAPIWorldInput **********************************************
HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput_NoRegister();

#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_531_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIWorldInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HOUDINIENGINEEDITOR_API UClass* Z_Construct_UClass_UHoudiniPublicAPIWorldInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UHoudiniPublicAPIWorldInput, UHoudiniPublicAPIGeoInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), Z_Construct_UClass_UHoudiniPublicAPIWorldInput_NoRegister) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIWorldInput)


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_531_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHoudiniPublicAPIWorldInput(UHoudiniPublicAPIWorldInput&&) = delete; \
	UHoudiniPublicAPIWorldInput(const UHoudiniPublicAPIWorldInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIWorldInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIWorldInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIWorldInput) \
	NO_API virtual ~UHoudiniPublicAPIWorldInput();


#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_528_PROLOG
#define FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_531_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_531_INCLASS_NO_PURE_DECLS \
	FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_531_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHoudiniPublicAPIWorldInput;

// ********** End Class UHoudiniPublicAPIWorldInput ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEP_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h

// ********** Begin Enum EHoudiniPublicAPICurveType ************************************************
#define FOREACH_ENUM_EHOUDINIPUBLICAPICURVETYPE(op) \
	op(EHoudiniPublicAPICurveType::Invalid) \
	op(EHoudiniPublicAPICurveType::Polygon) \
	op(EHoudiniPublicAPICurveType::Nurbs) \
	op(EHoudiniPublicAPICurveType::Bezier) \
	op(EHoudiniPublicAPICurveType::Points) 

enum class EHoudiniPublicAPICurveType : uint8;
template<> struct TIsUEnumClass<EHoudiniPublicAPICurveType> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveType>();
// ********** End Enum EHoudiniPublicAPICurveType **************************************************

// ********** Begin Enum EHoudiniPublicAPICurveMethod **********************************************
#define FOREACH_ENUM_EHOUDINIPUBLICAPICURVEMETHOD(op) \
	op(EHoudiniPublicAPICurveMethod::Invalid) \
	op(EHoudiniPublicAPICurveMethod::CVs) \
	op(EHoudiniPublicAPICurveMethod::Breakpoints) \
	op(EHoudiniPublicAPICurveMethod::Freehand) 

enum class EHoudiniPublicAPICurveMethod : uint8;
template<> struct TIsUEnumClass<EHoudiniPublicAPICurveMethod> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveMethod>();
// ********** End Enum EHoudiniPublicAPICurveMethod ************************************************

// ********** Begin Enum EHoudiniPublicAPICurveBreakpointParameterization **************************
#define FOREACH_ENUM_EHOUDINIPUBLICAPICURVEBREAKPOINTPARAMETERIZATION(op) \
	op(EHoudiniPublicAPICurveBreakpointParameterization::Invalid) \
	op(EHoudiniPublicAPICurveBreakpointParameterization::Uniform) \
	op(EHoudiniPublicAPICurveBreakpointParameterization::Chord) \
	op(EHoudiniPublicAPICurveBreakpointParameterization::Centripetal) 

enum class EHoudiniPublicAPICurveBreakpointParameterization : uint8;
template<> struct TIsUEnumClass<EHoudiniPublicAPICurveBreakpointParameterization> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveBreakpointParameterization>();
// ********** End Enum EHoudiniPublicAPICurveBreakpointParameterization ****************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
