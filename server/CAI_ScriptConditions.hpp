#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct CAI_ProxTester;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class CAI_ScriptConditions : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	CEntityIOOutput m_OnConditionsSatisfied; // 0x4c0	
	CEntityIOOutput m_OnConditionsTimeout; // 0x4e8	
	CEntityIOOutput m_NoValidActors; // 0x510	
	bool m_fDisabled; // 0x538	
	bool m_bLeaveAsleep; // 0x539	
private:
	[[maybe_unused]] uint8_t __pad053a[0x2]; // 0x53a
public:
	CHandle< CBaseEntity > m_hTarget; // 0x53c	
	float m_flRequiredDuration; // 0x540	
	NPC_STATE m_fMinState; // 0x544	
	NPC_STATE m_fMaxState; // 0x548	
	ThreeState_t m_fScriptStatus; // 0x54c	
	ThreeState_t m_fActorSeePlayer; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	CUtlSymbolLarge m_Actor; // 0x558	
	float m_flPlayerActorProximity; // 0x560	
	CAI_ProxTester m_PlayerActorProxTester; // 0x564	
	float m_flPlayerActorFOV; // 0x56c	
	bool m_bPlayerActorFOVTrueCone; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0571[0x3]; // 0x571
public:
	ThreeState_t m_fPlayerActorLOS; // 0x574	
	ThreeState_t m_fActorSeeTarget; // 0x578	
	float m_flActorTargetProximity; // 0x57c	
	CAI_ProxTester m_ActorTargetProxTester; // 0x580	
	float m_flPlayerTargetProximity; // 0x588	
	CAI_ProxTester m_PlayerTargetProxTester; // 0x58c	
	float m_flPlayerTargetFOV; // 0x594	
	bool m_bPlayerTargetFOVTrueCone; // 0x598	
private:
	[[maybe_unused]] uint8_t __pad0599[0x3]; // 0x599
public:
	ThreeState_t m_fPlayerTargetLOS; // 0x59c	
	ThreeState_t m_fPlayerBlockingActor; // 0x5a0	
	ThreeState_t m_fActorInPVS; // 0x5a4	
	float m_flMinTimeout; // 0x5a8	
	float m_flMaxTimeout; // 0x5ac	
	ThreeState_t m_fActorInVehicle; // 0x5b0	
	ThreeState_t m_fPlayerInVehicle; // 0x5b4	
	CUtlVector< CAI_ScriptConditionsElement > m_ElementList; // 0x5b8	
	
	// Datamap fields:
	// void CAI_ScriptConditionsEvaluationThink; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

