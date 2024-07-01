#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
// Has VTable
class C_PointCameraVFOV : public C_PointCamera
{
public:
	float m_flVerticalFOV; // 0x598	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x578
	// float m_flDofFarBlurry; // 0x57c
	// float m_flDofTiltToGround; // 0x580
};

