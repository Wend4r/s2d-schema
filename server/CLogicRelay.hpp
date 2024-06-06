#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x4c0	
	CEntityIOOutput m_OnSpawn; // 0x4e8	
	bool m_bDisabled; // 0x510	
	bool m_bWaitForRefire; // 0x511	
	bool m_bTriggerOnce; // 0x512	
	bool m_bFastRetrigger; // 0x513	
	bool m_bPassthoughCaller; // 0x514	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

