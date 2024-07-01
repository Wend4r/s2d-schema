#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
struct ResponseContext_t
{
public:
	CUtlSymbolLarge m_iszName; // 0x0	
	CUtlSymbolLarge m_iszValue; // 0x8	
	GameTime_t m_fExpirationTime; // 0x10	
};

