#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc58
// Has VTable
class CAbility_Rutger_ForceField : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_hChargingParticle; // 0xab0	
	ParticleIndex_t m_hExplodeParticle; // 0xab4	
	Vector m_vSpawnPos; // 0xab8	
	GameTime_t m_fTimeToDestroyForceField; // 0xac4	
	bool m_bFirstThink; // 0xac8	
};

