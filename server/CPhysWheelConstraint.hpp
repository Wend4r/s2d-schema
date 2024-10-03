#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CPhysWheelConstraint : public CPhysConstraint
{
public:
	float m_flSuspensionFrequency; // 0x558	
	float m_flSuspensionDampingRatio; // 0x55c	
	float m_flSuspensionHeightOffset; // 0x560	
	bool m_bEnableSuspensionLimit; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	float m_flMinSuspensionOffset; // 0x568	
	float m_flMaxSuspensionOffset; // 0x56c	
	bool m_bEnableSteeringLimit; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0571[0x3]; // 0x571
public:
	float m_flMinSteeringAngle; // 0x574	
	float m_flMaxSteeringAngle; // 0x578	
	float m_flSteeringAxisFriction; // 0x57c	
	float m_flSpinAxisFriction; // 0x580	
};

