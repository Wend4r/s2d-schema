#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe08
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_hChargingParticle; // 0xc60	
	Vector m_vSpawnPos; // 0xc64	
	QAngle m_qAngles; // 0xc70	
	// MNetworkEnable
	bool m_bAirCast; // 0xc7c	
};

