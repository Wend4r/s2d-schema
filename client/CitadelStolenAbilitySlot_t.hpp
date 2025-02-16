#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x10
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "EAbilitySlots_t m_eStolenSlot"
// MNetworkVarNames "bool m_bIsActivelyStolen"
struct CitadelStolenAbilitySlot_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	EAbilitySlots_t m_eStolenSlot; // 0x8	
	// MNetworkEnable
	bool m_bIsActivelyStolen; // 0xa	
};

