#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x7d0
// Has VTable
class CScriptedSequence : public CBaseEntity
{
public:
	CUtlSymbolLarge m_iszEntry; // 0x4b8	
	CUtlSymbolLarge m_iszPreIdle; // 0x4c0	
	CUtlSymbolLarge m_iszPlay; // 0x4c8	
	CUtlSymbolLarge m_iszPostIdle; // 0x4d0	
	CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4d8	
	CUtlSymbolLarge m_iszNextScript; // 0x4e0	
	CUtlSymbolLarge m_iszEntity; // 0x4e8	
	CUtlSymbolLarge m_iszSyncGroup; // 0x4f0	
	ScriptedMoveTo_t m_nMoveTo; // 0x4f8	
	MovementGait_t m_nMoveToGait; // 0x4fc	
	bool m_bIsPlayingPreIdle; // 0x4fd	
	bool m_bIsPlayingEntry; // 0x4fe	
	bool m_bIsPlayingAction; // 0x4ff	
	bool m_bIsPlayingPostIdle; // 0x500	
	bool m_bDontRotateOther; // 0x501	
	bool m_bIsRepeatable; // 0x502	
	bool m_bShouldLeaveCorpse; // 0x503	
	bool m_bStartOnSpawn; // 0x504	
	bool m_bDisallowInterrupts; // 0x505	
	bool m_bCanOverrideNPCState; // 0x506	
	bool m_bDontTeleportAtEnd; // 0x507	
	bool m_bHighPriority; // 0x508	
	bool m_bHideDebugComplaints; // 0x509	
	bool m_bContinueOnDeath; // 0x50a	
	bool m_bLoopPreIdleSequence; // 0x50b	
	bool m_bLoopActionSequence; // 0x50c	
	bool m_bLoopPostIdleSequence; // 0x50d	
	bool m_bSynchPostIdles; // 0x50e	
	bool m_bIgnoreLookAt; // 0x50f	
	bool m_bIgnoreGravity; // 0x510	
	bool m_bDisableNPCCollisions; // 0x511	
	bool m_bKeepAnimgraphLockedPost; // 0x512	
	bool m_bDontAddModifiers; // 0x513	
	float m_flRadius; // 0x514	
	float m_flRepeat; // 0x518	
	float m_flPlayAnimFadeInTime; // 0x51c	
	float m_flMoveInterpTime; // 0x520	
	float m_flAngRate; // 0x524	
	bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x528	
private:
	[[maybe_unused]] uint8_t __pad0529[0x3]; // 0x529
public:
	int32_t m_nNotReadySequenceCount; // 0x52c	
	GameTime_t m_startTime; // 0x530	
	bool m_bWaitForBeginSequence; // 0x534	
private:
	[[maybe_unused]] uint8_t __pad0535[0x3]; // 0x535
public:
	int32_t m_saved_effects; // 0x538	
	int32_t m_savedFlags; // 0x53c	
	int32_t m_savedCollisionGroup; // 0x540	
	bool m_bInterruptable; // 0x544	
	bool m_sequenceStarted; // 0x545	
	bool m_bPositionRelativeToOtherEntity; // 0x546	
private:
	[[maybe_unused]] uint8_t __pad0547[0x1]; // 0x547
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x548	
	CHandle< CScriptedSequence > m_hNextCine; // 0x54c	
	bool m_bThinking; // 0x550	
	bool m_bInitiatedSelfDelete; // 0x551	
	bool m_bIsTeleportingDueToMoveTo; // 0x552	
	bool m_bAllowCustomInterruptConditions; // 0x553	
	CHandle< CBaseAnimGraph > m_hForcedTarget; // 0x554	
	bool m_bDontCancelOtherSequences; // 0x558	
	bool m_bForceSynch; // 0x559	
	bool m_bPreventUpdateYawOnFinish; // 0x55a	
	bool m_bEnsureOnNavmeshOnFinish; // 0x55b	
	ScriptedOnDeath_t m_onDeathBehavior; // 0x55c	
	ScriptedConflictResponse_t m_ConflictResponse; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0564[0x4]; // 0x564
public:
	CEntityIOOutput m_OnBeginSequence; // 0x568	
	CEntityIOOutput m_OnActionStartOrLoop; // 0x590	
	CEntityIOOutput m_OnEndSequence; // 0x5b8	
	CEntityIOOutput m_OnPostIdleEndSequence; // 0x5e0	
	CEntityIOOutput m_OnCancelSequence; // 0x608	
	CEntityIOOutput m_OnCancelFailedSequence; // 0x630	
	CEntityIOOutput m_OnScriptEvent[8]; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad0798[0x8]; // 0x798
public:
	CTransform m_matOtherToMain; // 0x7a0	
	CHandle< CBaseEntity > m_hInteractionMainEntity; // 0x7c0	
	int32_t m_iPlayerDeathBehavior; // 0x7c4	
	
	// Datamap fields:
	// void CScriptedSequenceScriptThink; // 0x0
	// void InputMoveToPosition; // 0x0
	// void InputBeginSequence; // 0x0
	// void InputCancelSequence; // 0x0
	// CUtlSymbolLarge InputSetActionSequence; // 0x0
	// void InputScriptPlayerDeath; // 0x0
};

