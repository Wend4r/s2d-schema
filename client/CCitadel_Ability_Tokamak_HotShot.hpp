#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe30
// Has VTable
class CCitadel_Ability_Tokamak_HotShot : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x178]; // 0xc60
public:
	float m_flDPS; // 0xdd8	
	GameTime_t m_flNextDamageTick; // 0xddc	
	Vector m_vStart; // 0xde0	
	Vector m_vEnd; // 0xdec	
	CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // 0xdf8	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	// MNetworkChangeCallback "OnFlameAnglesChanged"
	QAngle m_angBeamAngles; // 0xe10	
private:
	[[maybe_unused]] uint8_t __pad0e1c[0xc]; // 0xe1c
public:
	bool m_bNeedsBeamReset; // 0xe28	
};

