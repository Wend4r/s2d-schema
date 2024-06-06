#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
class CStateAction
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CSmartPtr< CAnimGraphDoc_Action > m_pAction; // 0x8	
	StateActionBehavior m_eBehavior; // 0x10	
};

