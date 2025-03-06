#pragma once

#include <cstdint>

struct CBodyComponent;
struct CNetworkTransmitComponent;
struct GameTick_t;
struct CGameSceneNode;
struct CRenderComponent;
struct CCollisionProperty;
struct CModifierProperty;
struct GameTime_t;
struct CNetworkVelocityVector;
struct CParticleProperty;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x510
// Has VTable
// 
// MNetworkExcludeByName "m_bClientSideRagdoll"
// MNetworkExcludeByName "m_iMaxHealth"
// MNetworkExcludeByUserGroup "Player"
// MNetworkExcludeByUserGroup "Water"
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkExcludeByName "m_spawnflags"
// MNetworkExcludeByName "m_bTakesDamage"
// MNetworkExcludeByName "m_nTakeDamageFlags"
// MNetworkExcludeByName "m_vecAbsVelocity"
// MNetworkExcludeByName "m_flSpeed"
// MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
// MNetworkVarNames "CModifierProperty * m_pModifierProp"
// MNetworkVarNames "int32 m_iMaxHealth"
// MNetworkVarNames "int32 m_iHealth"
// MNetworkVarNames "uint8 m_lifeState"
// MNetworkVarNames "bool m_bTakesDamage"
// MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
// MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
// MNetworkVarNames "uint8 m_ubInterpolationFrame"
// MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
// MNetworkVarNames "float32 m_flAnimTime"
// MNetworkVarNames "float32 m_flSimulationTime"
// MNetworkVarNames "GameTime_t m_flCreateTime"
// MNetworkVarNames "float m_flSpeed"
// MNetworkVarNames "bool m_bClientSideRagdoll"
// MNetworkVarNames "uint8 m_iTeamNum"
// MNetworkVarNames "uint32 m_spawnflags"
// MNetworkVarNames "GameTick_t m_nNextThinkTick"
// MNetworkVarNames "uint32 m_fFlags"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
// MNetworkVarNames "MoveCollide_t m_MoveCollide"
// MNetworkVarNames "MoveType_t m_MoveType"
// MNetworkVarNames "float32 m_flWaterLevel"
// MNetworkVarNames "uint32 m_fEffects"
// MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
// MNetworkVarNames "int m_nGroundBodyIndex"
// MNetworkVarNames "float32 m_flFriction"
// MNetworkVarNames "float32 m_flElasticity"
// MNetworkVarNames "float32 m_flGravityScale"
// MNetworkVarNames "float32 m_flTimeScale"
// MNetworkVarNames "bool m_bAnimatedEveryTick"
// MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
class C_BaseEntity : public CEntityInstance
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	CBodyComponent* m_CBodyComponent; // 0x38	
	CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0208[0x120]; // 0x208
public:
	GameTick_t m_nLastThinkTick; // 0x328	
private:
	[[maybe_unused]] uint8_t __pad032c[0x4]; // 0x32c
public:
	CGameSceneNode* m_pGameSceneNode; // 0x330	
	CRenderComponent* m_pRenderComponent; // 0x338	
	CCollisionProperty* m_pCollision; // 0x340	
	// MNetworkEnable
	// MNetworkChangePointerCallback
	CModifierProperty* m_pModifierProp; // 0x348	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x350	
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x354	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x358	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x359	
private:
	[[maybe_unused]] uint8_t __pad035a[0x6]; // 0x35a
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x360	
	// MNetworkEnable
	EntityPlatformTypes_t m_nPlatformType; // 0x368	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x369	
private:
	[[maybe_unused]] uint8_t __pad036a[0x2]; // 0x36a
public:
	CHandle< C_BaseEntity > m_hSceneObjectController; // 0x36c	
	int32_t m_nNoInterpolationTick; // 0x370	
	int32_t m_nVisibilityNoInterpolationTick; // 0x374	
	float m_flProxyRandomValue; // 0x378	
	int32_t m_iEFlags; // 0x37c	
	uint8_t m_nWaterType; // 0x380	
	bool m_bInterpolateEvenWithNoModel; // 0x381	
	bool m_bPredictionEligible; // 0x382	
	bool m_bApplyLayerMatchIDToModel; // 0x383	
	CUtlStringToken m_tokLayerMatchID; // 0x384	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSubclassIDChanged"
	CUtlStringToken m_nSubclassID; // 0x388	
