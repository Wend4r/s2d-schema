#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x558	
	CEntityIOOutput m_OnSpawn; // 0x580	
	bool m_bDisabled; // 0x5a8	
	bool m_bWaitForRefire; // 0x5a9	
	bool m_bTriggerOnce; // 0x5aa	
	bool m_bFastRetrigger; // 0x5ab	
	bool m_bPassthoughCaller; // 0x5ac	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

