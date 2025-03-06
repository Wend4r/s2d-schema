#pragma once

#include <cstdint>

struct CNetworkVarChainer;
struct ModifierPropRuntimeHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x240
// Has VTable
// 
// MNetworkVarNames "bool m_bAllowModifiersOnDeadEntities"
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
	[[maybe_unused]] uint8_t __pad0034[0x16e]; // 0x34
public:
	bool m_bModifierStatesDirty; // 0x1a2	
	bool m_bPredictedOwner; // 0x1a3	
	// MNetworkEnable
	bool m_bAllowModifiersOnDeadEntities; // 0x1a4	
	int8_t m_iLockRefCount; // 0x1a5	
	ModifierPropRuntimeHandle_t m_hHandle; // 0x1a6	
	uint32_t m_nBroadcastEventListenerMask; // 0x1a8	
private:
	[[maybe_unused]] uint8_t __pad01ac[0xc]; // 0x1ac
public:
	// MNetworkEnable
	uint32_t m_nDisabledGroups; // 0x1b8	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledStateMask[7]; // 0x1bc	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvDisabledStateMask[7]; // 0x1d8	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledPredictedStateMask[7]; // 0x1f4	
	
	// Datamap fields:
	// void m_pNotifyOwnerEvents; // 0x1b0
	// void m_vecModifiers; // 0x38
};

