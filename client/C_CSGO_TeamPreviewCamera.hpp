#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5f0
// Has VTable
class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath
{
public:
	int32_t m_nVariant; // 0x5d0	
	bool m_bDofEnabled; // 0x5d4	
private:
	[[maybe_unused]] uint8_t __pad05d5[0x3]; // 0x5d5
public:
	float m_flDofNearBlurry; // 0x5d8	
	float m_flDofNearCrisp; // 0x5dc	
	float m_flDofFarCrisp; // 0x5e0	
	float m_flDofFarBlurry; // 0x5e4	
	float m_flDofTiltToGround; // 0x5e8	
};

