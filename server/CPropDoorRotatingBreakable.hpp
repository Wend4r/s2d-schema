#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf50
// Has VTable
class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:
	bool m_bBreakable; // 0xf30	
	bool m_isAbleToCloseAreaPortals; // 0xf31	
private:
	[[maybe_unused]] uint8_t __pad0f32[0x2]; // 0xf32
public:
	int32_t m_currentDamageState; // 0xf34	
	CUtlVector< CUtlSymbolLarge > m_damageStates; // 0xf38	
	
	// Datamap fields:
	// void InputSetUnbreakable; // 0x0
	// void InputSetBreakable; // 0x0
};

