#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb8
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Chrono_TimeWall : public CCitadelBaseAbility
{
public:
	CHandle< CCitadelBulletTimeWarp > m_hWall; // 0xb00	
	Vector vecDir; // 0xb04	
	ParticleIndex_t m_hChargingParticle; // 0xb10	
	Vector m_vSpawnPos; // 0xb14	
	QAngle m_qAngles; // 0xb20	
	// MNetworkEnable
	bool m_bAirCast; // 0xb2c	
};

