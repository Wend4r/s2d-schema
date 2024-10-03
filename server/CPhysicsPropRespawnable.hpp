#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcf0
// Has VTable
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xcb8	
	QAngle m_vOriginalSpawnAngles; // 0xcc4	
	Vector m_vOriginalMins; // 0xcd0	
	Vector m_vOriginalMaxs; // 0xcdc	
	float m_flRespawnDuration; // 0xce8	
	
	// Datamap fields:
	// void CPhysicsPropRespawnableMaterialize; // 0x0
};

