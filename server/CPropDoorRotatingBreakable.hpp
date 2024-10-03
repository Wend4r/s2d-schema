#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf58
// Has VTable
class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:
	bool m_bBreakable; // 0xf38	
	bool m_isAbleToCloseAreaPortals; // 0xf39	
private:
	[[maybe_unused]] uint8_t __pad0f3a[0x2]; // 0xf3a
public:
	int32_t m_currentDamageState; // 0xf3c	
	CUtlVector< CUtlSymbolLarge > m_damageStates; // 0xf40	
	
	// Datamap fields:
	// void InputSetUnbreakable; // 0x0
	// void InputSetBreakable; // 0x0
};

