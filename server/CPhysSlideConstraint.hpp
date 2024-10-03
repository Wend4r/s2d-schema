#pragma once

#include <cstdint>

struct ConstraintSoundInfo;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x610
// Has VTable
class CPhysSlideConstraint : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0558[0x8]; // 0x558
public:
	Vector m_axisEnd; // 0x560	
	float m_slideFriction; // 0x56c	
	float m_systemLoadScale; // 0x570	
	float m_initialOffset; // 0x574	
	bool m_bEnableLinearConstraint; // 0x578	
	bool m_bEnableAngularConstraint; // 0x579	
private:
	[[maybe_unused]] uint8_t __pad057a[0x2]; // 0x57a
public:
	float m_flMotorFrequency; // 0x57c	
	float m_flMotorDampingRatio; // 0x580	
	bool m_bUseEntityPivot; // 0x584	
private:
	[[maybe_unused]] uint8_t __pad0585[0x3]; // 0x585
public:
	ConstraintSoundInfo m_soundInfo; // 0x588	
	
	// Datamap fields:
	// float InputSetOffset; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetSlideFriction; // 0x0
	// void CPhysSlideConstraintSoundThink; // 0x0
};

