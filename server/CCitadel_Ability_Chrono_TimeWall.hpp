#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc68
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public CCitadelBaseAbility
{
public:
	CHandle< CCitadelBulletTimeWarp > m_hWall; // 0xab0	
	Vector vecDir; // 0xab4	
	ParticleIndex_t m_hChargingParticle; // 0xac0	
	Vector m_vSpawnPos; // 0xac4	
	QAngle m_qAngles; // 0xad0	
	// MNetworkEnable
	bool m_bAirCast; // 0xadc	
};

