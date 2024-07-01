#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
class CPhysBallSocket : public CPhysConstraint
{
public:
	float m_flJointFriction; // 0x530	
	bool m_bEnableSwingLimit; // 0x534	
private:
	[[maybe_unused]] uint8_t __pad0535[0x3]; // 0x535
public:
	float m_flSwingLimit; // 0x538	
	bool m_bEnableTwistLimit; // 0x53c	
private:
	[[maybe_unused]] uint8_t __pad053d[0x3]; // 0x53d
public:
	float m_flMinTwistAngle; // 0x540	
	float m_flMaxTwistAngle; // 0x544	
};

