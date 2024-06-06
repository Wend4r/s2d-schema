#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CLogicNavigation : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04c0[0x8]; // 0x4c0
public:
	bool m_isOn; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04c9[0x3]; // 0x4c9
public:
	navproperties_t m_navProperty; // 0x4cc	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// CUtlString navprop; // 0x7fffffff
};

