#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x8]; // 0xca0
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xca8	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xcac	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xcb0	
	float m_flCastTimeDamage; // 0xcb4	
	GameTime_t m_flCastTime; // 0xcb8	
	bool m_bNeedsExplosion; // 0xcbc	
private:
	[[maybe_unused]] uint8_t __pad0cbd[0x3]; // 0xcbd
public:
	Vector m_vProjectileRemovedOrigin; // 0xcc0	
	QAngle m_angCasterAnglesAtCastTime; // 0xccc	
	float m_flTravelDistance; // 0xcd8	
};

