// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_9/ABBaseballGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABBaseballGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREAL_9_API UClass* Z_Construct_UClass_AABBaseballGameMode();
UNREAL_9_API UClass* Z_Construct_UClass_AABBaseballGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_9();
// End Cross Module References

// Begin Class AABBaseballGameMode
void AABBaseballGameMode::StaticRegisterNativesAABBaseballGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABBaseballGameMode);
UClass* Z_Construct_UClass_AABBaseballGameMode_NoRegister()
{
	return AABBaseballGameMode::StaticClass();
}
struct Z_Construct_UClass_AABBaseballGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ABBaseballGameMode.h" },
		{ "ModuleRelativePath", "ABBaseballGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABBaseballGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AABBaseballGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABBaseballGameMode_Statics::ClassParams = {
	&AABBaseballGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABBaseballGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AABBaseballGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AABBaseballGameMode()
{
	if (!Z_Registration_Info_UClass_AABBaseballGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABBaseballGameMode.OuterSingleton, Z_Construct_UClass_AABBaseballGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABBaseballGameMode.OuterSingleton;
}
template<> UNREAL_9_API UClass* StaticClass<AABBaseballGameMode>()
{
	return AABBaseballGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AABBaseballGameMode);
AABBaseballGameMode::~AABBaseballGameMode() {}
// End Class AABBaseballGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABBaseballGameMode, AABBaseballGameMode::StaticClass, TEXT("AABBaseballGameMode"), &Z_Registration_Info_UClass_AABBaseballGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABBaseballGameMode), 2278734641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballGameMode_h_3589021324(TEXT("/Script/Unreal_9"),
	Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_ABBaseballGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
