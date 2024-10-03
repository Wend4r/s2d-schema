#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d0
// Has VTable
class C_CSGO_MapPreviewCameraPath : public C_BaseEntity
{
public:
	float m_flZFar; // 0x568	
	float m_flZNear; // 0x56c	
	bool m_bLoop; // 0x570	
	bool m_bVerticalFOV; // 0x571	
	bool m_bConstantSpeed; // 0x572	
private:
	[[maybe_unused]] uint8_t __pad0573[0x1]; // 0x573
public:
	float m_flDuration; // 0x574	
private:
	[[maybe_unused]] uint8_t __pad0578[0x40]; // 0x578
public:
	float m_flPathLength; // 0x5b8	
	float m_flPathDuration; // 0x5bc	
};

