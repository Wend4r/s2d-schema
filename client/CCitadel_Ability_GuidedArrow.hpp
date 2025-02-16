#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe00
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hProjectile"
// MNetworkVarNames "float m_flArrowSpeed"
// MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
// MNetworkVarNames "int m_nBonusTechPower"
class CCitadel_Ability_GuidedArrow : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x8]; // 0xca0
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hProjectile; // 0xca8	
	// MNetworkEnable
	float m_flArrowSpeed; // 0xcac	
	// MNetworkEnable
	GameTime_t m_flSnapAnglesBackTime; // 0xcb0	
	// MNetworkEnable
	int32_t m_nBonusTechPower; // 0xcb4	
	GameTime_t m_flCastTime; // 0xcb8	
	bool m_bNeedsExplosion; // 0xcbc	
private:
	[[maybe_unused]] uint8_t __pad0cbd[0x3]; // 0xcbd
public:
	Vector m_vProjectileRemovedOrigin; // 0xcc0	
	QAngle m_angCasterAnglesAtCastTime; // 0xccc	
	float m_flTravelDistance; // 0xcd8	
	bool m_bInKillFlow; // 0xcdc	
private:
	[[maybe_unused]] uint8_t __pad0cdd[0x3]; // 0xcdd
public:
	float m_flProjectileTurnVel; // 0xce0	
};

