#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd38
// Has VTable
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xd00	
	QAngle m_vOriginalSpawnAngles; // 0xd0c	
	Vector m_vOriginalMins; // 0xd18	
	Vector m_vOriginalMaxs; // 0xd24	
	float m_flRespawnDuration; // 0xd30	
	
	// Datamap fields:
	// void CPhysicsPropRespawnableMaterialize; // 0x0
};

