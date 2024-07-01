#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce8
// Has VTable
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xcb0	
	QAngle m_vOriginalSpawnAngles; // 0xcbc	
	Vector m_vOriginalMins; // 0xcc8	
	Vector m_vOriginalMaxs; // 0xcd4	
	float m_flRespawnDuration; // 0xce0	
	
	// Datamap fields:
	// void CPhysicsPropRespawnableMaterialize; // 0x0
};

