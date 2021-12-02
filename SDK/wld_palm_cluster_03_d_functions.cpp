﻿// Name: SoT, Version: 2.4.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function wld_palm_cluster_03_d.wld_palm_cluster_03_d_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_palm_cluster_03_d_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wld_palm_cluster_03_d.wld_palm_cluster_03_d_C.UserConstructionScript");

	Awld_palm_cluster_03_d_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_palm_cluster_03_d_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(StaticMeshComponent04, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent02, UStaticMeshComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awld_palm_cluster_03_d_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(StaticMeshComponent04);
	DELE_PTR_FULL(StaticMeshComponent02);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
