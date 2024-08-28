#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "int m_nBonusTechPower"
class CCitadel_Ability_GuidedArrow : public CCitadelBaseAbility
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
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xac4	
	CHandle< CCitadelAnimatingModelEntity > m_hOwl; // 0xac8	
private:
	[[maybe_unused]] uint8_t __pad0acc[0xc]; // 0xacc
public:
	GameTime_t m_flCastTime; // 0xad8	
	bool m_bNeedsExplosion; // 0xadc	
private:
	[[maybe_unused]] uint8_t __pad0add[0x3]; // 0xadd
public:
	Vector m_vProjectileRemovedOrigin; // 0xae0	
	QAngle m_angCasterAnglesAtCastTime; // 0xaec	
	float m_flTravelDistance; // 0xaf8	
	bool m_bInKillFlow; // 0xafc	
private:
	[[maybe_unused]] uint8_t __pad0afd[0x3]; // 0xafd
public:
	float m_flProjectileTurnVel; // 0xb00	
};

