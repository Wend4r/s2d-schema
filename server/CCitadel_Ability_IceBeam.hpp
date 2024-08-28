#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1150
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_IceBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x618]; // 0xab0
public:
	GameTime_t m_flNextDamageTick; // 0x10c8	
	Vector m_vStart; // 0x10cc	
	Vector m_vEnd; // 0x10d8	
private:
	[[maybe_unused]] uint8_t __pad10e4[0x3c]; // 0x10e4
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0x1120	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1138	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0x1144	
};

