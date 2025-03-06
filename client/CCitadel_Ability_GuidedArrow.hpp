#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdb0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "int m_nBonusTechPower"
class CCitadel_Ability_GuidedArrow : public C_CitadelBaseAbility
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
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xc64	
	GameTime_t m_flCastTime; // 0xc68	
	bool m_bNeedsExplosion; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c6d[0x3]; // 0xc6d
public:
	Vector m_vProjectileRemovedOrigin; // 0xc70	
	QAngle m_angCasterAnglesAtCastTime; // 0xc7c	
	float m_flTravelDistance; // 0xc88	
	bool m_bInKillFlow; // 0xc8c	
private:
	[[maybe_unused]] uint8_t __pad0c8d[0x3]; // 0xc8d
public:
	float m_flProjectileTurnVel; // 0xc90	
};

