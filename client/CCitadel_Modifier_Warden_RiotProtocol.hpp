#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x250
// Has VTable
class CCitadel_Modifier_Warden_RiotProtocol : public CCitadelModifier
{
public:
	CUtlOrderedMap< CHandle< C_BaseEntity >, GameTime_t > m_mapEntToTimeHit; // 0xc0	
	int32_t m_nNumPlayersAffected; // 0xe8	
	int32_t m_nNumPlayersKilled; // 0xec	
	QAngle m_playerAngles; // 0xf0	
	ParticleIndex_t m_ConeParticle; // 0xfc	
};

