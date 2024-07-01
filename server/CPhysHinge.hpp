#pragma once

#include <cstdint>

struct ConstraintSoundInfo;
struct CEntityIOOutput;
struct constraint_hingeparams_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6d0
// Has VTable
class CPhysHinge : public CPhysConstraint
{
private:
	[[maybe_unused]] uint8_t __pad0530[0x8]; // 0x530
public:
	ConstraintSoundInfo m_soundInfo; // 0x538	
	CEntityIOOutput m_NotifyMinLimitReached; // 0x5c0	
	CEntityIOOutput m_NotifyMaxLimitReached; // 0x5e8	
	bool m_bAtMinLimit; // 0x610	
	bool m_bAtMaxLimit; // 0x611	
private:
	[[maybe_unused]] uint8_t __pad0612[0x2]; // 0x612
public:
	constraint_hingeparams_t m_hinge; // 0x614	
	float m_hingeFriction; // 0x654	
	float m_systemLoadScale; // 0x658	
	bool m_bIsAxisLocal; // 0x65c	
private:
	[[maybe_unused]] uint8_t __pad065d[0x3]; // 0x65d
public:
	float m_flMinRotation; // 0x660	
	float m_flMaxRotation; // 0x664	
	float m_flInitialRotation; // 0x668	
	float m_flMotorFrequency; // 0x66c	
	float m_flMotorDampingRatio; // 0x670	
	float m_flAngleSpeed; // 0x674	
	float m_flAngleSpeedThreshold; // 0x678	
private:
	[[maybe_unused]] uint8_t __pad067c[0x4]; // 0x67c
public:
	CEntityIOOutput m_OnStartMoving; // 0x680	
	CEntityIOOutput m_OnStopMoving; // 0x6a8	
	
	// Datamap fields:
	// Vector m_hinge.worldPosition; // 0x614
	// Vector m_hinge.worldAxisDirection; // 0x620
	// float InputSetMotorTargetAngle; // 0x0
	// float InputSetVelocity; // 0x0
	// float InputSetHingeFriction; // 0x0
	// float InputSetMinLimit; // 0x0
	// float InputSetMaxLimit; // 0x0
	// void CPhysHingeSoundThink; // 0x0
	// void CPhysHingeLimitThink; // 0x0
	// void CPhysHingeMoveThink; // 0x0
};

