#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
class CCitadel_Ability_WreckerTeleport : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xc30	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xc34	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xc38	
	float m_flCastTimeDamage; // 0xc3c	
	GameTime_t m_flCastTime; // 0xc40	
	bool m_bNeedsExplosion; // 0xc44	
private:
	[[maybe_unused]] uint8_t __pad0c45[0x3]; // 0xc45
public:
	Vector m_vProjectileRemovedOrigin; // 0xc48	
	QAngle m_angCasterAnglesAtCastTime; // 0xc54	
	float m_flTravelDistance; // 0xc60	
};

