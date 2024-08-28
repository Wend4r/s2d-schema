#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe8
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x8]; // 0xab0
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hProjectile; // 0xab8	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xabc	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xac0	
	float m_flCastTimeDamage; // 0xac4	
	GameTime_t m_flCastTime; // 0xac8	
	bool m_bNeedsExplosion; // 0xacc	
private:
	[[maybe_unused]] uint8_t __pad0acd[0x3]; // 0xacd
public:
	Vector m_vProjectileRemovedOrigin; // 0xad0	
	QAngle m_angCasterAnglesAtCastTime; // 0xadc	
	float m_flTravelDistance; // 0xae8	
};

