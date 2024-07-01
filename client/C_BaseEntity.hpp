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
// Size: 0x538
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
	[[maybe_unused]] uint8_t __pad01e0[0x120]; // 0x1e0
public:
	GameTick_t m_nLastThinkTick; // 0x300	
private:
	[[maybe_unused]] uint8_t __pad0304[0x4]; // 0x304
public:
	CGameSceneNode* m_pGameSceneNode; // 0x308	
	CRenderComponent* m_pRenderComponent; // 0x310	
	CCollisionProperty* m_pCollision; // 0x318	
	// MNetworkEnable
	// MNetworkChangePointerCallback
	CModifierProperty* m_pModifierProp; // 0x320	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	int32_t m_iMaxHealth; // 0x328	
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; // 0x32c	
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; // 0x330	
	// MNetworkEnable
	bool m_bTakesDamage; // 0x331	
private:
	[[maybe_unused]] uint8_t __pad0332[0x6]; // 0x332
public:
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; // 0x338	
	// MNetworkEnable
	EntityPlatformTypes_t m_nPlatformType; // 0x340	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationFrameChanged"
	uint8_t m_ubInterpolationFrame; // 0x341	
private:
	[[maybe_unused]] uint8_t __pad0342[0x2]; // 0x342
public:
	CHandle< C_BaseEntity > m_hSceneObjectController; // 0x344	
	int32_t m_nNoInterpolationTick; // 0x348	
	int32_t m_nVisibilityNoInterpolationTick; // 0x34c	
	float m_flProxyRandomValue; // 0x350	
	int32_t m_iEFlags; // 0x354	
	uint8_t m_nWaterType; // 0x358	
	bool m_bInterpolateEvenWithNoModel; // 0x359	
	bool m_bPredictionEligible; // 0x35a	
	bool m_bApplyLayerMatchIDToModel; // 0x35b	
	CUtlStringToken m_tokLayerMatchID; // 0x35c	
	// MNetworkEnable
	// MNetworkChangeCallback "OnSubclassIDChanged"
	CUtlStringToken m_nSubclassID; // 0x360	
private:
	[[maybe_unused]] uint8_t __pad0364[0xc]; // 0x364
public:
	int32_t m_nSimulationTick; // 0x370	
	int32_t m_iCurrentThinkContext; // 0x374	
	CUtlVector< thinkfunc_t > m_aThinkFunctions; // 0x378	
	bool m_bDisabledContextThinks; // 0x390	
private:
	[[maybe_unused]] uint8_t __pad0391[0x3]; // 0x391
public:
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	float m_flAnimTime; // 0x394	
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	// MNetworkChangeCallback "OnSimulationTimeChanged"
	float m_flSimulationTime; // 0x398	
	uint8_t m_nSceneObjectOverrideFlags; // 0x39c	
	bool m_bHasSuccessfullyInterpolated; // 0x39d	
	bool m_bHasAddedVarsToInterpolation; // 0x39e	
	bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x39f	
	int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3a0	
	uint16_t m_ListEntry[11]; // 0x3a8	
private:
	[[maybe_unused]] uint8_t __pad03be[0x6]; // 0x3be
public:
	// MNetworkEnable
	GameTime_t m_flCreateTime; // 0x3c4	
	// MNetworkEnable
	float m_flSpeed; // 0x3c8	
	uint16_t m_EntClientFlags; // 0x3cc	
	// MNetworkEnable
	bool m_bClientSideRagdoll; // 0x3ce	
	// MNetworkEnable
	// MNetworkChangeCallback "OnNetVarTeamNumChanged"
	uint8_t m_iTeamNum; // 0x3cf	
	// MNetworkEnable
	uint32_t m_spawnflags; // 0x3d0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	GameTick_t m_nNextThinkTick; // 0x3d4	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnFlagsChanged"
	uint32_t m_fFlags; // 0x3d8	
	Vector m_vecAbsVelocity; // 0x3dc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkChangeCallback "OnLocalVelocityChanged"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; // 0x3e8	
private:
	[[maybe_unused]] uint8_t __pad0410[0x8]; // 0x410
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEffectEntity; // 0x418	
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle< C_BaseEntity > m_hOwnerEntity; // 0x41c	
	// MNetworkEnable
	MoveCollide_t m_MoveCollide; // 0x420	
	// MNetworkEnable
	// MNetworkChangeCallback "OnMoveTypeChanged"
	MoveType_t m_MoveType; // 0x421	
	MoveType_t m_nActualMoveType; // 0x422	
private:
	[[maybe_unused]] uint8_t __pad0423[0x1]; // 0x423
public:
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkChangeCallback "OnWaterLevelChangeNetworked"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	float m_flWaterLevel; // 0x424	
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; // 0x428	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle< C_BaseEntity > m_hGroundEntity; // 0x42c	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	int32_t m_nGroundBodyIndex; // 0x430	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "4.000000"
	// MNetworkEncodeFlags "1"
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; // 0x434	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	float m_flElasticity; // 0x438	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; // 0x43c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; // 0x440	
	// MNetworkEnable
	// MNetworkChangeCallback "OnInterpolationAmountChanged"
	bool m_bAnimatedEveryTick; // 0x444	
private:
	[[maybe_unused]] uint8_t __pad0445[0x3]; // 0x445
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnNavIgnoreChanged"
	GameTime_t m_flNavIgnoreUntilTime; // 0x448	
	uint16_t m_hThink; // 0x44c	
private:
	[[maybe_unused]] uint8_t __pad044e[0xa]; // 0x44e
public:
	uint8_t m_fBBoxVisFlags; // 0x458	
	bool m_bPredictable; // 0x459	
	bool m_bRenderWithViewModels; // 0x45a	
private:
	[[maybe_unused]] uint8_t __pad045b[0x1]; // 0x45b
public:
	CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x45c	
	int32_t m_nFirstPredictableCommand; // 0x460	
	int32_t m_nLastPredictableCommand; // 0x464	
	CHandle< C_BaseEntity > m_hOldMoveParent; // 0x468	
private:
	[[maybe_unused]] uint8_t __pad046c[0x4]; // 0x46c
public:
	CParticleProperty m_Particles; // 0x470	
	CUtlVector< float32 > m_vecPredictedScriptFloats; // 0x498	
	CUtlVector< int32 > m_vecPredictedScriptFloatIDs; // 0x4b0	
private:
	[[maybe_unused]] uint8_t __pad04c8[0x18]; // 0x4c8
public:
	int32_t m_nNextScriptVarRecordID; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e4[0xc]; // 0x4e4
public:
	QAngle m_vecAngVelocity; // 0x4f0	
	int32_t m_DataChangeEventRef; // 0x4fc	
	CUtlVector< CEntityHandle > m_dependencies; // 0x500	
	int32_t m_nCreationTick; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x9]; // 0x51c
public:
	bool m_bAnimTimeChanged; // 0x525	
	bool m_bSimulationTimeChanged; // 0x526	
private:
	[[maybe_unused]] uint8_t __pad0527[0x9]; // 0x527
public:
	CUtlString m_sUniqueHammerID; // 0x530	
	
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
	// void m_pSubclassVData; // 0x368
	// QAngle angles; // 0x7fffffff
	// Vector origin; // 0x7fffffff
	// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
	// CUtlString ownername; // 0x7fffffff
};

