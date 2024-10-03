#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x4e0	
	CEntityIOOutput m_OnSpawn; // 0x508	
	bool m_bDisabled; // 0x530	
	bool m_bWaitForRefire; // 0x531	
	bool m_bTriggerOnce; // 0x532	
	bool m_bFastRetrigger; // 0x533	
	bool m_bPassthoughCaller; // 0x534	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

