// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABBaseballPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREAL_9_ABBaseballPlayerState_generated_h
#error "ABBaseballPlayerState.generated.h already included, missing '#pragma once' in ABBaseballPlayerState.h"
#endif
#define UNREAL_9_ABBaseballPlayerState_generated_h

#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CurrentAttempts);


#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABBaseballPlayerState(); \
	friend struct Z_Construct_UClass_AABBaseballPlayerState_Statics; \
public: \
	DECLARE_CLASS(AABBaseballPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal_9"), NO_API) \
	DECLARE_SERIALIZER(AABBaseballPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentAttempts=NETFIELD_REP_START, \
		MaxAttempts, \
		NETFIELD_REP_END=MaxAttempts	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AABBaseballPlayerState(AABBaseballPlayerState&&); \
	AABBaseballPlayerState(const AABBaseballPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABBaseballPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABBaseballPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABBaseballPlayerState) \
	NO_API virtual ~AABBaseballPlayerState();


#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_7_PROLOG
#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL_9_API UClass* StaticClass<class AABBaseballPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
