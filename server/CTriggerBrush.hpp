#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x790
// Has VTable
class CTriggerBrush : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x710	
	CEntityIOOutput m_OnEndTouch; // 0x738	
	CEntityIOOutput m_OnUse; // 0x760	
	int32_t m_iInputFilter; // 0x788	
	int32_t m_iDontMessageParent; // 0x78c	
	
	// Datamap fields:
	// void InputDisable; // 0x0
	// void InputEnable; // 0x0
};

