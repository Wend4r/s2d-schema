#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc90
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public CCitadelBaseAbility
{
public:
	CHandle< CCitadelBulletTimeWarp > m_hWall; // 0xad8	
	Vector vecDir; // 0xadc	
	ParticleIndex_t m_hChargingParticle; // 0xae8	
	Vector m_vSpawnPos; // 0xaec	
	QAngle m_qAngles; // 0xaf8	
	// MNetworkEnable
	bool m_bAirCast; // 0xb04	
};

