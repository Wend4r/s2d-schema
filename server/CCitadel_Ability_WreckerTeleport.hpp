#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x8]; // 0xaa8
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile; // 0xab0	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xab4	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xab8	
	float m_flCastTimeDamage; // 0xabc	
	GameTime_t m_flCastTime; // 0xac0	
	bool m_bNeedsExplosion; // 0xac4	
private:
	[[maybe_unused]] uint8_t __pad0ac5[0x3]; // 0xac5
public:
	Vector m_vProjectileRemovedOrigin; // 0xac8	
	QAngle m_angCasterAnglesAtCastTime; // 0xad4	
	float m_flTravelDistance; // 0xae0	
};

