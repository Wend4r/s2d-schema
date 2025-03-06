#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe10
// Has VTable
class CPhysicsPropRespawnable : public CPhysicsProp
{
public:
	Vector m_vOriginalSpawnOrigin; // 0xdd8	
	QAngle m_vOriginalSpawnAngles; // 0xde4	
	Vector m_vOriginalMins; // 0xdf0	
	Vector m_vOriginalMaxs; // 0xdfc	
	float m_flRespawnDuration; // 0xe08	
	
	// Datamap fields:
	// void CPhysicsPropRespawnableMaterialize; // 0x0
};

