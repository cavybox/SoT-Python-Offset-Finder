// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x1e8
class BP_Prompt_CosmeticPurchased_C: public BP_PromptCoordinator_Base_C
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x118(0x8)
	Struct ObjectMessagingHandle                                 Handle_OfferPurchasedEvent;                        // 0x120(0x48)
	Struct ObjectMessagingHandle                                 Handle_ShopClosedEvent;                            // 0x168(0x48)
	Struct ObjectMessagingHandle                                 Handle_PlayerEntitlementUpdatedEvent;              // 0x1b0(0x48)
	Struct PrioritisedPromptWithHandle                           Prompt_CosmeticPurchased;                          // 0x1f8(0x68)
	Struct PrioritisedPromptWithHandle                           Prompt_VisitCustomizationChest;                    // 0x260(0x68)
	class                                                        AccessKey;                                         // 0x2c8(0x8)
	TArray<Class ProcessingPurchase>                             CategoryTypes;                                     // 0x2d0(0x10)
	TArray<Str >                                                 PurchasedEntitlementIds;                           // 0x2e0(0x10)
	float                                                        DelayUntilPromptDisplays;                          // 0x2f0(0x4)
	float                                                        DelayBetweenPrompts;                               // 0x2f4(0x4)
	float                                                        PromptDisplayDuration;                             // 0x2f8(0x4)
	bool                                                         CosmeticPurchased;                                 // 0x2fc(0x1)
	bool                                                         PromptInfoSet;                                     // 0x2fd(0x1)
	bool                                                         DisplayingPrompts;                                 // 0x2fe(0x1)
	bool                                                         ProcessingPurchase;                                // 0x2ff(0x1)
};


}