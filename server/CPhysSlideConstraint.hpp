#pragma once

#include <cstdint>

struct ConstraintSoundInfo;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5f0
// Has VTable
class CPhysSlideConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x8]; // 0x538
public:
	Vector m_axisEnd; // 0x540	
	float m_slideFriction; // 0x54c	
	float m_systemLoadScale; // 0x550	
	float m_initialOffset; // 0x554	
	bool m_bEnableLinearConstraint; // 0x558	
	bool m_bEnableAngularConstraint; // 0x559	
private:
	[[maybe_unused]] uint8_t __pad055a[0x2]; // 0x55a
public:
	float m_flMotorFrequency; // 0x55c	
	float m_flMotorDampingRatio; // 0x560	
	bool m_bUseEntityPivot; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	ConstraintSoundInfo m_soundInfo; // 0x568	
	
	// Datamap fields:
	// float InputSetOffset; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetSlideFriction; // 0x0
	// void CPhysSlideConstraintSoundThink; // 0x0
};

