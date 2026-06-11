// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_9/ABBaseballPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABBaseballPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UNREAL_9_API UClass* Z_Construct_UClass_AABBaseballPlayerState();
UNREAL_9_API UClass* Z_Construct_UClass_AABBaseballPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_9();
// End Cross Module References

// Begin Class AABBaseballPlayerState Function OnRep_CurrentAttempts
struct Z_Construct_UFunction_AABBaseballPlayerState_OnRep_CurrentAttempts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ABBaseballPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABBaseballPlayerState_OnRep_CurrentAttempts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABBaseballPlayerState, nullptr, "OnRep_CurrentAttempts", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABBaseballPlayerState_OnRep_CurrentAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABBaseballPlayerState_OnRep_CurrentAttempts_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AABBaseballPlayerState_OnRep_CurrentAttempts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABBaseballPlayerState_OnRep_CurrentAttempts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABBaseballPlayerState::execOnRep_CurrentAttempts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentAttempts();
	P_NATIVE_END;
}
// End Class AABBaseballPlayerState Function OnRep_CurrentAttempts

// Begin Class AABBaseballPlayerState
void AABBaseballPlayerState::StaticRegisterNativesAABBaseballPlayerState()
{
	UClass* Class = AABBaseballPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentAttempts", &AABBaseballPlayerState::execOnRep_CurrentAttempts },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABBaseballPlayerState);
UClass* Z_Construct_UClass_AABBaseballPlayerState_NoRegister()
{
	return AABBaseballPlayerState::StaticClass();
}
struct Z_Construct_UClass_AABBaseballPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ABBaseballPlayerState.h" },
		{ "ModuleRelativePath", "ABBaseballPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAttempts_MetaData[] = {
		{ "ModuleRelativePath", "ABBaseballPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttempts_MetaData[] = {
		{ "ModuleRelativePath", "ABBaseballPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAttempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttempts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AABBaseballPlayerState_OnRep_CurrentAttempts, "OnRep_CurrentAttempts" }, // 2164218178
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABBaseballPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABBaseballPlayerState_Statics::NewProp_CurrentAttempts = { "CurrentAttempts", "OnRep_CurrentAttempts", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABBaseballPlayerState, CurrentAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAttempts_MetaData), NewProp_CurrentAttempts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABBaseballPlayerState_Statics::NewProp_MaxAttempts = { "MaxAttempts", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABBaseballPlayerState, MaxAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAttempts_MetaData), NewProp_MaxAttempts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABBaseballPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABBaseballPlayerState_Statics::NewProp_CurrentAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABBaseballPlayerState_Statics::NewProp_MaxAttempts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AABBaseballPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABBaseballPlayerState_Statics::ClassParams = {
	&AABBaseballPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AABBaseballPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AABBaseballPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABBaseballPlayerState()
{
	if (!Z_Registration_Info_UClass_AABBaseballPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABBaseballPlayerState.OuterSingleton, Z_Construct_UClass_AABBaseballPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABBaseballPlayerState.OuterSingleton;
}
template<> UNREAL_9_API UClass* StaticClass<AABBaseballPlayerState>()
{
	return AABBaseballPlayerState::StaticClass();
}
void AABBaseballPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentAttempts(TEXT("CurrentAttempts"));
	static const FName Name_MaxAttempts(TEXT("MaxAttempts"));
	const bool bIsValid = true
		&& Name_CurrentAttempts == ClassReps[(int32)ENetFields_Private::CurrentAttempts].Property->GetFName()
		&& Name_MaxAttempts == ClassReps[(int32)ENetFields_Private::MaxAttempts].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AABBaseballPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABBaseballPlayerState);
AABBaseballPlayerState::~AABBaseballPlayerState() {}
// End Class AABBaseballPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABBaseballPlayerState, AABBaseballPlayerState::StaticClass, TEXT("AABBaseballPlayerState"), &Z_Registration_Info_UClass_AABBaseballPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABBaseballPlayerState), 2013996143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_4144931581(TEXT("/Script/Unreal_9"),
	Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
