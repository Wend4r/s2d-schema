#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf40
// Has VTable
// 
// MNetworkVarNames "float m_flDisplayHealth"
class CWeaponShield : public CCSWeaponBaseGun
{
public:
	float m_flBulletDamageAbsorbed; // 0xf30	
	GameTime_t m_flLastBulletHitSoundTime; // 0xf34	
	// MNetworkEnable
	float m_flDisplayHealth; // 0xf38	
};

