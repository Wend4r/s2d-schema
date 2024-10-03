#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x510
// Has VTable
class CPointProximitySensor : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4e4	
	CEntityOutputTemplate< float32 > m_Distance; // 0x4e8	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetTargetEntity; // 0x0
};

