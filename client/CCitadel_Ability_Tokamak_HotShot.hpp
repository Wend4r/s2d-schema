#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe20
// Has VTable
class CCitadel_Ability_Tokamak_HotShot : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x178]; // 0xc50
public:
	float m_flDPS; // 0xdc8	
	GameTime_t m_flNextDamageTick; // 0xdcc	
	Vector m_vStart; // 0xdd0	
	Vector m_vEnd; // 0xddc	
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0xde8	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnFlameAnglesChanged"
	QAngle m_angBeamAngles; // 0xe00	
private:
	[[maybe_unused]] uint8_t __pad0e0c[0xc]; // 0xe0c
public:
	bool m_bNeedsBeamReset; // 0xe18	
};

