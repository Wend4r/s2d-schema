#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x550
// Has VTable
class CPhysBallSocket : public CPhysConstraint
{
public:
	float m_flJointFriction; // 0x538	
	bool m_bEnableSwingLimit; // 0x53c	
private:
	[[maybe_unused]] uint8_t __pad053d[0x3]; // 0x53d
public:
	float m_flSwingLimit; // 0x540	
	bool m_bEnableTwistLimit; // 0x544	
private:
	[[maybe_unused]] uint8_t __pad0545[0x3]; // 0x545
public:
	float m_flMinTwistAngle; // 0x548	
	float m_flMaxTwistAngle; // 0x54c	
};

