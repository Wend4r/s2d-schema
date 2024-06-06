#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xab8
// Has VTable
// 
// MNetworkVarNames "int m_nDecoyShotTick"
class CDecoyProjectile : public CBaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0a90[0x8]; // 0xa90
public:
	// MNetworkEnable
	int32_t m_nDecoyShotTick; // 0xa98	
	int32_t m_shotsRemaining; // 0xa9c	
	GameTime_t m_fExpireTime; // 0xaa0	
private:
	[[maybe_unused]] uint8_t __pad0aa4[0xc]; // 0xaa4
public:
	uint16_t m_decoyWeaponDefIndex; // 0xab0	
	
	// Datamap fields:
	// void CDecoyProjectileThink_Detonate; // 0x0
	// void CDecoyProjectileGunfireThink; // 0x0
};

