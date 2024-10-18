#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x840
// Has VTable
class CGunTarget : public CBaseToggle
{
public:
	bool m_on; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0811[0x3]; // 0x811
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x814	
	CEntityIOOutput m_OnDeath; // 0x818	
	
	// Datamap fields:
	// void CGunTargetNext; // 0x0
	// void CGunTargetStart; // 0x0
	// void CGunTargetWait; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputToggle; // 0x0
};

