#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1b30
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_fFireTime"
class C_WeaponTaser : public C_CSWeaponBaseGun
{
public:
	// MNetworkEnable
	GameTime_t m_fFireTime; // 0x1b20	
	int32_t m_nLastAttackTick; // 0x1b24	
};

