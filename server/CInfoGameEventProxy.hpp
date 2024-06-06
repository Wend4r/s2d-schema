#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CInfoGameEventProxy : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszEventName; // 0x4c0	
	float m_flRange; // 0x4c8	
	
	// Datamap fields:
	// CUtlSymbolLarge InputGenerateGameEvent; // 0x0
};

