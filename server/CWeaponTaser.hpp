#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf80
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_fFireTime"
class CWeaponTaser : public CCSWeaponBaseGun
{
public:
	// MNetworkEnable
	GameTime_t m_fFireTime; // 0xf78	
	int32_t m_nLastAttackTick; // 0xf7c	
};

