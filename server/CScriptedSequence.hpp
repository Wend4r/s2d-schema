#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x800
// Has VTable
class CScriptedSequence : public CBaseEntity
{
public:
	CUtlSymbolLarge m_iszEntry; // 0x4e0	
	CUtlSymbolLarge m_iszPreIdle; // 0x4e8	
	CUtlSymbolLarge m_iszPlay; // 0x4f0	
	CUtlSymbolLarge m_iszPostIdle; // 0x4f8	
	CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x500	
	CUtlSymbolLarge m_iszNextScript; // 0x508	
	CUtlSymbolLarge m_iszEntity; // 0x510	
	CUtlSymbolLarge m_iszSyncGroup; // 0x518	
	ScriptedMoveTo_t m_nMoveTo; // 0x520	
	MovementGait_t m_nMoveToGait; // 0x524	
private:
	[[maybe_unused]] uint8_t __pad0525[0x3]; // 0x525
public:
	ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x528	
	bool m_bIsPlayingPreIdle; // 0x52c	
	bool m_bIsPlayingEntry; // 0x52d	
	bool m_bIsPlayingAction; // 0x52e	
	bool m_bIsPlayingPostIdle; // 0x52f	
	bool m_bDontRotateOther; // 0x530	
	bool m_bIsRepeatable; // 0x531	
	bool m_bShouldLeaveCorpse; // 0x532	
	bool m_bStartOnSpawn; // 0x533	
	bool m_bDisallowInterrupts; // 0x534	
	bool m_bCanOverrideNPCState; // 0x535	
	bool m_bDontTeleportAtEnd; // 0x536	
	bool m_bHighPriority; // 0x537	
	bool m_bHideDebugComplaints; // 0x538	
	bool m_bContinueOnDeath; // 0x539	
	bool m_bLoopPreIdleSequence; // 0x53a	
	bool m_bLoopActionSequence; // 0x53b	
	bool m_bLoopPostIdleSequence; // 0x53c	
	bool m_bSynchPostIdles; // 0x53d	
	bool m_bIgnoreLookAt; // 0x53e	
	bool m_bIgnoreGravity; // 0x53f	
	bool m_bDisableNPCCollisions; // 0x540	
	bool m_bKeepAnimgraphLockedPost; // 0x541	
	bool m_bDontAddModifiers; // 0x542	
private:
	[[maybe_unused]] uint8_t __pad0543[0x1]; // 0x543
public:
	float m_flRadius; // 0x544	
	float m_flRepeat; // 0x548	
	float m_flPlayAnimFadeInTime; // 0x54c	
	float m_flMoveInterpTime; // 0x550	
	float m_flAngRate; // 0x554	
	bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad0559[0x3]; // 0x559
public:
	int32_t m_nNotReadySequenceCount; // 0x55c	
	GameTime_t m_startTime; // 0x560	
	bool m_bWaitForBeginSequence; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	int32_t m_saved_effects; // 0x568	
	int32_t m_savedFlags; // 0x56c	
	int32_t m_savedCollisionGroup; // 0x570	
	bool m_bInterruptable; // 0x574	
	bool m_sequenceStarted; // 0x575	
	bool m_bPositionRelativeToOtherEntity; // 0x576	
private:
	[[maybe_unused]] uint8_t __pad0577[0x1]; // 0x577
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x578	
	CHandle< CScriptedSequence > m_hNextCine; // 0x57c	
	bool m_bThinking; // 0x580	
	bool m_bInitiatedSelfDelete; // 0x581	
	bool m_bIsTeleportingDueToMoveTo; // 0x582	
	bool m_bAllowCustomInterruptConditions; // 0x583	
	CHandle< CBaseAnimGraph > m_hForcedTarget; // 0x584	
	bool m_bDontCancelOtherSequences; // 0x588	
	bool m_bForceSynch; // 0x589	
	bool m_bPreventUpdateYawOnFinish; // 0x58a	
	bool m_bEnsureOnNavmeshOnFinish; // 0x58b	
	ScriptedOnDeath_t m_onDeathBehavior; // 0x58c	
	ScriptedConflictResponse_t m_ConflictResponse; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0594[0x4]; // 0x594
public:
	CEntityIOOutput m_OnBeginSequence; // 0x598	
	CEntityIOOutput m_OnActionStartOrLoop; // 0x5c0	
	CEntityIOOutput m_OnEndSequence; // 0x5e8	
	CEntityIOOutput m_OnPostIdleEndSequence; // 0x610	
	CEntityIOOutput m_OnCancelSequence; // 0x638	
	CEntityIOOutput m_OnCancelFailedSequence; // 0x660	
	CEntityIOOutput m_OnScriptEvent[8]; // 0x688	
private:
	[[maybe_unused]] uint8_t __pad07c8[0x8]; // 0x7c8
public:
	CTransform m_matOtherToMain; // 0x7d0	
	CHandle< CBaseEntity > m_hInteractionMainEntity; // 0x7f0	
	int32_t m_iPlayerDeathBehavior; // 0x7f4	
	
	// Datamap fields:
	// void CScriptedSequenceScriptThink; // 0x0
	// void InputMoveToPosition; // 0x0
	// void InputBeginSequence; // 0x0
	// void InputCancelSequence; // 0x0
	// CUtlSymbolLarge InputSetActionSequence; // 0x0
	// CUtlSymbolLarge InputForceTarget; // 0x0
	// void InputScriptPlayerDeath; // 0x0
};

