#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CPointCameraVFOV : public CPointCamera
{
public:
	float m_flVerticalFOV; // 0x520	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x500
	// float m_flDofFarBlurry; // 0x504
	// float m_flDofTiltToGround; // 0x508
};

