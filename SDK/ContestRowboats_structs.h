﻿#pragma once

// Name: SoT, Version: 2.4.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ContestRowboats.EventRowboatAddedToContestCrewRequiresLiveryData
// 0x0028
struct FEventRowboatAddedToContestCrewRequiresLiveryData
{
	unsigned char                                      UnknownData_VE6F[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
