#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CLogicNavigation : public CLogicalEntity
{
private:
	[[maybe_unused]] uint8_t __pad04b8[0x8]; // 0x4b8
public:
	bool m_isOn; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x3]; // 0x4c1
public:
	navproperties_t m_navProperty; // 0x4c4	
	
	// Datamap fields:
	// void InputTurnOn; // 0x0
	// void InputTurnOff; // 0x0
	// void InputToggle; // 0x0
	// CUtlString navprop; // 0x7fffffff
};

