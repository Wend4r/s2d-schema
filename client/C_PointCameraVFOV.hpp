#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
class C_PointCameraVFOV : public C_PointCamera
{
public:
	float m_flVerticalFOV; // 0x570	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x550
	// float m_flDofFarBlurry; // 0x554
	// float m_flDofTiltToGround; // 0x558
};

