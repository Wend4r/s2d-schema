#pragma once

#include <cstdint>

struct ConstraintSoundInfo;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x5e8
// Has VTable
class CPhysSlideConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0530[0x8]; // 0x530
public:
	Vector m_axisEnd; // 0x538	
	float m_slideFriction; // 0x544	
	float m_systemLoadScale; // 0x548	
	float m_initialOffset; // 0x54c	
	bool m_bEnableLinearConstraint; // 0x550	
	bool m_bEnableAngularConstraint; // 0x551	
private:
	[[maybe_unused]] uint8_t __pad0552[0x2]; // 0x552
public:
	float m_flMotorFrequency; // 0x554	
	float m_flMotorDampingRatio; // 0x558	
	bool m_bUseEntityPivot; // 0x55c	
private:
	[[maybe_unused]] uint8_t __pad055d[0x3]; // 0x55d
public:
	ConstraintSoundInfo m_soundInfo; // 0x560	
	
	// Datamap fields:
	// float InputSetOffset; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetSlideFriction; // 0x0
	// void CPhysSlideConstraintSoundThink; // 0x0
};

