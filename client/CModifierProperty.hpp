#pragma once

#include <cstdint>

struct CNetworkVarChainer;
struct ModifierPropRuntimeHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x258
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
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	CHandle< C_BaseEntity > m_hOwner; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x16b]; // 0x34
public:
	uint8_t m_nProviderVisitedFlags; // 0x19f	
	bool m_bModifierStatesDirty; // 0x1a0	
	bool m_bPredictedOwner; // 0x1a1	
	int8_t m_iLockRefCount; // 0x1a2	
private:
	[[maybe_unused]] uint8_t __pad01a3[0x1]; // 0x1a3
public:
	ModifierPropRuntimeHandle_t m_hHandle; // 0x1a4	
private:
	[[maybe_unused]] uint8_t __pad01a6[0x2]; // 0x1a6
public:
	uint32_t m_nBroadcastEventListenerMask; // 0x1a8	
private:
	[[maybe_unused]] uint8_t __pad01ac[0xc]; // 0x1ac
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecProviders; // 0x1b8	
	// MNetworkEnable
	uint32_t m_nDisabledGroups; // 0x1d0	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledStateMask[7]; // 0x1d4	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvDisabledStateMask[7]; // 0x1f0	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledPredictedStateMask[7]; // 0x20c	
	
	// Datamap fields:
	// void m_pNotifyOwnerEvents; // 0x1b0
	// void m_vecModifiers; // 0x38
};

