#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x590
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x538	
	CEntityIOOutput m_OnSpawn; // 0x560	
	bool m_bDisabled; // 0x588	
	bool m_bWaitForRefire; // 0x589	
	bool m_bTriggerOnce; // 0x58a	
	bool m_bFastRetrigger; // 0x58b	
	bool m_bPassthoughCaller; // 0x58c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

