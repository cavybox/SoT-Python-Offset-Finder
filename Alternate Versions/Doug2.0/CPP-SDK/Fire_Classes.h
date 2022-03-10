// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class FlammableComponent: public ActorComponent
{
public:
	bool                                                         OnFire;                                            // 0xd8(0x1)
};


// Size 0x30
class ActorFlammableComponent: public FlammableComponent
{
public:
	Class ParticleSystem*                                        FireVFX;                                           // 0xf8(0x8)
	Class ParticleSystem*                                        SteamVFX;                                          // 0x100(0x8)
	float                                                        FireVFXIntensity;                                  // 0x108(0x4)
};


// Size 0x0
class BlownByWindStatus: public StatusBase
{
public:
};


// Size 0x0
class ExtinguishableInterface: public Interface
{
public:
};


// Size 0x0
class FireDamagerType: public DamagerType
{
public:
};


// Size 0x0
class FireExplosionDamagerType: public DamagerType
{
public:
};


// Size 0x0
class FireStatus: public StatusBase
{
public:
};


// Size 0x0
class FlammableInterface: public Interface
{
public:
};


// Size 0x18
class FlammableWieldableComponent: public FlammableComponent
{
public:
	Struct Status                                                IgnitedStatus;                                     // 0xe0(0x18)
};


// Size 0x8
class TimedFlammableComponent: public FlammableComponent
{
public:
	bool                                                         UseExtinguishTimer;                                // 0xe0(0x1)
	bool                                                         AllowFireToBeReplenishedBeforeExtinguishTimerExpired; // 0xe1(0x1)
	float                                                        TimeInSecondsUntilFireExtinguished;                // 0xe4(0x4)
};


// Size 0x0
class IgniteStatus: public StatusBase
{
public:
};


// Size 0x0
class StatusResponseExtinguish: public StatusResponse
{
public:
};


// Size 0x0
class StatusResponseIgnite: public StatusResponse
{
public:
};


// Size 0x10
class FireGridCellSelectionParamsDataAsset: public DataAsset
{
public:
	TArray<Struct SetAllCellsState>                              FireGridCellSelectionParams;                       // 0x28(0x10)
};


// Size 0x0
class FirePropagationInterface: public Interface
{
public:
};


// Size 0x78
class CookerIgnitionComponent: public ActorComponent
{
public:
	Struct CookerIgnitionParams                                  CookerIgnitionParams;                              // 0xc8(0x78)
};


// Size 0x98
class FireCellStateTimingParamsDataAsset: public DataAsset
{
public:
	Struct FireCellStateTimingParams                             TimingParams;                                      // 0x28(0x94)
};


// Size 0xa8
class FireGridAudioManager: public Object
{
public:
	Struct FireCellAudioParams                                   FireAudioParams;                                   // 0x28(0x40)
	Class Actor*                                                 OwningActor;                                       // 0x68(0x8)
	Class FirePropagator*                                        FirePropagator;                                    // 0x70(0x8)
};


// Size 0x0
class FireGridLocationInterface: public Interface
{
public:
};


// Size 0x0
class FireGridProxyInterface: public FireGridLocationInterface
{
public:
};


// Size 0x40
class FireGridVFXParamsDataAsset: public DataAsset
{
public:
	Struct FireGridVFXParams                                     Params;                                            // 0x28(0x40)
};


// Size 0x1e8
class FireGridVFXManager: public Object
{
public:
	Class FireGridVFXParamsDataAsset*                            VFXParams;                                         // 0x28(0x8)
	TArray<Struct SpawnedParticleSystemsForTemplates>            SpawnedCustomParticleSystemsForCells;              // 0x80(0x10)
	Class ParticleSystemComponent*                               SpawnedExteriorSmokeParticleSystem;                // 0x130(0x8)
	Class ParticleSystemComponent*                               SpawnedLowDetailParticleSystem;                    // 0x138(0x8)
	TArray<Struct SpawnedLowDetailParticleSystem>                DespawningMeshes;                                  // 0x140(0x10)
	TArray<Struct DespawningMeshes>                              InteriorSmokeSpawnDescs;                           // 0x150(0x10)
	TArray<Struct InteriorSmokeSpawnDescs>                       LowDetailVFXSpawnDescs;                            // 0x160(0x10)
	TArray<Struct LowDetailVFXSpawnDescs>                        ParticleSpawnLODSettings;                          // 0x170(0x10)
	TArray<Struct ParticleSpawnLODSettings>                      ExteriorSmokeVFXSpawnDescs;                        // 0x180(0x10)
	TArray<Struct ExteriorSmokeVFXSpawnDescs>                    VFXToSpawn;                                        // 0x190(0x10)
	TArray<Struct VFXToSpawn>                                    InterleavedSpawnLists;                             // 0x1a8(0x10)
	Class FirePropagator*                                        Propagator;                                        // 0x1b8(0x8)
};


// Size 0xf8
class FirePropagator: public Object
{
public:
	Class FireCellStateTimingParamsDataAsset*                    CellStateTimingParams;                             // 0xb8(0x8)
	float                                                        WaterHeightOffsetToFloodCells;                     // 0xc4(0x4)
};


// Size 0x28
class MastFlammableComponent: public ActorFlammableComponent
{
public:
	Struct Vector                                                FireGridLocation;                                  // 0x118(0xc)
};


// Size 0x18
class ShipFireDamageParamsDataAsset: public DataAsset
{
public:
	Struct ShipFireDamageParams                                  FireDamageParams;                                  // 0x28(0x18)
};


// Size 0x18
class ShipFireLightParamsDataAsset: public DataAsset
{
public:
	Struct ShipFireLightParams                                   Params;                                            // 0x28(0x14)
};


// Size 0x3c8
class ShipFirePropagationComponent: public ActorComponent
{
public:
	struct FName                                                 FeatureToggleName;                                 // 0xd8(0x8)
	class                                                        ShipSize;                                          // 0xe0(0x8)
	float                                                        CellSize;                                          // 0xe8(0x4)
	Struct IntVector                                             GridDimensions;                                    // 0xec(0xc)
	Struct Vector                                                GridOffset;                                        // 0xf8(0xc)
	Class FirePropagator*                                        Propagator;                                        // 0x108(0x8)
	Class ShipFireDamageParamsDataAsset*                         FireDamageDataAsset;                               // 0x110(0x8)
	TArray<Struct FireDamageDataAsset>                           FireCellDescs;                                     // 0x118(0x10)
	Struct Status                                                BurnStatus;                                        // 0x138(0x18)
	Class FireGridVFXManager*                                    VFXManager;                                        // 0x150(0x8)
	Struct FireGridVfxSpawnSettings                              VfxSpawnSettings;                                  // 0x158(0x58)
	Struct ShipFireLightManager                                  FireLightManager;                                  // 0x1b0(0x150)
	Struct FireGridCharringManager                               FireCharringManager;                               // 0x300(0xc8)
	TArray<Struct FireCharringManager>                           ReplicatedCellData;                                // 0x3c8(0x10)
	Struct ReplicatedFireCellCharringData                        ReplicatedCellCharringData;                        // 0x3d8(0x18)
	Class FireGridAudioManager*                                  FireAudioManager;                                  // 0x3f0(0x8)
	Struct FireCellAudioParams                                   FireAudioParams;                                   // 0x3f8(0x40)
};


}