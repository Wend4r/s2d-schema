#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_CSGO_TeamPreviewCamera : public C_CSGO_MapPreviewCameraPath
{
public:
	int32_t m_nVariant; // 0x5b0	
	bool m_bDofEnabled; // 0x5b4	
private:
	[[maybe_unused]] uint8_t __pad05b5[0x3]; // 0x5b5
public:
	float m_flDofNearBlurry; // 0x5b8	
	float m_flDofNearCrisp; // 0x5bc	
	float m_flDofFarCrisp; // 0x5c0	
	float m_flDofFarBlurry; // 0x5c4	
	float m_flDofTiltToGround; // 0x5c8	
};

