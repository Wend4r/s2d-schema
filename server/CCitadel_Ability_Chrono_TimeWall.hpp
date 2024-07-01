#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc60
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public CCitadelBaseAbility
{
public:
	CHandle< CCitadelBulletTimeWarp > m_hWall; // 0xaa8	
	Vector vecDir; // 0xaac	
	ParticleIndex_t m_hChargingParticle; // 0xab8	
	Vector m_vSpawnPos; // 0xabc	
	QAngle m_qAngles; // 0xac8	
	// MNetworkEnable
	bool m_bAirCast; // 0xad4	
};

