#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd70
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x8]; // 0xc50
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xc58	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xc5c	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xc60	
	float m_flCastTimeDamage; // 0xc64	
	GameTime_t m_flCastTime; // 0xc68	
	bool m_bNeedsExplosion; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c6d[0x3]; // 0xc6d
public:
	Vector m_vProjectileRemovedOrigin; // 0xc70	
	QAngle m_angCasterAnglesAtCastTime; // 0xc7c	
	float m_flTravelDistance; // 0xc88	
};

