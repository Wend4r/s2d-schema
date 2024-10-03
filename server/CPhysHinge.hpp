#pragma once

#include <cstdint>

struct ConstraintSoundInfo;
struct CEntityIOOutput;
struct constraint_hingeparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6f8
// Has VTable
class CPhysHinge : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0558[0x8]; // 0x558
public:
	ConstraintSoundInfo m_soundInfo; // 0x560	
	CEntityIOOutput m_NotifyMinLimitReached; // 0x5e8	
	CEntityIOOutput m_NotifyMaxLimitReached; // 0x610	
	bool m_bAtMinLimit; // 0x638	
	bool m_bAtMaxLimit; // 0x639	
private:
	[[maybe_unused]] uint8_t __pad063a[0x2]; // 0x63a
public:
	constraint_hingeparams_t m_hinge; // 0x63c	
	float m_hingeFriction; // 0x67c	
	float m_systemLoadScale; // 0x680	
	bool m_bIsAxisLocal; // 0x684	
private:
	[[maybe_unused]] uint8_t __pad0685[0x3]; // 0x685
public:
	float m_flMinRotation; // 0x688	
	float m_flMaxRotation; // 0x68c	
	float m_flInitialRotation; // 0x690	
	float m_flMotorFrequency; // 0x694	
	float m_flMotorDampingRatio; // 0x698	
	float m_flAngleSpeed; // 0x69c	
	float m_flAngleSpeedThreshold; // 0x6a0	
private:
	[[maybe_unused]] uint8_t __pad06a4[0x4]; // 0x6a4
public:
	CEntityIOOutput m_OnStartMoving; // 0x6a8	
	CEntityIOOutput m_OnStopMoving; // 0x6d0	
	
	// Datamap fields:
	// Vector m_hinge.worldPosition; // 0x63c
	// Vector m_hinge.worldAxisDirection; // 0x648
	// float InputSetMotorTargetAngle; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetHingeFriction; // 0x0
	// float InputSetMinLimit; // 0x0
	// float InputSetMaxLimit; // 0x0
	// void CPhysHingeSoundThink; // 0x0
	// void CPhysHingeLimitThink; // 0x0
	// void CPhysHingeMoveThink; // 0x0
};

