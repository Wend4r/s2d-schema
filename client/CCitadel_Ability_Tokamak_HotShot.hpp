#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe70
// Has VTable
class CCitadel_Ability_Tokamak_HotShot : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x178]; // 0xca0
public:
	float m_flDPS; // 0xe18	
	GameTime_t m_flNextDamageTick; // 0xe1c	
	Vector m_vStart; // 0xe20	
	Vector m_vEnd; // 0xe2c	
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0xe38	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnFlameAnglesChanged"
	QAngle m_angBeamAngles; // 0xe50	
private:
	[[maybe_unused]] uint8_t __pad0e5c[0xc]; // 0xe5c
public:
	bool m_bNeedsBeamReset; // 0xe68	
};

