#pragma once

#include <cstdint>

struct GameTime_t;
struct CAI_ScheduleBits;
struct CAI_BehaviorHost;
struct CAI_EnemyServices;
struct CRandStopwatch;
struct CSimpleSimTimer;
struct CUnreachableTargetList;
struct CAI_FacingServices;
struct CAI_AnimGraphServices;
struct CAI_Scheduler;
struct CAI_Navigator;
struct CAI_Motor;
struct CTakeDamageResult;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1320
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
	[[maybe_unused]] uint8_t __pad0be8[0x10]; // 0xbe8
public:
	bool m_bCheckContacts; // 0xbf8	
	bool m_bIsUsingSmallHull; // 0xbf9	
	bool m_bForceDynamicHull; // 0xbfa	
private:
	[[maybe_unused]] uint8_t __pad0bfb[0x1]; // 0xbfb
public:
	Vector m_vecLastPosition; // 0xbfc	
	float m_flLastPositionTolerance; // 0xc08	
	CHandle< CAI_BaseNPC > m_hSynchronizedPrimaryNPC; // 0xc0c	
	CUtlVector< CHandle< CAI_BaseNPC > > m_vecSynchronizedSecondaryNPCs; // 0xc10	
	// MNetworkEnable
	NPC_STATE m_NPCState; // 0xc28	
	NPC_STATE m_nPreModifierNPCState; // 0xc2c	
	NPC_STATE m_IdealNPCState; // 0xc30	
	GameTime_t m_flLastStateChangeTime; // 0xc34	
private:
	[[maybe_unused]] uint8_t __pad0c38[0x8]; // 0xc38
public:
	CAI_ScheduleBits m_Conditions; // 0xc40	
	CAI_ScheduleBits m_NonGatherConditions; // 0xc64	
	CAI_ScheduleBits m_CustomInterruptConditions; // 0xc88	
	bool m_bForceConditionsGather; // 0xcac	
	bool m_bConditionsGathered; // 0xcad	
	bool m_bDoPostRestoreRefindPath; // 0xcae	
private:
	[[maybe_unused]] uint8_t __pad0caf[0x1]; // 0xcaf
public:
	CAI_BehaviorHost* m_pBehaviorHost; // 0xcb0	
private:
	[[maybe_unused]] uint8_t __pad0cb8[0x8]; // 0xcb8
public:
	GameTime_t m_flBlinkTime; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc4[0x4]; // 0xcc4
public:
	CAI_EnemyServices* m_pEnemyServices; // 0xcc8	
	CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xcd0	
	CSimpleSimTimer m_FailChooseEnemyTimer; // 0xce4	
	GameTime_t m_flAcceptableTimeSeenEnemy; // 0xcec	
	bool m_bSkippedChooseEnemy; // 0xcf0	
	bool m_bIgnoreUnseenEnemies; // 0xcf1	
private:
	[[maybe_unused]] uint8_t __pad0cf2[0x2]; // 0xcf2
public:
	CHandle< CBaseFilter > m_hEnemyFilter; // 0xcf4	
	CUtlSymbolLarge m_iszEnemyFilterName; // 0xcf8	
	CHandle< CBaseEntity > m_hTargetEnt; // 0xd00	
	bool m_bClearTargetOnScheduleEnd; // 0xd04	
private:
	[[maybe_unused]] uint8_t __pad0d05[0x3]; // 0xd05
public:
	GameTime_t m_flSoundWaitTime; // 0xd08	
	int32_t m_nSoundPriority; // 0xd0c	
	bool m_bSuppressFootsteps; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d11[0x3]; // 0xd11
public:
	int32_t m_afCapability; // 0xd14	
private:
	[[maybe_unused]] uint8_t __pad0d18[0x170]; // 0xd18
public:
	float m_flGroundSpeed; // 0xe88	
	GameTime_t m_flMoveWaitFinished; // 0xe8c	
	CHandle< CBaseEntity > m_hOpeningDoor; // 0xe90	
private:
	[[maybe_unused]] uint8_t __pad0e94[0x4]; // 0xe94
public:
	CUnreachableTargetList m_UnreachableTargets; // 0xe98	
	CHandle< CBaseEntity > m_hPathObstructor; // 0xeb8	
	float m_flJumpMaxRise; // 0xebc	
	float m_flJumpMaxDrop; // 0xec0	
	float m_flJumpMaxDist; // 0xec4	
	float m_flJumpMinDist; // 0xec8	
private:
	[[maybe_unused]] uint8_t __pad0ecc[0x4]; // 0xecc
public:
	CAI_FacingServices* m_pFacingServices; // 0xed0	
	CAI_AnimGraphServices* m_pAnimGraphServices; // 0xed8	
	bool m_bAnimGraphIsAnimatingDeath; // 0xee0	
	bool m_bDeferredNavigation; // 0xee1	
