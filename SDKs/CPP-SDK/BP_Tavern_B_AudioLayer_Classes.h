// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48
class BP_Tavern_B_AudioLayer_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3d0(0x8)
	Class TritonComponent*                                       Triton;                                            // 0x3d8(0x8)
	Class WwiseEmitterComponent*                                 Fire;                                              // 0x3e0(0x8)
	Class AudioSpaceComponent*                                   Tavern_AudioSpace_EdgeSection;                     // 0x3e8(0x8)
	Class AudioSpaceComponent*                                   Tavern_AudioSpace_LargeSection;                    // 0x3f0(0x8)
	Class AudioPortalComponent*                                  Tavern_AudioPortal;                                // 0x3f8(0x8)
	Class SceneComponent*                                        Scene;                                             // 0x400(0x8)
	Class WwiseEvent*                                            TavernFire_Play;                                   // 0x408(0x8)
	Class WwiseEvent*                                            TavernFire_Stop;                                   // 0x410(0x8)
};


}