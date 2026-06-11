// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_9/ABBaseballPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABBaseballPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UNREAL_9_API UClass* Z_Construct_UClass_AABBaseballPlayerController();
UNREAL_9_API UClass* Z_Construct_UClass_AABBaseballPlayerController_NoRegister();
UNREAL_9_API UClass* Z_Construct_UClass_UBaseballNoticeWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_9();
// End Cross Module References

// Begin Class AABBaseballPlayerController Function Client_RemoveNoticeWidget
static const FName NAME_AABBaseballPlayerController_Client_RemoveNoticeWidget = FName(TEXT("Client_RemoveNoticeWidget"));
void AABBaseballPlayerController::Client_RemoveNoticeWidget()
{
	UFunction* Func = FindFunctionChecked(NAME_AABBaseballPlayerController_Client_RemoveNoticeWidget);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AABBaseballPlayerController_Client_RemoveNoticeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ABBaseballPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABBaseballPlayerController_Client_RemoveNoticeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABBaseballPlayerController, nullptr, "Client_RemoveNoticeWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_Client_RemoveNoticeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABBaseballPlayerController_Client_RemoveNoticeWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AABBaseballPlayerController_Client_RemoveNoticeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABBaseballPlayerController_Client_RemoveNoticeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABBaseballPlayerController::execClient_RemoveNoticeWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_RemoveNoticeWidget_Implementation();
	P_NATIVE_END;
}
// End Class AABBaseballPlayerController Function Client_RemoveNoticeWidget

