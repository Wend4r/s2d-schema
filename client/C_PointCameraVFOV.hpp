#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_PointCameraVFOV : public C_PointCamera
{
public:
	float m_flVerticalFOV; // 0x5c8	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x5a8
	// float m_flDofFarBlurry; // 0x5ac
	// float m_flDofTiltToGround; // 0x5b0
};

