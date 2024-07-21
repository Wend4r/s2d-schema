#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1148
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_IceBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x618]; // 0xaa8
public:
	GameTime_t m_flNextDamageTick; // 0x10c0	
	Vector m_vStart; // 0x10c4	
	Vector m_vEnd; // 0x10d0	
private:
	[[maybe_unused]] uint8_t __pad10dc[0x3c]; // 0x10dc
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0x1118	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1130	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0x113c	
};

