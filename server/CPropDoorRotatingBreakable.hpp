#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1080
// Has VTable
class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:
	bool m_bBreakable; // 0x1060	
	bool m_isAbleToCloseAreaPortals; // 0x1061	
private:
	[[maybe_unused]] uint8_t __pad1062[0x2]; // 0x1062
public:
	int32_t m_currentDamageState; // 0x1064	
	CUtlVector< CUtlSymbolLarge > m_damageStates; // 0x1068	
	
	// Datamap fields:
	// void InputSetUnbreakable; // 0x0
	// void InputSetBreakable; // 0x0
};

