#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CPointCameraVFOV : public CPointCamera
{
public:
	float m_flVerticalFOV; // 0x518	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x4f8
	// float m_flDofFarBlurry; // 0x4fc
	// float m_flDofTiltToGround; // 0x500
};

