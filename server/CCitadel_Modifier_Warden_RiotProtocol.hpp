#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x258
// Has VTable
class CCitadel_Modifier_Warden_RiotProtocol : public CCitadelModifier
{
public:
	CUtlOrderedMap< CHandle< CBaseEntity >, GameTime_t > m_mapEntToTimeHit; // 0xc8	
	int32_t m_nNumPlayersAffected; // 0xf0	
	int32_t m_nNumPlayersKilled; // 0xf4	
	QAngle m_playerAngles; // 0xf8	
	ParticleIndex_t m_ConeParticle; // 0x104	
};

