#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb30
// Has VTable
// 
// MNetworkVarNames "int m_nDecoyShotTick"
class CDecoyProjectile : public CBaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0b08[0x8]; // 0xb08
public:
	// MNetworkEnable
	int32_t m_nDecoyShotTick; // 0xb10	
	int32_t m_shotsRemaining; // 0xb14	
	GameTime_t m_fExpireTime; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b1c[0xc]; // 0xb1c
public:
	uint16_t m_decoyWeaponDefIndex; // 0xb28	
	
	// Datamap fields:
	// void CDecoyProjectileThink_Detonate; // 0x0
	// void CDecoyProjectileGunfireThink; // 0x0
};

