// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CullofCthulu/BP_Cannon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Cannon() {}

// Begin Cross Module References
CULLOFCTHULU_API UClass* Z_Construct_UClass_UBP_Cannon();
CULLOFCTHULU_API UClass* Z_Construct_UClass_UBP_Cannon_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CullofCthulu();
// End Cross Module References

// Begin Class UBP_Cannon
void UBP_Cannon::StaticRegisterNativesUBP_Cannon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBP_Cannon);
UClass* Z_Construct_UClass_UBP_Cannon_NoRegister()
{
	return UBP_Cannon::StaticClass();
}
struct Z_Construct_UClass_UBP_Cannon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BP_Cannon.h" },
		{ "ModuleRelativePath", "BP_Cannon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_Cannon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBP_Cannon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CullofCthulu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cannon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBP_Cannon_Statics::ClassParams = {
	&UBP_Cannon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBP_Cannon_Statics::Class_MetaDataParams), Z_Construct_UClass_UBP_Cannon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBP_Cannon()
{
	if (!Z_Registration_Info_UClass_UBP_Cannon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBP_Cannon.OuterSingleton, Z_Construct_UClass_UBP_Cannon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBP_Cannon.OuterSingleton;
}
template<> CULLOFCTHULU_API UClass* StaticClass<UBP_Cannon>()
{
	return UBP_Cannon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_Cannon);
UBP_Cannon::~UBP_Cannon() {}
// End Class UBP_Cannon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ajash_Desktop_Purdue_365_CGT365_Blackship_Entertainment_CullofCthulu_Source_CullofCthulu_BP_Cannon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBP_Cannon, UBP_Cannon::StaticClass, TEXT("UBP_Cannon"), &Z_Registration_Info_UClass_UBP_Cannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBP_Cannon), 3073585864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ajash_Desktop_Purdue_365_CGT365_Blackship_Entertainment_CullofCthulu_Source_CullofCthulu_BP_Cannon_h_3211127282(TEXT("/Script/CullofCthulu"),
	Z_CompiledInDeferFile_FID_Users_ajash_Desktop_Purdue_365_CGT365_Blackship_Entertainment_CullofCthulu_Source_CullofCthulu_BP_Cannon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ajash_Desktop_Purdue_365_CGT365_Blackship_Entertainment_CullofCthulu_Source_CullofCthulu_BP_Cannon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
