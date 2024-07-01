#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7f8
// Has VTable
class CGunTarget : public CBaseToggle
{
public:
	bool m_on; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07c9[0x3]; // 0x7c9
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x7cc	
	CEntityIOOutput m_OnDeath; // 0x7d0	
	
	// Datamap fields:
	// void CGunTargetNext; // 0x0
	// void CGunTargetStart; // 0x0
	// void CGunTargetWait; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputToggle; // 0x0
};

