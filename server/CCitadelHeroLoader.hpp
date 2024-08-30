#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4e8
// Has VTable
class CCitadelHeroLoader : public CBaseEntity
{
public:
	CUtlSymbolLarge m_hero; // 0x4d8	
	int32_t m_nLoadSeq; // 0x4e0	
	CHandle< CBaseEntity > m_hOwner; // 0x4e4	
};

