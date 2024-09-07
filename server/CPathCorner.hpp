#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x508
// Has VTable
class CPathCorner : public CPointEntity
{
public:
	float m_flWait; // 0x4d8	
	float m_flRadius; // 0x4dc	
	CEntityIOOutput m_OnPass; // 0x4e0	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetNextPathCorner; // 0x0
	// void InputInPass; // 0x0
};

