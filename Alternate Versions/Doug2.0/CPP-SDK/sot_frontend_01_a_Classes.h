// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x80
class sot_frontend_01_a_C: public LevelScriptActor
{
public:
	Struct PointerToUberGraphFrame                               UberGraphFrame;                                    // 0x3d8(0x8)
	Class PirateSelector*                                        PirateUI;                                          // 0x3e0(0x8)
	bool                                                         ZoomIn;                                            // 0x3e8(0x1)
	bool                                                         Rotation;                                          // 0x3e9(0x1)
	bool                                                         Selected;                                          // 0x3ea(0x1)
	float                                                        initTime;                                          // 0x3ec(0x4)
	float                                                        rotFactor;                                         // 0x3f0(0x4)
	bool                                                         ZoomOut;                                           // 0x3f4(0x1)
	bool                                                         initHighlight;                                     // 0x3f5(0x1)
	int                                                          charSlotID;                                        // 0x3f8(0x4)
	TArray<class pirateLineUpRef*>                               pirateLineUpRef;                                   // 0x400(0x10)
	int                                                          lastCharSlotID;                                    // 0x410(0x4)
	bool                                                         zoomOutDone;                                       // 0x414(0x1)
	bool                                                         zoomDone;                                          // 0x415(0x1)
	AnimBlueprintGeneratedClass BP_Anim_CharacterSelect_C*       pirateLineUpAnimgraph;                             // 0x418(0x8)
	Struct Vector                                                selectedPirateLoc;                                 // 0x420(0xc)
	Struct Rotator                                               selectedPirateRot;                                 // 0x42c(0xc)
	bool                                                         PiratesInitialized;                                // 0x438(0x1)
	bool                                                         PirateSelected;                                    // 0x439(0x1)
	bool                                                         mouseDown;                                         // 0x43a(0x1)
	bool                                                         mouseDragging;                                     // 0x43b(0x1)
	float                                                        mouseStartX;                                       // 0x43c(0x4)
	BlueprintGeneratedClass BP_CarouselCam_C*                    BP_CarouselCam_C_2_ExecuteUbergraph_sot_frontend_01_a_RefProper; // 0x440(0x8)
	Class MatineeActor*                                          MatineeActor_PirateSelect_ExecuteUbergraph_sot_frontend_01_a_Re; // 0x448(0x8)
	BlueprintGeneratedClass BP_CarouselCam_C*                    BP_CarouselCam_C_2_UniqueObjectNameForCooking_232772163_RefProp; // 0x450(0x8)
};


}