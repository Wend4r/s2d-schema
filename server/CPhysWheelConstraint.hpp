#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x568
// Has VTable
class CPhysWheelConstraint : public CPhysConstraint
{
public:
	float m_flSuspensionFrequency; // 0x538	
	float m_flSuspensionDampingRatio; // 0x53c	
	float m_flSuspensionHeightOffset; // 0x540	
	bool m_bEnableSuspensionLimit; // 0x544	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	float m_flMinSuspensionOffset; // 0x548	
	float m_flMaxSuspensionOffset; // 0x54c	
	bool m_bEnableSteeringLimit; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0551[0x3]; // 0x551
public:
	float m_flMinSteeringAngle; // 0x554	
	float m_flMaxSteeringAngle; // 0x558	
	float m_flSteeringAxisFriction; // 0x55c	
	float m_flSpinAxisFriction; // 0x560	
};

