#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x24
// Has Trivial Destructor
struct ParticleNode_t
{
public:
	CHandle< CBaseEntity > m_hEntity; // 0x0	
	ParticleIndex_t m_iIndex; // 0x4	
	GameTime_t m_flStartTime; // 0x8	
	float m_flGrowthDuration; // 0xc	
	Vector m_vecGrowthOrigin; // 0x10	
	float m_flEndcapTime; // 0x1c	
	bool m_bMarkedForDelete; // 0x20	
};

