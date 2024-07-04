#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc08
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "int m_nBonusTechPower"
class CCitadel_Ability_GuidedArrow : public CCitadelBaseAbility
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
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xabc	
	CHandle< CCitadelAnimatingModelEntity > m_hOwl; // 0xac0	
	GameTime_t m_flCastTime; // 0xac4	
	bool m_bNeedsExplosion; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0ac9[0x3]; // 0xac9
public:
	Vector m_vProjectileRemovedOrigin; // 0xacc	
	QAngle m_angCasterAnglesAtCastTime; // 0xad8	
	float m_flTravelDistance; // 0xae4	
	bool m_bInKillFlow; // 0xae8	
private:
	[[maybe_unused]] uint8_t __pad0ae9[0x3]; // 0xae9
public:
	float m_flProjectileTurnVel; // 0xaec	
};

