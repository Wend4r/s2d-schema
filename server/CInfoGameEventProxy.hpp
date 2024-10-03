#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CInfoGameEventProxy : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszEventName; // 0x4e0	
	float m_flRange; // 0x4e8	
	
	// Datamap fields:
	// CUtlSymbolLarge InputGenerateGameEvent; // 0x0
};

