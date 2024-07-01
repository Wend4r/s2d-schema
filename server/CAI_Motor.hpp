#pragma once

#include <cstdint>

struct CSimpleSimTimer;
struct CAI_MotorNavLink;
struct CAI_MotorTransition;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1e0
// Has VTable
class CAI_Motor : public CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x10]; // 0x40
public:
	float m_flMoveInterval; // 0x50	
	Vector m_vIdealEntityFacing; // 0x54	
	float m_flYawSpeed; // 0x60	
	Vector m_vMoveVel; // 0x64	
	Vector m_vMoveVelNavigation; // 0x70	
	Vector m_vecAngularVelocity; // 0x7c	
	Vector m_vIdealClimbOrientation; // 0x88	
	CSimpleSimTimer m_timerFloorPointCached; // 0x94	
	Vector m_vFloorPointCached; // 0x9c	
private:
	[[maybe_unused]] uint8_t __pad00a8[0x24]; // 0xa8
public:
	float m_flSpeed; // 0xcc	
	bool m_bMovementActive; // 0xd0	
	bool m_bEmbeddedRecoveryEnabled; // 0xd1	
	bool m_pEnableForceFacing[2]; // 0xd2	
	uint8_t m_nEntityFacingLockCount; // 0xd4	
private:
	[[maybe_unused]] uint8_t __pad00d5[0x3]; // 0xd5
public:
	CUtlVector< ChoreoEntityFacing_t > m_vecChoreoEntityFacings; // 0xd8	
	Vector m_vBoundaryDistCachedPos; // 0xf0	
	float m_flBoundaryDistCached; // 0xfc	
	CAI_MotorNavLink m_motorNavLink; // 0x100	
	CAI_MotorTransition m_motorTransition; // 0x178	
	bool m_bIsExecutingMoveSolve; // 0x1d8	
};

