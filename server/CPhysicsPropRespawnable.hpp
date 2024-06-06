#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc20
// Has VTable
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xbe8	
	QAngle m_vOriginalSpawnAngles; // 0xbf4	
	Vector m_vOriginalMins; // 0xc00	
	Vector m_vOriginalMaxs; // 0xc0c	
	float m_flRespawnDuration; // 0xc18	
	
	// Datamap fields:
	// void CPhysicsPropRespawnableMaterialize; // 0x0
};

