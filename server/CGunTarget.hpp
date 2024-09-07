#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
class CGunTarget : public CBaseToggle
{
public:
	bool m_on; // 0x7e8	
private:
	[[maybe_unused]] uint8_t __pad07e9[0x3]; // 0x7e9
public:
	CHandle< CBaseEntity > m_hTargetEnt; // 0x7ec	
	CEntityIOOutput m_OnDeath; // 0x7f0	
	
	// Datamap fields:
	// void CGunTargetNext; // 0x0
	// void CGunTargetStart; // 0x0
	// void CGunTargetWait; // 0x0
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputToggle; // 0x0
};

