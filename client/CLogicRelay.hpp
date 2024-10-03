#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x568	
	CEntityIOOutput m_OnSpawn; // 0x590	
	bool m_bDisabled; // 0x5b8	
	bool m_bWaitForRefire; // 0x5b9	
	bool m_bTriggerOnce; // 0x5ba	
	bool m_bFastRetrigger; // 0x5bb	
	bool m_bPassthoughCaller; // 0x5bc	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

