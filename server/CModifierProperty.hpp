#pragma once

#include <cstdint>

struct CNetworkVarChainer;
struct ModifierPropRuntimeHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_vecProviders"
// MNetworkVarNames "uint32 m_nDisabledGroups"
// MNetworkVarNames "uint32 m_bvEnabledStateMask"
// MNetworkVarNames "uint32 m_bvDisabledStateMask"
// MNetworkVarNames "uint32 m_bvEnabledPredictedStateMask"
class CModifierProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	CHandle< CBaseEntity > m_hOwner; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x15e]; // 0x34
public:
	uint8_t m_nProviderVisitedFlags; // 0x192	
	bool m_bModifierStatesDirty; // 0x193	
	bool m_bPredictedOwner; // 0x194	
	int8_t m_iLockRefCount; // 0x195	
private:
	[[maybe_unused]] uint8_t __pad0196[0x2]; // 0x196
public:
	ModifierPropRuntimeHandle_t m_hHandle; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019a[0x2]; // 0x19a
public:
	uint32_t m_nBroadcastEventListenerMask; // 0x19c	
private:
	[[maybe_unused]] uint8_t __pad01a0[0x8]; // 0x1a0
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecProviders; // 0x1a8	
	// MNetworkEnable
	uint32_t m_nDisabledGroups; // 0x1c0	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledStateMask[6]; // 0x1c4	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvDisabledStateMask[6]; // 0x1dc	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledPredictedStateMask[6]; // 0x1f4	
private:
	[[maybe_unused]] uint8_t __pad020c[0xc]; // 0x20c
public:
	bool m_bParentWantsModifierStateChangeCallback; // 0x218	
	
	// Datamap fields:
	// void m_pNotifyOwnerEvents; // 0x1a0
	// void m_vecModifiers; // 0x38
};

