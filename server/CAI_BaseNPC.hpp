#pragma once

#include <cstdint>

struct GameTime_t;
struct CAI_ScheduleBits;
struct CAI_BehaviorHost;
struct CAI_EnemyServices;
struct CRandStopwatch;
struct CSimpleSimTimer;
struct CUnreachableTargetList;
struct CAI_AnimGraphServices;
struct CAI_Scheduler;
struct CAI_Navigator;
struct CAI_Motor;
struct CTakeDamageResult;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1010
// Has VTable
// 
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "NPC_STATE m_NPCState"
// MNetworkVarNames "bool m_bFadeCorpse"
// MNetworkVarNames "bool m_bImportantRagdoll"
class CAI_BaseNPC : public CBaseCombatCharacter
{
private:
	[[maybe_unused]] uint8_t __pad0a78[0x10]; // 0xa78
public:
	bool m_bCheckContacts; // 0xa88	
	bool m_bIsUsingSmallHull; // 0xa89	
private:
	[[maybe_unused]] uint8_t __pad0a8a[0x2]; // 0xa8a
public:
	Vector m_vecLastPosition; // 0xa8c	
	float m_flLastPositionTolerance; // 0xa98	
	CHandle< CAI_BaseNPC > m_hSynchronizedPrimaryNPC; // 0xa9c	
	CUtlVector< CHandle< CAI_BaseNPC > > m_vecSynchronizedSecondaryNPCs; // 0xaa0	
	// MNetworkEnable
	NPC_STATE m_NPCState; // 0xab8	
	NPC_STATE m_IdealNPCState; // 0xabc	
	GameTime_t m_flLastStateChangeTime; // 0xac0	
private:
	[[maybe_unused]] uint8_t __pad0ac4[0xc]; // 0xac4
public:
	CAI_ScheduleBits m_Conditions; // 0xad0	
	CAI_ScheduleBits m_NonGatherConditions; // 0xaf4	
	CAI_ScheduleBits m_CustomInterruptConditions; // 0xb18	
	bool m_bForceConditionsGather; // 0xb3c	
	bool m_bConditionsGathered; // 0xb3d	
	bool m_bDoPostRestoreRefindPath; // 0xb3e	
private:
	[[maybe_unused]] uint8_t __pad0b3f[0x1]; // 0xb3f
public:
	CAI_BehaviorHost* m_pBehaviorHost; // 0xb40	
private:
	[[maybe_unused]] uint8_t __pad0b48[0x8]; // 0xb48
public:
	CAI_EnemyServices* m_pEnemyServices; // 0xb50	
	CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xb58	
	CSimpleSimTimer m_FailChooseEnemyTimer; // 0xb6c	
	GameTime_t m_flAcceptableTimeSeenEnemy; // 0xb74	
	bool m_bSkippedChooseEnemy; // 0xb78	
	bool m_bIgnoreUnseenEnemies; // 0xb79	
private:
	[[maybe_unused]] uint8_t __pad0b7a[0x2]; // 0xb7a
public:
	CHandle< CBaseFilter > m_hEnemyFilter; // 0xb7c	
	CUtlSymbolLarge m_iszEnemyFilterName; // 0xb80	
	CHandle< CBaseEntity > m_hTargetEnt; // 0xb88	
	bool m_bClearTargetOnScheduleEnd; // 0xb8c	
private:
	[[maybe_unused]] uint8_t __pad0b8d[0x3]; // 0xb8d
public:
	GameTime_t m_flSoundWaitTime; // 0xb90	
	int32_t m_nSoundPriority; // 0xb94	
	bool m_bSuppressFootsteps; // 0xb98	
private:
	[[maybe_unused]] uint8_t __pad0b99[0x3]; // 0xb99
public:
	int32_t m_afCapability; // 0xb9c	
	// MNetworkDisable
	float m_flGroundSpeed; // 0xba0	
	GameTime_t m_flMoveWaitFinished; // 0xba4	
	CHandle< CBaseEntity > m_hOpeningDoor; // 0xba8	
	bool m_bUseAltNpcAvoid; // 0xbac	
private:
	[[maybe_unused]] uint8_t __pad0bad[0x3]; // 0xbad
public:
	CUnreachableTargetList m_UnreachableTargets; // 0xbb0	
	CHandle< CBaseEntity > m_hPathObstructor; // 0xbd0	
	float m_flJumpMaxRise; // 0xbd4	
	float m_flJumpMaxDrop; // 0xbd8	
	float m_flJumpMaxDist; // 0xbdc	
	float m_flJumpMinDist; // 0xbe0	
private:
	[[maybe_unused]] uint8_t __pad0be4[0x4]; // 0xbe4
public:
	CAI_AnimGraphServices* m_pAnimGraphServices; // 0xbe8	
	bool m_bAnimGraphIsAnimatingDeath; // 0xbf0	
	bool m_bDeferredNavigation; // 0xbf1	
private:
	[[maybe_unused]] uint8_t __pad0bf2[0x6]; // 0xbf2
public:
	CAI_Scheduler m_Scheduler; // 0xbf8	
	CAI_Navigator* m_pNavigatorNavmesh; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x18]; // 0xca8
public:
	CAI_Motor* m_pMotor; // 0xcc0	
	GameTime_t m_flTimeLastMovement; // 0xcc8	
	GameTime_t m_flTimeLastFootstep; // 0xccc	
	CSimpleSimTimer m_CheckOnGroundTimer; // 0xcd0	
	CUtlSymbolLarge m_strNavRestrictionVolume; // 0xcd8	
	Vector m_vDefaultEyeOffset; // 0xce0	
	int32_t m_afMemory; // 0xcec	
	GameTime_t m_flLastAttackTime; // 0xcf0	
	GameTime_t m_flLastTookDamageTime; // 0xcf4	
	GameTime_t m_flLastTookDamageFromPlayerTime; // 0xcf8	
	Vector m_vecLastTookDamageAttackVector; // 0xcfc	
