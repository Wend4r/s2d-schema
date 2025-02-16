#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe48
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_hChargingParticle; // 0xca0	
	Vector m_vSpawnPos; // 0xca4	
	QAngle m_qAngles; // 0xcb0	
	// MNetworkEnable
	bool m_bAirCast; // 0xcbc	
};

