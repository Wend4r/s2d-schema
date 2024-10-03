#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CPointCameraVFOV : public CPointCamera
{
public:
	float m_flVerticalFOV; // 0x540	
	
	// Datamap fields:
	// float m_flDofFarCrisp; // 0x520
	// float m_flDofFarBlurry; // 0x524
	// float m_flDofTiltToGround; // 0x528
};

