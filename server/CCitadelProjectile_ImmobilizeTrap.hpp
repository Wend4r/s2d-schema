#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb00
// Has VTable
class CCitadelProjectile_ImmobilizeTrap : public CCitadelProjectile
{
public:
	GameTime_t m_flStartTime; // 0x800	
	Vector m_vecStartPos; // 0x804	
	Vector m_vecEndPos; // 0x810	
	GameTime_t m_flProjectileLandTime; // 0x81c	
};

