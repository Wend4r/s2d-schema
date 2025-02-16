#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "int m_nBonusTechPower"
class CCitadel_Ability_GuidedArrow : public CCitadelBaseAbility
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
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xb14	
	CHandle< CCitadelAnimatingModelEntity > m_hOwl; // 0xb18	
private:
	[[maybe_unused]] uint8_t __pad0b1c[0xc]; // 0xb1c
public:
	GameTime_t m_flCastTime; // 0xb28	
	bool m_bNeedsExplosion; // 0xb2c	
private:
	[[maybe_unused]] uint8_t __pad0b2d[0x3]; // 0xb2d
public:
	Vector m_vProjectileRemovedOrigin; // 0xb30	
	QAngle m_angCasterAnglesAtCastTime; // 0xb3c	
	float m_flTravelDistance; // 0xb48	
	bool m_bInKillFlow; // 0xb4c	
private:
	[[maybe_unused]] uint8_t __pad0b4d[0x3]; // 0xb4d
public:
	float m_flProjectileTurnVel; // 0xb50	
};