private:
	[[maybe_unused]] uint8_t __pad0d08[0x8]; // 0xd08
public:
	CUtlSymbolLarge m_iszSquadName; // 0xd10	
	CUtlVector< SquadSlotNPCEntry_t > m_vecMySquadSlots; // 0xd18	
	int32_t m_nPrevHealthDuringModifyDamage; // 0xd30	
	// MNetworkEnable
	bool m_bFadeCorpse; // 0xd34	
	// MNetworkEnable
	bool m_bImportantRagdoll; // 0xd35	
private:
	[[maybe_unused]] uint8_t __pad0d36[0x2]; // 0xd36
public:
	CTakeDamageResult m_deathBlowResult; // 0xd38	
	bool m_bDidDeathCleanup; // 0xd50	
	bool m_bReceivedEnemyDeadNotification; // 0xd51	
private:
	[[maybe_unused]] uint8_t __pad0d52[0x2]; // 0xd52
public:
	GameTime_t m_flWaitFinished; // 0xd54	
	bool m_fNoDamageDecal; // 0xd58	
private:
	[[maybe_unused]] uint8_t __pad0d59[0x7]; // 0xd59
public:
	CUtlVector< CHandle< CBaseEntity > >* m_pVecAttachments; // 0xd60	
	CEntityIOOutput m_OnDamaged; // 0xd68	
	CEntityIOOutput m_OnDeath; // 0xd90	
	CEntityIOOutput m_OnQuarterHealth; // 0xdb8	
	CEntityIOOutput m_OnHalfHealth; // 0xde0	
	CEntityIOOutput m_OnThreeQuarterHealth; // 0xe08	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnFoundEnemy; // 0xe30	
	CEntityIOOutput m_OnLostEnemy; // 0xe58	
	CEntityIOOutput m_OnLostPlayer; // 0xe80	
	CEntityIOOutput m_OnDamagedByPlayer; // 0xea8	
	CEntityIOOutput m_OnDamagedByPlayerSquad; // 0xed0	
	CEntityIOOutput m_OnPlayerUse; // 0xef8	
	CEntityIOOutput m_OnUse; // 0xf20	
	CEntityIOOutput m_OnStartTouchMaterial; // 0xf48	
	CEntityIOOutput m_OnEndTouchMaterial; // 0xf70	
	CEntityIOOutput m_OnLostEnemyLOS; // 0xf98	
	CEntityIOOutput m_OnLostPlayerLOS; // 0xfc0	
	uint64_t m_nAITraceMask; // 0xfe8	
	float m_flThinkTime; // 0xff0	
private:
	[[maybe_unused]] uint8_t __pad0ff4[0x4]; // 0xff4
public:
	CUtlSymbolLarge m_iTaskRunDuringThink; // 0xff8	
	CUtlSymbolLarge m_iScheduleRunDuringThink; // 0x1000	
	int32_t m_nDebugCurIndex; // 0x1008	
	struct 
	{
		uint8_t m_bInvokingBehaviorIsValidEnemy: 1; 		
		uint8_t m_bInvokingBehaviorBestEnemy: 1; 		
		uint8_t m_bInvokingBehaviorShouldIgnoreSound: 1; 		
		uint8_t m_bInvokingBehaviorIsInterruptable: 1; 		
		uint8_t m_bInvokingBehaviorOnTakeDamage_React_Alive: 1; 		
		uint8_t m_bInvokingBehaviorQueryHearSound: 1; 		
		uint8_t m_bInvokingBehaviorOnCalcBaseMove: 1; 		
		uint8_t m_bInvokingBehaviorShouldAlwaysGatherEnvironmentalConditions: 1; 		
		uint8_t m_bInvokingBehaviorAimGun: 1; 		
		uint8_t __pad0: 1;
	}; // 10 bits
	
	// Static fields:
	static CUtlSymbolLarge &Get_sm_iszPlayerSquad(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->m_static_fields[0]->m_instance);};
	static int32_t &Get_sm_nDebugBits(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->m_static_fields[1]->m_instance);};
	static int32_t &Get_sm_nDebugPauseIndex(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->m_static_fields[2]->m_instance);};
	
	// Datamap fields:
	// CAI_Senses m_pSenses; // 0xac8
	// void m_pSquad; // 0xd08
	// CAI_Pathfinder m_pPathfinderNavmesh; // 0xca8
	// CUtlSymbolLarge InputSetEnemyFilter; // 0x0
	// int32_t InputOverrideHealth; // 0x0
	// int32_t InputSetHealth; // 0x0
	// CUtlSymbolLarge InputSetSquad; // 0x0
	// CUtlSymbolLarge InputForgetEntity; // 0x0
	// void InputBreak; // 0x0
	// void InputGagEnable; // 0x0
	// void InputGagDisable; // 0x0
	// void InputInsideTransition; // 0x0
	// void InputOutsideTransition; // 0x0
	// CUtlSymbolLarge InputUpdateEnemyMemory; // 0x0
	// CUtlSymbolLarge InputSetNavRestrictionVolume; // 0x0
	// void CAI_BaseNPCCallNPCThink; // 0x0
	// void CAI_BaseNPCCallNPCPerTickThink; // 0x0
};

