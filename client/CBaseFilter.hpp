#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x568
// Has VTable
class CBaseFilter : public CLogicalEntity
{
public:
	bool m_bNegated; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0511[0x7]; // 0x511
public:
	CEntityIOOutput m_OnPass; // 0x518	
	CEntityIOOutput m_OnFail; // 0x540	
	
	// Datamap fields:
	// void InputTestActivator; // 0x0
};

