#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x548	
	CEntityIOOutput m_OnSpawn; // 0x570	
	bool m_bDisabled; // 0x598	
	bool m_bWaitForRefire; // 0x599	
	bool m_bTriggerOnce; // 0x59a	
	bool m_bFastRetrigger; // 0x59b	
	bool m_bPassthoughCaller; // 0x59c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

