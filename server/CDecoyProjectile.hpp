#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb78
// Has VTable
// 
// MNetworkVarNames "int m_nDecoyShotTick"
class CDecoyProjectile : public CBaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad0b50[0x8]; // 0xb50
public:
	// MNetworkEnable
	int32_t m_nDecoyShotTick; // 0xb58	
	int32_t m_shotsRemaining; // 0xb5c	
	GameTime_t m_fExpireTime; // 0xb60	
private:
	[[maybe_unused]] uint8_t __pad0b64[0xc]; // 0xb64
public:
	uint16_t m_decoyWeaponDefIndex; // 0xb70	
	
	// Datamap fields:
	// void CDecoyProjectileThink_Detonate; // 0x0
	// void CDecoyProjectileGunfireThink; // 0x0
};