// Begin Class AABBaseballPlayerController Function Client_ShowNoticeWidget
struct ABBaseballPlayerController_eventClient_ShowNoticeWidget_Parms
{
	FString Message;
};
static const FName NAME_AABBaseballPlayerController_Client_ShowNoticeWidget = FName(TEXT("Client_ShowNoticeWidget"));
void AABBaseballPlayerController::Client_ShowNoticeWidget(const FString& Message)
{
	ABBaseballPlayerController_eventClient_ShowNoticeWidget_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_AABBaseballPlayerController_Client_ShowNoticeWidget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ABBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBaseballPlayerController_eventClient_ShowNoticeWidget_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABBaseballPlayerController, nullptr, "Client_ShowNoticeWidget", nullptr, nullptr, Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::PropPointers), sizeof(ABBaseballPlayerController_eventClient_ShowNoticeWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(ABBaseballPlayerController_eventClient_ShowNoticeWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABBaseballPlayerController::execClient_ShowNoticeWidget)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_ShowNoticeWidget_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AABBaseballPlayerController Function Client_ShowNoticeWidget

// Begin Class AABBaseballPlayerController Function Server_SubmitGuess
struct ABBaseballPlayerController_eventServer_SubmitGuess_Parms
{
	FString InGuess;
};
static const FName NAME_AABBaseballPlayerController_Server_SubmitGuess = FName(TEXT("Server_SubmitGuess"));
void AABBaseballPlayerController::Server_SubmitGuess(const FString& InGuess)
{
	ABBaseballPlayerController_eventServer_SubmitGuess_Parms Parms;
	Parms.InGuess=InGuess;
	UFunction* Func = FindFunctionChecked(NAME_AABBaseballPlayerController_Server_SubmitGuess);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ABBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGuess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InGuess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::NewProp_InGuess = { "InGuess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBaseballPlayerController_eventServer_SubmitGuess_Parms, InGuess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGuess_MetaData), NewProp_InGuess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::NewProp_InGuess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABBaseballPlayerController, nullptr, "Server_SubmitGuess", nullptr, nullptr, Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::PropPointers), sizeof(ABBaseballPlayerController_eventServer_SubmitGuess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::Function_MetaDataParams) };
static_assert(sizeof(ABBaseballPlayerController_eventServer_SubmitGuess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABBaseballPlayerController::execServer_SubmitGuess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InGuess);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SubmitGuess_Validate(Z_Param_InGuess))
	{
		RPC_ValidateFailed(TEXT("Server_SubmitGuess_Validate"));
		return;
	}
	P_THIS->Server_SubmitGuess_Implementation(Z_Param_InGuess);
	P_NATIVE_END;
}
// End Class AABBaseballPlayerController Function Server_SubmitGuess

// Begin Class AABBaseballPlayerController Function SubmitGuessToServer
struct Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics
{
	struct ABBaseballPlayerController_eventSubmitGuessToServer_Parms
	{
		FString InGuess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ABBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGuess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InGuess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::NewProp_InGuess = { "InGuess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABBaseballPlayerController_eventSubmitGuessToServer_Parms, InGuess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGuess_MetaData), NewProp_InGuess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::NewProp_InGuess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABBaseballPlayerController, nullptr, "SubmitGuessToServer", nullptr, nullptr, Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::ABBaseballPlayerController_eventSubmitGuessToServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::ABBaseballPlayerController_eventSubmitGuessToServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABBaseballPlayerController::execSubmitGuessToServer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InGuess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubmitGuessToServer(Z_Param_InGuess);
	P_NATIVE_END;
}
// End Class AABBaseballPlayerController Function SubmitGuessToServer

// Begin Class AABBaseballPlayerController
void AABBaseballPlayerController::StaticRegisterNativesAABBaseballPlayerController()
{
	UClass* Class = AABBaseballPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_RemoveNoticeWidget", &AABBaseballPlayerController::execClient_RemoveNoticeWidget },
		{ "Client_ShowNoticeWidget", &AABBaseballPlayerController::execClient_ShowNoticeWidget },
		{ "Server_SubmitGuess", &AABBaseballPlayerController::execServer_SubmitGuess },
		{ "SubmitGuessToServer", &AABBaseballPlayerController::execSubmitGuessToServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABBaseballPlayerController);
UClass* Z_Construct_UClass_AABBaseballPlayerController_NoRegister()
{
	return AABBaseballPlayerController::StaticClass();
}
struct Z_Construct_UClass_AABBaseballPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ABBaseballPlayerController.h" },
		{ "ModuleRelativePath", "ABBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoticeWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "ABBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNoticeWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ABBaseballPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NoticeWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveNoticeWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AABBaseballPlayerController_Client_RemoveNoticeWidget, "Client_RemoveNoticeWidget" }, // 3194389207
		{ &Z_Construct_UFunction_AABBaseballPlayerController_Client_ShowNoticeWidget, "Client_ShowNoticeWidget" }, // 2371417146
		{ &Z_Construct_UFunction_AABBaseballPlayerController_Server_SubmitGuess, "Server_SubmitGuess" }, // 2874053784
		{ &Z_Construct_UFunction_AABBaseballPlayerController_SubmitGuessToServer, "SubmitGuessToServer" }, // 1186891286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABBaseballPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABBaseballPlayerController_Statics::NewProp_NoticeWidgetClass = { "NoticeWidgetClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABBaseballPlayerController, NoticeWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseballNoticeWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoticeWidgetClass_MetaData), NewProp_NoticeWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABBaseballPlayerController_Statics::NewProp_ActiveNoticeWidget = { "ActiveNoticeWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABBaseballPlayerController, ActiveNoticeWidget), Z_Construct_UClass_UBaseballNoticeWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveNoticeWidget_MetaData), NewProp_ActiveNoticeWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABBaseballPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABBaseballPlayerController_Statics::NewProp_NoticeWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABBaseballPlayerController_Statics::NewProp_ActiveNoticeWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABBaseballPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABBaseballPlayerController_Statics::ClassParams = {
	&AABBaseballPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AABBaseballPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AABBaseballPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABBaseballPlayerController()
{
	if (!Z_Registration_Info_UClass_AABBaseballPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABBaseballPlayerController.OuterSingleton, Z_Construct_UClass_AABBaseballPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABBaseballPlayerController.OuterSingleton;
}
template<> UNREAL_9_API UClass* StaticClass<AABBaseballPlayerController>()
{
	return AABBaseballPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABBaseballPlayerController);
AABBaseballPlayerController::~AABBaseballPlayerController() {}
// End Class AABBaseballPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABBaseballPlayerController, AABBaseballPlayerController::StaticClass, TEXT("AABBaseballPlayerController"), &Z_Registration_Info_UClass_AABBaseballPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABBaseballPlayerController), 1991164134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_3876968630(TEXT("/Script/Unreal_9"),
	Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
