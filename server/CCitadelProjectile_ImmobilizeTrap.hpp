#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb20
// Has VTable
class CCitadelProjectile_ImmobilizeTrap : public CCitadelProjectile
{
public:
	GameTime_t m_flStartTime; // 0x820	
	Vector m_vecStartPos; // 0x824	
	Vector m_vecEndPos; // 0x830	
	GameTime_t m_flProjectileLandTime; // 0x83c	
};

