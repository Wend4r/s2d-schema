#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_Tokamak_HotShot : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x178]; // 0xaa8
public:
	float m_flDPS; // 0xc20	
	GameTime_t m_flNextDamageTick; // 0xc24	
	Vector m_vStart; // 0xc28	
	Vector m_vEnd; // 0xc34	
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0xc40	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0xc58	
};

