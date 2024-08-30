#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc80
// Has VTable
class CAbility_Rutger_ForceField : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_hChargingParticle; // 0xad8	
	ParticleIndex_t m_hExplodeParticle; // 0xadc	
	Vector m_vSpawnPos; // 0xae0	
	GameTime_t m_fTimeToDestroyForceField; // 0xaec	
	bool m_bFirstThink; // 0xaf0	
};

