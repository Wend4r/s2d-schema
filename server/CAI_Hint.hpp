#pragma once

#include <cstdint>

struct HintNodeData;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CAI_Hint : public CServerOnlyEntity
{
public:
	HintNodeData m_NodeData; // 0x4b8	
	CHandle< CBaseEntity > m_hHintOwner; // 0x4f8	
	GameTime_t m_flNextUseTime; // 0x4fc	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStartedUsing; // 0x500	
	CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnNPCStoppedUsing; // 0x528	
	float m_nodeFOV; // 0x550	
	bool m_bNodeFOVCheckBehind; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0555[0x3]; // 0x555
public:
	Vector m_vecForward; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad0564[0x4]; // 0x564
public:
	CUtlSymbolLarge m_iszAnimgraphEntryAction; // 0x568	
	CUtlSymbolLarge m_iszAnimgraphExitAction; // 0x570	
	CUtlSymbolLarge m_iszAnimgraphEntryCmd; // 0x578	
	CUtlSymbolLarge m_iszAnimgraphExitCmd; // 0x580	
	CUtlSymbolLarge m_iszNavlinkTargetName; // 0x588	
	bool m_bRemoveOnUnreserved; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0591[0x3]; // 0x591
public:
	CHandle< CBaseEntity > m_hAssociatedEntity; // 0x594	
	float m_flInteractionDistance; // 0x598	
	float m_flCooldown; // 0x59c	
	
	// Datamap fields:
	// void CAI_HintEnableThink; // 0x0
	// void InputEnableHint; // 0x0
	// void InputDisableHint; // 0x0
	// void InputToggleHint; // 0x0
};

