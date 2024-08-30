#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xcd0	
	QAngle m_vOriginalSpawnAngles; // 0xcdc	
	Vector m_vOriginalMins; // 0xce8	
	Vector m_vOriginalMaxs; // 0xcf4	
	float m_flRespawnDuration; // 0xd00	
	
	// Datamap fields:
	// void CPhysicsPropRespawnableMaterialize; // 0x0
};

