#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb0
// Has VTable
class C_IronSightController
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	bool m_bIronSightAvailable; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flIronSightAmount; // 0x14	
	float m_flIronSightAmountGained; // 0x18	
	float m_flIronSightAmountBiased; // 0x1c	
	float m_flIronSightAmount_Interpolated; // 0x20	
	float m_flIronSightAmountGained_Interpolated; // 0x24	
	float m_flIronSightAmountBiased_Interpolated; // 0x28	
	float m_flInterpolationLastUpdated; // 0x2c	
	QAngle m_angDeltaAverage[8]; // 0x30	
	QAngle m_angViewLast; // 0x90	
	Vector2D m_vecDotCoords; // 0x9c	
	float m_flDotBlur; // 0xa4	
	float m_flSpeedRatio; // 0xa8	
};

