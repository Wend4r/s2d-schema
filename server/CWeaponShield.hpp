#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MNetworkVarNames "float m_flDisplayHealth"
class CWeaponShield : public CCSWeaponBaseGun
{
public:
	float m_flBulletDamageAbsorbed; // 0xeb8	
	GameTime_t m_flLastBulletHitSoundTime; // 0xebc	
	// MNetworkEnable
	float m_flDisplayHealth; // 0xec0	
};

