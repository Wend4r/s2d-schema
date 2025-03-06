#pragma once

#include <cstdint>

struct CSimpleSimTimer;
struct CAI_MotorNavLink;
struct CAI_MotorTransition;
struct CAI_MotorGroundAnimGraph;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CAI_Motor : public CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x10]; // 0x40
public:
	float m_flMoveInterval; // 0x50	
	float m_flYawSpeed; // 0x54	
	Vector m_vMoveVel; // 0x58	
	Vector m_vMoveVelNavigation; // 0x64	
	Vector m_vecAngularVelocity; // 0x70	
	CSimpleSimTimer m_timerFloorPointCached; // 0x7c	
	Vector m_vFloorPointCached; // 0x84	
	bool m_bFloorPointCachingEnabled; // 0x90	
	bool m_bAllowFlyingAnimMovement; // 0x91	
private:
	[[maybe_unused]] uint8_t __pad0092[0x2a]; // 0x92
public:
	float m_flSpeed; // 0xbc	
	bool m_bMovementActive; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0x3]; // 0xc1
public:
	Vector m_vBoundaryDistCachedPos; // 0xc4	
	float m_flBoundaryDistCached; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
public:
	CAI_MotorNavLink m_motorNavLink; // 0xd8	
	CAI_MotorTransition m_motorTransition; // 0x150	
	CAI_MotorGroundAnimGraph m_motorGroundAnimgraph; // 0x1b0	
	bool m_bIsExecutingMoveSolve; // 0x4c0	
};

