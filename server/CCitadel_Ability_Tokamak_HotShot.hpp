#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc98
// Has VTable
// 
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Tokamak_HotShot : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x178]; // 0xad8
public:
	float m_flDPS; // 0xc50	
	GameTime_t m_flNextDamageTick; // 0xc54	
	Vector m_vStart; // 0xc58	
	Vector m_vEnd; // 0xc64	
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0xc70	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xc88	
};

