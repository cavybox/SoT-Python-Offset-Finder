// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x90
class BP_Prompt_EmissaryActivated_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	Struct ObjectMessagingHandle                                 Handle_EmissaryCompanyChangedEvent;                // 0x120(0x48)
	struct FName                                                 CompanyName;                                       // 0x168(0x8)
	struct FName                                                 ExpectedCompanyName;                               // 0x170(0x8)
	TArray<Struct PromptAccessKey>                               Prompts;                                           // 0x178(0x10)
	bool                                                         PromptSurfacedThisSession;                         // 0x188(0x1)
	class                                                        PromptAccessKey;                                   // 0x190(0x8)
	int                                                          PromptIndex;                                       // 0x198(0x4)
	int                                                          NumberOfPrompts;                                   // 0x19c(0x4)
	float                                                        InitialDelay;                                      // 0x1a0(0x4)
	float                                                        ShowPromptDuration;                                // 0x1a4(0x4)
};


}