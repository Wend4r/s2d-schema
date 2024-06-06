#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CLogicBranch : public CLogicalEntity
{
public:
	bool m_bInValue; // 0x4c0	
private:
	[[maybe_unused]] uint8_t __pad04c1[0x7]; // 0x4c1
public:
	CUtlVector< CHandle< CBaseEntity > > m_Listeners; // 0x4c8	
	CEntityIOOutput m_OnTrue; // 0x4e0	
	CEntityIOOutput m_OnFalse; // 0x508	
	
	// Datamap fields:
	// bool InputSetValue; // 0x0
	// bool InputSetValueTest; // 0x0
	// void InputToggle; // 0x0
	// void InputToggleTest; // 0x0
	// void InputTest; // 0x0
};

