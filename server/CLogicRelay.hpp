#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CLogicRelay : public CLogicalEntity
{
public:
	CEntityIOOutput m_OnTrigger; // 0x4b8	
	CEntityIOOutput m_OnSpawn; // 0x4e0	
	bool m_bDisabled; // 0x508	
	bool m_bWaitForRefire; // 0x509	
	bool m_bTriggerOnce; // 0x50a	
	bool m_bFastRetrigger; // 0x50b	
	bool m_bPassthoughCaller; // 0x50c	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputEnableRefire; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// void InputTrigger; // 0x0
	// void InputCancelPending; // 0x0
};

