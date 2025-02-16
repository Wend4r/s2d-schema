#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xca8
// Has VTable
class CAbility_Rutger_ForceField : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_hChargingParticle; // 0xb00	
	ParticleIndex_t m_hExplodeParticle; // 0xb04	
	Vector m_vSpawnPos; // 0xb08	
	GameTime_t m_fTimeToDestroyForceField; // 0xb14	
	bool m_bFirstThink; // 0xb18	
};

