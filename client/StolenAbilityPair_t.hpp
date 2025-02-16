#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "EAbilitySlots_t m_ItemSlotType"
// MNetworkVarNames "AbilityID_t m_StolenAbilityID"
struct StolenAbilityPair_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	EAbilitySlots_t m_ItemSlotType; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	CUtlStringToken m_StolenAbilityID; // 0x34	
};

