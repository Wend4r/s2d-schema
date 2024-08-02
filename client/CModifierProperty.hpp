#pragma once

#include <cstdint>

struct CNetworkVarChainer;
struct ModifierPropRuntimeHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x230
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
	CHandle< C_BaseEntity > m_hOwner; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x15c]; // 0x34
public:
	uint8_t m_nProviderVisitedFlags; // 0x190	
	bool m_bModifierStatesDirty; // 0x191	
	bool m_bPredictedOwner; // 0x192	
	int8_t m_iLockRefCount; // 0x193	
private:
	[[maybe_unused]] uint8_t __pad0194[0x2]; // 0x194
public:
	ModifierPropRuntimeHandle_t m_hHandle; // 0x196	
	uint32_t m_nBroadcastEventListenerMask; // 0x198	
private:
	[[maybe_unused]] uint8_t __pad019c[0xc]; // 0x19c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecProviders; // 0x1a8	
	// MNetworkEnable
	uint32_t m_nDisabledGroups; // 0x1c0	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledStateMask[5]; // 0x1c4	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvDisabledStateMask[5]; // 0x1d8	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledPredictedStateMask[5]; // 0x1ec	
	
	// Datamap fields:
	// void m_pNotifyOwnerEvents; // 0x1a0
	// void m_vecModifiers; // 0x38
};

