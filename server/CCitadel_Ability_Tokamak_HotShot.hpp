#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc0
// Has VTable
// 
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Tokamak_HotShot : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x178]; // 0xb00
public:
	float m_flDPS; // 0xc78	
	GameTime_t m_flNextDamageTick; // 0xc7c	
	Vector m_vStart; // 0xc80	
	Vector m_vEnd; // 0xc8c	
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0xc98	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xcb0	
};

