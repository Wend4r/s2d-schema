#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd0
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_hChargingParticle; // 0xc28	
	Vector m_vSpawnPos; // 0xc2c	
	QAngle m_qAngles; // 0xc38	
	// MNetworkEnable
	bool m_bAirCast; // 0xc44	
};

