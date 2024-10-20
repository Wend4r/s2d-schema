#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x538
// Has VTable
class CBaseFilter : public CLogicalEntity
{
public:
	bool m_bNegated; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x7]; // 0x4e1
public:
	CEntityIOOutput m_OnPass; // 0x4e8	
	CEntityIOOutput m_OnFail; // 0x510	
	
	// Datamap fields:
	// void InputTestActivator; // 0x0
};

