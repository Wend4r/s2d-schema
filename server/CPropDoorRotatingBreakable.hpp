#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec8
// Has VTable
class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:
	bool m_bBreakable; // 0xea8	
	bool m_isAbleToCloseAreaPortals; // 0xea9	
private:
	[[maybe_unused]] uint8_t __pad0eaa[0x2]; // 0xeaa
public:
	int32_t m_currentDamageState; // 0xeac	
	CUtlVector< CUtlSymbolLarge > m_damageStates; // 0xeb0	
	
	// Datamap fields:
	// void InputSetUnbreakable; // 0x0
	// void InputSetBreakable; // 0x0
};

