#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CPointProximitySensor : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4b8	
private:
	[[maybe_unused]] uint8_t __pad04b9[0x3]; // 0x4b9
public:
	CHandle< CBaseEntity > m_hTargetEntity; // 0x4bc	
	CEntityOutputTemplate< float32 > m_Distance; // 0x4c0	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputSetTargetEntity; // 0x0
};

