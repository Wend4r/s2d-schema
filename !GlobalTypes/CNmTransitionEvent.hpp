#pragma once

#include <cstdint>

// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 8
// Size: 0x28
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmTransitionEvent : public CNmEvent
{
public:
	NmTransitionRule_t m_rule; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
public:
	CGlobalSymbol m_ID; // 0x20	
};

