#pragma once

#include <cstdint>

struct ConstraintSoundInfo;
struct CEntityIOOutput;
struct constraint_hingeparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6d8
// Has VTable
class CPhysHinge : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0538[0x8]; // 0x538
public:
	ConstraintSoundInfo m_soundInfo; // 0x540	
	CEntityIOOutput m_NotifyMinLimitReached; // 0x5c8	
	CEntityIOOutput m_NotifyMaxLimitReached; // 0x5f0	
	bool m_bAtMinLimit; // 0x618	
	bool m_bAtMaxLimit; // 0x619	
private:
	[[maybe_unused]] uint8_t __pad061a[0x2]; // 0x61a
public:
	constraint_hingeparams_t m_hinge; // 0x61c	
	float m_hingeFriction; // 0x65c	
	float m_systemLoadScale; // 0x660	
	bool m_bIsAxisLocal; // 0x664	
private:
	[[maybe_unused]] uint8_t __pad0665[0x3]; // 0x665
public:
	float m_flMinRotation; // 0x668	
	float m_flMaxRotation; // 0x66c	
	float m_flInitialRotation; // 0x670	
	float m_flMotorFrequency; // 0x674	
	float m_flMotorDampingRatio; // 0x678	
	float m_flAngleSpeed; // 0x67c	
	float m_flAngleSpeedThreshold; // 0x680	
private:
	[[maybe_unused]] uint8_t __pad0684[0x4]; // 0x684
public:
	CEntityIOOutput m_OnStartMoving; // 0x688	
	CEntityIOOutput m_OnStopMoving; // 0x6b0	
	
	// Datamap fields:
	// Vector m_hinge.worldPosition; // 0x61c
	// Vector m_hinge.worldAxisDirection; // 0x628
	// float InputSetMotorTargetAngle; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetHingeFriction; // 0x0
	// float InputSetMinLimit; // 0x0
	// float InputSetMaxLimit; // 0x0
	// void CPhysHingeSoundThink; // 0x0
	// void CPhysHingeLimitThink; // 0x0
	// void CPhysHingeMoveThink; // 0x0
};

