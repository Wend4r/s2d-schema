#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfa0
// Has VTable
class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:
	bool m_bBreakable; // 0xf80	
	bool m_isAbleToCloseAreaPortals; // 0xf81	
private:
	[[maybe_unused]] uint8_t __pad0f82[0x2]; // 0xf82
public:
	int32_t m_currentDamageState; // 0xf84	
	CUtlVector< CUtlSymbolLarge > m_damageStates; // 0xf88	
	
	// Datamap fields:
	// void InputSetUnbreakable; // 0x0
	// void InputSetBreakable; // 0x0
};

