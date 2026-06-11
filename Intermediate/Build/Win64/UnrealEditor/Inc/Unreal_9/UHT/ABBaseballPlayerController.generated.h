// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABBaseballPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREAL_9_ABBaseballPlayerController_generated_h
#error "ABBaseballPlayerController.generated.h already included, missing '#pragma once' in ABBaseballPlayerController.h"
#endif
#define UNREAL_9_ABBaseballPlayerController_generated_h

#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SubmitGuess_Validate(const FString& ); \
	virtual void Server_SubmitGuess_Implementation(const FString& InGuess); \
	virtual void Client_RemoveNoticeWidget_Implementation(); \
	virtual void Client_ShowNoticeWidget_Implementation(const FString& Message); \
	DECLARE_FUNCTION(execServer_SubmitGuess); \
	DECLARE_FUNCTION(execClient_RemoveNoticeWidget); \
	DECLARE_FUNCTION(execClient_ShowNoticeWidget); \
	DECLARE_FUNCTION(execSubmitGuessToServer);


#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_13_CALLBACK_WRAPPERS
#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABBaseballPlayerController(); \
	friend struct Z_Construct_UClass_AABBaseballPlayerController_Statics; \
public: \
	DECLARE_CLASS(AABBaseballPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal_9"), NO_API) \
	DECLARE_SERIALIZER(AABBaseballPlayerController)


#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AABBaseballPlayerController(AABBaseballPlayerController&&); \
	AABBaseballPlayerController(const AABBaseballPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABBaseballPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABBaseballPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABBaseballPlayerController) \
	NO_API virtual ~AABBaseballPlayerController();


#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_10_PROLOG
#define FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_13_CALLBACK_WRAPPERS \
	FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREAL_9_API UClass* StaticClass<class AABBaseballPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
