#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c0
// Has VTable
class C_PointCameraVFOV : public C_PointCamera
{
public:
	float m_flVerticalFOV; // 0x5b8	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x598
	// float m_flDofFarBlurry; // 0x59c
	// float m_flDofTiltToGround; // 0x5a0
};

