#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1170
// Has VTable
// 
// MNetworkVarNames "Vector m_vBeamAimPos"
// MNetworkVarNames "QAngle m_angBeamAngles"
class CCitadel_Ability_IceBeam : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x5e8]; // 0xb00
public:
	GameTime_t m_flNextDamageTick; // 0x10e8	
	Vector m_vStart; // 0x10ec	
	Vector m_vEnd; // 0x10f8	
private:
	[[maybe_unused]] uint8_t __pad1104[0x3c]; // 0x1104
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // 0x1140	
	// MNetworkEnable
	Vector m_vBeamAimPos; // 0x1158	
	// MNetworkEnable
	QAngle m_angBeamAngles; // 0x1164	
};

