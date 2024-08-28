#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Tokamak_HotShot : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x178]; // 0xab0
public:
	float m_flDPS; // 0xc28	
	GameTime_t m_flNextDamageTick; // 0xc2c	
	Vector m_vStart; // 0xc30	
	Vector m_vEnd; // 0xc3c	
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0xc48	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xc60	
};

