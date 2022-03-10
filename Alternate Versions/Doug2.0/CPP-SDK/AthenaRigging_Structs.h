// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class RopeCatenaryShapeParams: public None
{
public:
	Struct RopeCatenaryLengthParams                              Length;                                            // 0x0(0x10)
	Struct RopeCatenarySlopeBlendParams                          Slope;                                             // 0x10(0x8)
};


// Size 0x8
class RopeCatenarySlopeBlendParams: public None
{
public:
	float                                                        MinSlopeForTautBlend;                              // 0x0(0x4)
	float                                                        MaxSlopeForTautBlend;                              // 0x4(0x4)
};


// Size 0x10
class RopeCatenaryLengthParams: public None
{
public:
	float                                                        MinTautLength;                                     // 0x0(0x4)
	float                                                        MaxTautLength;                                     // 0x4(0x4)
	float                                                        CatenaryScaleAtMinLength;                          // 0x8(0x4)
	float                                                        CatenaryScaleAtMaxLength;                          // 0xc(0x4)
};


// Size 0x8
class RopeCatenarySwingParams: public None
{
public:
	float                                                        LengthForNeutralSwing;                             // 0x0(0x4)
	float                                                        LengthBias;                                        // 0x4(0x4)
};


// Size 0x8
class RopeCatenaryDynamicsParams: public None
{
public:
	float                                                        CatenaryToTautLengthRatioToConsiderCatenary;       // 0x0(0x4)
	bool                                                         ReactsToWind;                                      // 0x4(0x1)
};


// Size 0x54
class InstancedRopeParams: public None
{
public:
	Struct Vector                                                Start;                                             // 0x0(0xc)
	Struct Vector                                                End;                                               // 0xc(0xc)
	float                                                        Thickness;                                         // 0x18(0x4)
	float                                                        UVScale;                                           // 0x1c(0x4)
	float                                                        UVBase;                                            // 0x20(0x4)
	float                                                        UVOffset;                                          // 0x24(0x4)
	float                                                        Roughness;                                         // 0x28(0x4)
	Struct RopeCatenaryShapeParams                               Shape;                                             // 0x2c(0x18)
	Struct RopeCatenarySwingParams                               Swing;                                             // 0x44(0x8)
	Struct RopeCatenaryDynamicsParams                            Dynamics;                                          // 0x4c(0x8)
};


// Size 0x10
class RiggingSystemLine: public None
{
public:
};


// Size 0x60
class RiggingSystemPulleyData: public None
{
public:
	TArray<Float None>                                           AttachmentSag;                                     // 0x0(0x10)
	TArray<Float >                                               AttachmentLength;                                  // 0x10(0x10)
	TArray<Float >                                               Scale;                                             // 0x20(0x10)
	TArray<Float >                                               ScaledOffset;                                      // 0x30(0x10)
	TArray<Float >                                               ScaledRadius;                                      // 0x40(0x10)
	TArray<Int >                                                 MeshIDs;                                           // 0x50(0x10)
};


// Size 0xc
class RopeVisualParams: public None
{
public:
	float                                                        Thickness;                                         // 0x0(0x4)
	float                                                        UVScale;                                           // 0x4(0x4)
	float                                                        Roughness;                                         // 0x8(0x4)
};


// Size 0x20
class RopeStyleParams: public None
{
public:
	Class StaticMesh*                                            Mesh;                                              // 0x0(0x8)
	Class Texture2D*                                             DiffuseTexture;                                    // 0x8(0x8)
	Class Texture2D*                                             NormalTexture;                                     // 0x10(0x8)
	int                                                          ShadowLOD;                                         // 0x18(0x4)
};


// Size 0x10
class PulleyVisualParams: public None
{
public:
	Class StaticMesh*                                            Mesh;                                              // 0x0(0x8)
	float                                                        Scale;                                             // 0x8(0x4)
	float                                                        Radius;                                            // 0xc(0x4)
};


// Size 0x50
class RiggingSystemPulleyParams: public None
{
public:
	Struct SocketId                                              Anchor;                                            // 0x0(0x20)
	float                                                        OffsetFromAnchor;                                  // 0x20(0x4)
	Struct PulleyVisualParams                                    Visuals;                                           // 0x28(0x10)
	Struct RiggingSystemPulleyAttachmentParams                   AttachmentRope;                                    // 0x38(0x14)
};


// Size 0x14
class RiggingSystemPulleyAttachmentParams: public None
{
public:
	Struct RopeVisualParams                                      Visuals;                                           // 0x0(0xc)
	float                                                        Length;                                            // 0xc(0x4)
	float                                                        Sag;                                               // 0x10(0x4)
};


// Size 0x78
class RiggingSystemLineParams: public None
{
public:
	Struct SocketId                                              Start;                                             // 0x0(0x20)
	TArray<Struct Start>                                         Pulleys;                                           // 0x20(0x10)
	Struct SocketId                                              End;                                               // 0x30(0x20)
	Struct RopeVisualParams                                      Visuals;                                           // 0x50(0xc)
	Struct RopeCatenaryShapeParams                               Shape;                                             // 0x5c(0x18)
};


// Size 0x18
class RiggingSystemLineGroup: public None
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	TArray<Struct Name>                                          Lines;                                             // 0x8(0x10)
};


// Size 0x8
class RopeCatenaryLengthPair: public None
{
public:
	float                                                        Taut;                                              // 0x0(0x4)
	float                                                        Catenary;                                          // 0x4(0x4)
};


}