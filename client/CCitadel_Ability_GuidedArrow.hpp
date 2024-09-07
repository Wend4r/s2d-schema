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
// MNetworkVarNames "int m_nBonusTechPower"
class CCitadel_Ability_GuidedArrow : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x8]; // 0xc60
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xc68	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xc6c	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xc70	
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xc74	
	GameTime_t m_flCastTime; // 0xc78	
	bool m_bNeedsExplosion; // 0xc7c	
private:
	[[maybe_unused]] uint8_t __pad0c7d[0x3]; // 0xc7d
public:
	Vector m_vProjectileRemovedOrigin; // 0xc80	
	QAngle m_angCasterAnglesAtCastTime; // 0xc8c	
	float m_flTravelDistance; // 0xc98	
	bool m_bInKillFlow; // 0xc9c	
private:
	[[maybe_unused]] uint8_t __pad0c9d[0x3]; // 0xc9d
public:
	float m_flProjectileTurnVel; // 0xca0	
};