private:
	[[maybe_unused]] uint8_t __pad038c[0xc]; // 0x38c
public:
	int32_t m_nSimulationTick; // 0x398	
	int32_t m_iCurrentThinkContext; // 0x39c	
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x3a0	
	bool m_bDisabledContextThinks; // 0x3b8	
private:
	[[maybe_unused]] uint8_t __pad03b9[0x3]; // 0x3b9
public:
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	float m_flAnimTime; // 0x3bc	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x3c0	
	uint8_t m_nSceneObjectOverrideFlags; // 0x3c4	
	bool m_bHasSuccessfullyInterpolated; // 0x3c5	
	bool m_bHasAddedVarsToInterpolation; // 0x3c6	
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3c7	
	int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3c8	
	uint16_t m_ListEntry[11]; // 0x3d0	
private:
	[[maybe_unused]] uint8_t __pad03e6[0x2]; // 0x3e6
public:
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x3e8	
	// MNetworkEnable
	float m_flSpeed; // 0x3ec	
	uint16_t m_EntClientFlags; // 0x3f0	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x3f2	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x3f3	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x3f4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x3f8	
private:
	[[maybe_unused]] uint8_t __pad03fc[0x4]; // 0x3fc
public:
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnFlagsChanged"
	uint32_t m_fFlags; // 0x400	
	Vector m_vecAbsVelocity; // 0x404	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x410	
private:
	[[maybe_unused]] uint8_t __pad0438[0x8]; // 0x438
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x440	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x444	
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x448	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x449	
	MoveType_t m_nActualMoveType; // 0x44a	
private:
	[[maybe_unused]] uint8_t __pad044b[0x1]; // 0x44b
public:
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkChangeCallback "OnWaterLevelChangeNetworked"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	float m_flWaterLevel; // 0x44c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x450	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x454	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	int32_t m_nGroundBodyIndex; // 0x458	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x45c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	float m_flElasticity; // 0x460	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x464	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x468	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x46c	
private:
	[[maybe_unused]] uint8_t __pad046d[0x3]; // 0x46d
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnNavIgnoreChanged"
	GameTime_t m_flNavIgnoreUntilTime; // 0x470	
	uint16_t m_hThink; // 0x474	
private:
	[[maybe_unused]] uint8_t __pad0476[0xa]; // 0x476
public:
	uint8_t m_fBBoxVisFlags; // 0x480	
	bool m_bPredictable; // 0x481	
	bool m_bRenderWithViewModels; // 0x482	
private:
	[[maybe_unused]] uint8_t __pad0483[0x1]; // 0x483
public:
	CPlayerSlot m_nPlayerPredictionSlot; // 0x484	
	int32_t m_nFirstPredictableCommand; // 0x488	
	int32_t m_nLastPredictableCommand; // 0x48c	
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x490	
private:
	[[maybe_unused]] uint8_t __pad0494[0x4]; // 0x494
public:
	CParticleProperty m_Particles; // 0x498	
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	QAngle m_vecAngVelocity; // 0x4c8	
	int32_t m_DataChangeEventRef; // 0x4d4	
	CUtlVector< CEntityHandle > m_dependencies; // 0x4d8	
	int32_t m_nCreationTick; // 0x4f0	
private:
	[[maybe_unused]] uint8_t __pad04f4[0x9]; // 0x4f4
public:
	bool m_bAnimTimeChanged; // 0x4fd	
	bool m_bSimulationTimeChanged; // 0x4fe	
private:
	[[maybe_unused]] uint8_t __pad04ff[0x9]; // 0x4ff
public:
	CUtlString m_sUniqueHammerID; // 0x508	
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// void m_CScriptComponent; // 0x30
	// CUtlSymbolLarge subclass_name; // 0x7fffffff
	// void m_pSubclassVData; // 0x390
	// QAngle angles; // 0x7fffffff
	// Vector origin; // 0x7fffffff
	// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
	// CUtlString ownername; // 0x7fffffff
};

