#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x560
// Has VTable
class CPhysWheelConstraint : public CPhysConstraint
{
public:
	float m_flSuspensionFrequency; // 0x530	
	float m_flSuspensionDampingRatio; // 0x534	
	float m_flSuspensionHeightOffset; // 0x538	
	bool m_bEnableSuspensionLimit; // 0x53c	
private:
	[[maybe_unused]] uint8_t __pad053d[0x3]; // 0x53d
public:
	float m_flMinSuspensionOffset; // 0x540	
	float m_flMaxSuspensionOffset; // 0x544	
	bool m_bEnableSteeringLimit; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad0549[0x3]; // 0x549
public:
	float m_flMinSteeringAngle; // 0x54c	
	float m_flMaxSteeringAngle; // 0x550	
	float m_flSteeringAxisFriction; // 0x554	
	float m_flSpinAxisFriction; // 0x558	
};

