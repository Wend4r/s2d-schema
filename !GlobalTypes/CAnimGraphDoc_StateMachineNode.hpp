#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "State Machine"
class CAnimGraphDoc_StateMachineNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x28]; // 0x40
public:
	// MPropertyFriendlyName "Block Tags from Waning States"
	bool m_bBlockWaningTags; // 0x68	
	// MPropertyFriendlyName "Lock When Waning"
	bool m_bLockStateWhenWaning; // 0x69	
};

