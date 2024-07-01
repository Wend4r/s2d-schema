#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf8
// Has VTable
class CCitadel_Ability_Tokamak_HotShot : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x178]; // 0xc28
public:
	float m_flDPS; // 0xda0	
	GameTime_t m_flNextDamageTick; // 0xda4	
	Vector m_vStart; // 0xda8	
	Vector m_vEnd; // 0xdb4	
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0xdc0	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnFlameAnglesChanged"
	QAngle m_angBeamAngles; // 0xdd8	
private:
	[[maybe_unused]] uint8_t __pad0de4[0xc]; // 0xde4
public:
	bool m_bNeedsBeamReset; // 0xdf0	
};

