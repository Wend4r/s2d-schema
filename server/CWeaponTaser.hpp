#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xec0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_fFireTime"
class CWeaponTaser : public CCSWeaponBaseGun
{
public:
	// MNetworkEnable
	GameTime_t m_fFireTime; // 0xeb8	
	int32_t m_nLastAttackTick; // 0xebc	
};

