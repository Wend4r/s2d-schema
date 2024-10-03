#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x570
// Has VTable
class CPhysBallSocket : public CPhysConstraint
{
public:
	float m_flJointFriction; // 0x558	
	bool m_bEnableSwingLimit; // 0x55c	
private:
	[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
public:
	float m_flSwingLimit; // 0x560	
	bool m_bEnableTwistLimit; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	float m_flMinTwistAngle; // 0x568	
	float m_flMaxTwistAngle; // 0x56c	
};

