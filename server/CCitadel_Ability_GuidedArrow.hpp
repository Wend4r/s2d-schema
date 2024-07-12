#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc18
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
private:
	[[maybe_unused]] uint8_t __pad0ac4[0xc]; // 0xac4
public:
	GameTime_t m_flCastTime; // 0xad0	
	bool m_bNeedsExplosion; // 0xad4	
private:
	[[maybe_unused]] uint8_t __pad0ad5[0x3]; // 0xad5
public:
	Vector m_vProjectileRemovedOrigin; // 0xad8	
	QAngle m_angCasterAnglesAtCastTime; // 0xae4	
	float m_flTravelDistance; // 0xaf0	
	bool m_bInKillFlow; // 0xaf4	
private:
	[[maybe_unused]] uint8_t __pad0af5[0x3]; // 0xaf5
public:
	float m_flProjectileTurnVel; // 0xaf8	
};