private:
	[[maybe_unused]] uint8_t __pad0ee2[0x6]; // 0xee2
public:
	CAI_Scheduler m_Scheduler; // 0xee8	
	CAI_Navigator* m_pNavigatorNavmesh; // 0xf90	
private:
	[[maybe_unused]] uint8_t __pad0f98[0x18]; // 0xf98
public:
	CAI_Motor* m_pMotor; // 0xfb0	
	GameTime_t m_flTimeLastMovement; // 0xfb8	
	GameTime_t m_flTimeLastFootstep; // 0xfbc	
	CSimpleSimTimer m_CheckOnGroundTimer; // 0xfc0	
	CUtlSymbolLarge m_strNavRestrictionVolume; // 0xfc8	
	Vector m_vDefaultEyeOffset; // 0xfd0	
	int32_t m_afMemory; // 0xfdc	
	GameTime_t m_flLastAttackTime; // 0xfe0	
	GameTime_t m_flLastTookDamageTime; // 0xfe4	
	GameTime_t m_flLastTookDamageFromPlayerTime; // 0xfe8	
	Vector m_vecLastTookDamageAttackVector; // 0xfec	
	CUtlSymbolLarge m_iszSquadName; // 0xff8	
	CUtlVector< SquadSlotNPCEntry_t > m_vecMySquadSlots; // 0x1000	
private:
	[[maybe_unused]] uint8_t __pad1018[0x8]; // 0x1018
public:
	int32_t m_nPrevHealthDuringModifyDamage; // 0x1020	
private:
	[[maybe_unused]] uint8_t __pad1024[0x4]; // 0x1024
public:
	// MNetworkEnable
	bool m_bFadeCorpse; // 0x1028	
	// MNetworkEnable
	bool m_bImportantRagdoll; // 0x1029	
private:
	[[maybe_unused]] uint8_t __pad102a[0x6]; // 0x102a
public:
	CTakeDamageResult m_deathBlowResult; // 0x1030	
	bool m_bDidDeathCleanup; // 0x1050	
	bool m_bReceivedEnemyDeadNotification; // 0x1051	
private:
	[[maybe_unused]] uint8_t __pad1052[0x2]; // 0x1052
public:
	GameTime_t m_flWaitFinished; // 0x1054	
	bool m_fNoDamageDecal; // 0x1058	
private:
	[[maybe_unused]] uint8_t __pad1059[0x7]; // 0x1059
public:
	CUtlVector< CHandle< CBaseEntity > >* m_pVecAttachments; // 0x1060	
	CEntityIOOutput m_OnDamaged; // 0x1068	
	CEntityIOOutput m_OnDeath; // 0x1090	
	CEntityIOOutput m_OnQuarterHealth; // 0x10b8	
	CEntityIOOutput m_OnHalfHealth; // 0x10e0	
	CEntityIOOutput m_OnThreeQuarterHealth; // 0x1108	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnFoundEnemy; // 0x1130	
	CEntityIOOutput m_OnLostEnemy; // 0x1158	
	CEntityIOOutput m_OnLostPlayer; // 0x1180	
	CEntityIOOutput m_OnDamagedByPlayer; // 0x11a8	
	CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x11d0	
	CEntityIOOutput m_OnPlayerUse; // 0x11f8	
	CEntityIOOutput m_OnUse; // 0x1220	
	CEntityIOOutput m_OnStartTouchMaterial; // 0x1248	
	CEntityIOOutput m_OnEndTouchMaterial; // 0x1270	
	CEntityIOOutput m_OnLostEnemyLOS; // 0x1298	
	CEntityIOOutput m_OnLostPlayerLOS; // 0x12c0	
	uint64_t m_nAITraceMask; // 0x12e8	
	bool m_bDynamicAILOD; // 0x12f0	
private:
	[[maybe_unused]] uint8_t __pad12f1[0x3]; // 0x12f1
public:
	AILOD_t m_aiLOD; // 0x12f4	
	float m_flThinkTime; // 0x12f8	
private:
	[[maybe_unused]] uint8_t __pad12fc[0x1c]; // 0x12fc
public:
	int32_t m_nDebugCurIndex; // 0x1318	
	
	// Datamap fields:
	// CAI_Senses m_pSenses; // 0xc38
	// void m_pSquad; // 0x1018
	// void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
	// void m_vecTaskThinkTimes; // 0x1300
	// CAI_Pathfinder m_pPathfinderNavmesh; // 0xf98
	// void m_hDamagedFX; // 0x1024
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
	// void CAI_BaseNPCBlinkThink; // 0x0
};

