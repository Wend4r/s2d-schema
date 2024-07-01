#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc50
// Has VTable
class CAbility_Rutger_ForceField : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_hChargingParticle; // 0xaa8	
	ParticleIndex_t m_hExplodeParticle; // 0xaac	
	Vector m_vSpawnPos; // 0xab0	
	GameTime_t m_fTimeToDestroyForceField; // 0xabc	
	bool m_bFirstThink; // 0xac0	
};

