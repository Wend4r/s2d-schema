#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c8
// Has VTable
class CTriggerBrush : public CBaseModelEntity
{
public:
	CEntityIOOutput m_OnStartTouch; // 0x748	
	CEntityIOOutput m_OnEndTouch; // 0x770	
	CEntityIOOutput m_OnUse; // 0x798	
	int32_t m_iInputFilter; // 0x7c0	
	int32_t m_iDontMessageParent; // 0x7c4	
	
	// Datamap fields:
	// void InputDisable; // 0x0
	// void InputEnable; // 0x0
};

