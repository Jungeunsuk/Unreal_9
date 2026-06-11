// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_9/BaseballNoticeWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseballNoticeWidget() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREAL_9_API UClass* Z_Construct_UClass_UBaseballNoticeWidget();
UNREAL_9_API UClass* Z_Construct_UClass_UBaseballNoticeWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_9();
// End Cross Module References

// Begin Class UBaseballNoticeWidget
void UBaseballNoticeWidget::StaticRegisterNativesUBaseballNoticeWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseballNoticeWidget);
UClass* Z_Construct_UClass_UBaseballNoticeWidget_NoRegister()
{
	return UBaseballNoticeWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseballNoticeWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseballNoticeWidget.h" },
		{ "ModuleRelativePath", "BaseballNoticeWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoticeTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseballNoticeWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoticeTextBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseballNoticeWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseballNoticeWidget_Statics::NewProp_NoticeTextBlock = { "NoticeTextBlock", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseballNoticeWidget, NoticeTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoticeTextBlock_MetaData), NewProp_NoticeTextBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseballNoticeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseballNoticeWidget_Statics::NewProp_NoticeTextBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseballNoticeWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseballNoticeWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_9,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseballNoticeWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseballNoticeWidget_Statics::ClassParams = {
	&UBaseballNoticeWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseballNoticeWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseballNoticeWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseballNoticeWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseballNoticeWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseballNoticeWidget()
{
	if (!Z_Registration_Info_UClass_UBaseballNoticeWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseballNoticeWidget.OuterSingleton, Z_Construct_UClass_UBaseballNoticeWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseballNoticeWidget.OuterSingleton;
}
template<> UNREAL_9_API UClass* StaticClass<UBaseballNoticeWidget>()
{
	return UBaseballNoticeWidget::StaticClass();
}
UBaseballNoticeWidget::UBaseballNoticeWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseballNoticeWidget);
UBaseballNoticeWidget::~UBaseballNoticeWidget() {}
// End Class UBaseballNoticeWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_BaseballNoticeWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseballNoticeWidget, UBaseballNoticeWidget::StaticClass, TEXT("UBaseballNoticeWidget"), &Z_Registration_Info_UClass_UBaseballNoticeWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseballNoticeWidget), 2952032578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_BaseballNoticeWidget_h_2851899060(TEXT("/Script/Unreal_9"),
	Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_BaseballNoticeWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitStudy_Unreal_9_Source_Unreal_9_BaseballNoticeWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
