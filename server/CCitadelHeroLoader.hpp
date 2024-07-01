#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CCitadelHeroLoader : public CBaseEntity
{
public:
	CUtlSymbolLarge m_hero; // 0x4b8	
	int32_t m_nLoadSeq; // 0x4c0	
	CHandle< CBaseEntity > m_hOwner; // 0x4c4	
};

