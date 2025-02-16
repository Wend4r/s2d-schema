#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x8]; // 0xb00
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile; // 0xb08	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xb0c	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xb10	
	float m_flCastTimeDamage; // 0xb14	
	GameTime_t m_flCastTime; // 0xb18	
	bool m_bNeedsExplosion; // 0xb1c	
private:
	[[maybe_unused]] uint8_t __pad0b1d[0x3]; // 0xb1d
public:
	Vector m_vProjectileRemovedOrigin; // 0xb20	
	QAngle m_angCasterAnglesAtCastTime; // 0xb2c	
	float m_flTravelDistance; // 0xb38	
};

