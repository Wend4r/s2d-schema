#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaf8
// Has VTable
class CCitadelProjectile_ImmobilizeTrap : public CCitadelProjectile
{
public:
	GameTime_t m_flStartTime; // 0x7f8	
	Vector m_vecStartPos; // 0x7fc	
	Vector m_vecEndPos; // 0x808	
	GameTime_t m_flProjectileLandTime; // 0x814	
};

