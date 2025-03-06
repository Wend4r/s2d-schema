#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x520
// Has VTable
class CCitadelHeroLoader : public C_BaseEntity
{
public:
	CUtlSymbolLarge m_hero; // 0x510	
	int32_t m_nLoadSeq; // 0x518	
	CHandle< C_BaseEntity > m_hOwner; // 0x51c	
};

