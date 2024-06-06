#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5b0
// Has VTable
class C_CSGO_MapPreviewCameraPath : public C_BaseEntity
{
public:
	float m_flZFar; // 0x548	
	float m_flZNear; // 0x54c	
	bool m_bLoop; // 0x550	
	bool m_bVerticalFOV; // 0x551	
	bool m_bConstantSpeed; // 0x552	
private:
	[[maybe_unused]] uint8_t __pad0553[0x1]; // 0x553
public:
	float m_flDuration; // 0x554	
private:
	[[maybe_unused]] uint8_t __pad0558[0x40]; // 0x558
public:
	float m_flPathLength; // 0x598	
	float m_flPathDuration; // 0x59c	
};

