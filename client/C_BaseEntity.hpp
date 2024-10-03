#pragma once

#include <cstdint>

struct CBodyComponent;
struct CNetworkTransmitComponent;
struct GameTick_t;
struct CGameSceneNode;
struct CRenderComponent;
struct CCollisionProperty;
struct GameTime_t;
struct CNetworkVelocityVector;
struct CParticleProperty;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
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
// MNetworkVarNames "Vector m_vecBaseVelocity"
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
// MNetworkVarNames "BloodType m_nBloodType"
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
	[[maybe_unused]] uint8_t __pad0200[0x120]; // 0x200
public:
	GameTick_t m_nLastThinkTick; // 0x320	
private:
	[[maybe_unused]] uint8_t __pad0324[0x4]; // 0x324
public:
	CGameSceneNode* m_pGameSceneNode; // 0x328	
	CRenderComponent* m_pRenderComponent; // 0x330	
	CCollisionProperty* m_pCollision; // 0x338	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x340	
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x344	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x348	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x349	
private:
	[[maybe_unused]] uint8_t __pad034a[0x6]; // 0x34a
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x350	
	// MNetworkEnable
	EntityPlatformTypes_t m_nPlatformType; // 0x358	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x359	
private:
	[[maybe_unused]] uint8_t __pad035a[0x2]; // 0x35a
public:
	CHandle< C_BaseEntity > m_hSceneObjectController; // 0x35c	
	int32_t m_nNoInterpolationTick; // 0x360	
	int32_t m_nVisibilityNoInterpolationTick; // 0x364	
	float m_flProxyRandomValue; // 0x368	
	int32_t m_iEFlags; // 0x36c	
	uint8_t m_nWaterType; // 0x370	
	bool m_bInterpolateEvenWithNoModel; // 0x371	
	bool m_bPredictionEligible; // 0x372	
	bool m_bApplyLayerMatchIDToModel; // 0x373	
	CUtlStringToken m_tokLayerMatchID; // 0x374	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSubclassIDChanged"
	CUtlStringToken m_nSubclassID; // 0x378	
private:
	[[maybe_unused]] uint8_t __pad037c[0xc]; // 0x37c
public:
	int32_t m_nSimulationTick; // 0x388	
	int32_t m_iCurrentThinkContext; // 0x38c	
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x390	
	bool m_bDisabledContextThinks; // 0x3a8	
private:
	[[maybe_unused]] uint8_t __pad03a9[0x3]; // 0x3a9
public:
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	float m_flAnimTime; // 0x3ac	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x3b0	
	uint8_t m_nSceneObjectOverrideFlags; // 0x3b4	
	bool m_bHasSuccessfullyInterpolated; // 0x3b5	
	bool m_bHasAddedVarsToInterpolation; // 0x3b6	
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3b7	
	int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3b8	
	uint16_t m_ListEntry[11]; // 0x3c0	
private:
	[[maybe_unused]] uint8_t __pad03d6[0x2]; // 0x3d6
public:
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x3d8	
	// MNetworkEnable
	float m_flSpeed; // 0x3dc	
	uint16_t m_EntClientFlags; // 0x3e0	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x3e2	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x3e3	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x3e4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x3e8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnFlagsChanged"
	uint32_t m_fFlags; // 0x3ec	
	Vector m_vecAbsVelocity; // 0x3f0	
private:
	[[maybe_unused]] uint8_t __pad03fc[0x4]; // 0x3fc
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x400	
private:
	[[maybe_unused]] uint8_t __pad0428[0x8]; // 0x428
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; // 0x430	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x43c	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x440	
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x444	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x445	
	MoveType_t m_nActualMoveType; // 0x446	
private:
	[[maybe_unused]] uint8_t __pad0447[0x1]; // 0x447
public:
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkChangeCallback "OnWaterLevelChangeNetworked"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	float m_flWaterLevel; // 0x448	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x44c	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x450	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	int32_t m_nGroundBodyIndex; // 0x454	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x458	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	float m_flElasticity; // 0x45c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x460	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x464	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x468	
private:
	[[maybe_unused]] uint8_t __pad0469[0x3]; // 0x469
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnNavIgnoreChanged"
	GameTime_t m_flNavIgnoreUntilTime; // 0x46c	
	uint16_t m_hThink; // 0x470	
private:
	[[maybe_unused]] uint8_t __pad0472[0xe]; // 0x472
public:
	uint8_t m_fBBoxVisFlags; // 0x480	
	bool m_bPredictable; // 0x481	
	bool m_bRenderWithViewModels; // 0x482	
private:
	[[maybe_unused]] uint8_t __pad0483[0x1]; // 0x483
public:
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x484	
	int32_t m_nFirstPredictableCommand; // 0x488	
	int32_t m_nLastPredictableCommand; // 0x48c	
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x490	
private:
	[[maybe_unused]] uint8_t __pad0494[0x4]; // 0x494
public:
	CParticleProperty m_Particles; // 0x498	
	CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x4c0	
	CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04f0[0x18]; // 0x4f0
public:
	int32_t m_nNextScriptVarRecordID; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0xc]; // 0x50c
public:
	QAngle m_vecAngVelocity; // 0x518	
	int32_t m_DataChangeEventRef; // 0x524	
	CUtlVector< CEntityHandle > m_dependencies; // 0x528	
	int32_t m_nCreationTick; // 0x540	
private:
	[[maybe_unused]] uint8_t __pad0544[0x9]; // 0x544
public:
	bool m_bAnimTimeChanged; // 0x54d	
	bool m_bSimulationTimeChanged; // 0x54e	
private:
	[[maybe_unused]] uint8_t __pad054f[0x9]; // 0x54f
public:
	CUtlString m_sUniqueHammerID; // 0x558	
	// MNetworkEnable
	BloodType m_nBloodType; // 0x560	
	
	// Static fields:
	static bool &Get_sm_bDatadescValidating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[0]->m_instance);};
	static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[1]->m_instance);};
	static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[2]->m_instance);};
	static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[3]->m_instance);};
	static LatchDirtyPermission_t &Get_s_nLatchPermissions(){return *reinterpret_cast<LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[4]->m_instance);};
	static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[5]->m_instance);};
	static CBasePlayerController* &Get_m_pPredictionPlayerController(){return *reinterpret_cast<CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[6]->m_instance);};
	static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[7]->m_instance);};
	static bool &Get_s_bAbsRecomputationEnabled(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[8]->m_instance);};
	static bool &Get_s_bComputingInterpolatedValues(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[9]->m_instance);};
	static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[10]->m_instance);};
	static CUtlVector< C_BaseEntity* > &Get_gm_UsableObjects(){return *reinterpret_cast<CUtlVector< C_BaseEntity* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->m_static_fields[11]->m_instance);};
	
	// Datamap fields:
	// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
	// void m_CScriptComponent; // 0x28
	// CUtlSymbolLarge subclass_name; // 0x7fffffff
	// void m_pSubclassVData; // 0x380
	// QAngle angles; // 0x7fffffff
	// Vector origin; // 0x7fffffff
	// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
	// CUtlString ownername; // 0x7fffffff
};

