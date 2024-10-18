#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x890
// Has VTable
class CFuncMover : public CBaseModelEntity
{
public:
	bool m_bCreateMovableNavMesh; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x7]; // 0x791
public:
	CUtlSymbolLarge m_iszPathName; // 0x798	
	CHandle< CPathMover > m_hPathMover; // 0x7a0	
private:
	[[maybe_unused]] uint8_t __pad07a4[0x4]; // 0x7a4
public:
	CUtlSymbolLarge m_iszPathNodeStart; // 0x7a8	
	CFuncMover::Move_t m_eMoveType; // 0x7b0	
	bool m_bIsReversing; // 0x7b4	
private:
	[[maybe_unused]] uint8_t __pad07b5[0x3]; // 0x7b5
public:
	Vector m_vTarget; // 0x7b8	
	float m_flStartSpeed; // 0x7c4	
	float m_flPathLocation; // 0x7c8	
	float m_flT; // 0x7cc	
	int32_t m_nCurrentNodeIndex; // 0x7d0	
	int32_t m_nPreviousNodeIndex; // 0x7d4	
	bool m_bFixedOrientation; // 0x7d8	
	bool m_bFixedPitch; // 0x7d9	
	SolidType_t m_eSolidType; // 0x7da	
	bool m_bIsMoving; // 0x7db	
	float m_flTimeToReachMaxSpeed; // 0x7dc	
	float m_flDistanceToReachMaxSpeed; // 0x7e0	
	float m_flTimeToReachZeroSpeed; // 0x7e4	
	float m_flDistanceToReachZeroSpeed; // 0x7e8	
	GameTime_t m_flTimeMovementStart; // 0x7ec	
	GameTime_t m_flTimeMovementStop; // 0x7f0	
	CHandle< CMoverPathNode > m_hStopAtNode; // 0x7f4	
	float m_flPathLocationToBeginStop; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad07fc[0x4]; // 0x7fc
public:
	CUtlSymbolLarge m_iszStartForwardSound; // 0x800	
	CUtlSymbolLarge m_iszLoopForwardSound; // 0x808	
	CUtlSymbolLarge m_iszStopForwardSound; // 0x810	
	CUtlSymbolLarge m_iszStartReverseSound; // 0x818	
	CUtlSymbolLarge m_iszLoopReverseSound; // 0x820	
	CUtlSymbolLarge m_iszStopReverseSound; // 0x828	
	CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x830	
private:
	[[maybe_unused]] uint8_t __pad0838[0x8]; // 0x838
public:
	CEntityIOOutput m_OnMovementEnd; // 0x840	
	bool m_bStartAtEnd; // 0x868	
private:
	[[maybe_unused]] uint8_t __pad0869[0x3]; // 0x869
public:
	CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // 0x86c	
	GameTime_t m_flTimeStartOrientationChange; // 0x870	
	float m_flTimeToBlendToNewOrientation; // 0x874	
	float m_flDurationBlendToNewOrientationRan; // 0x878	
private:
	[[maybe_unused]] uint8_t __pad087c[0x4]; // 0x87c
public:
	Quaternion m_qOriginalOrientation; // 0x880	
	
	// Datamap fields:
	// void InputStartForward; // 0x0
	// void InputStartReverse; // 0x0
	// void InputStop; // 0x0
	// void InputToggle; // 0x0
	// CUtlSymbolLarge InputTeleportToPathNode; // 0x0
	// CUtlSymbolLarge InputMoveToPathNode; // 0x0
	// CUtlSymbolLarge InputTransitionToPathNode; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetSpeedImmediate; // 0x0
	// float InputSetTimeToReachMaxSpeed; // 0x0
	// float InputSetTimeToBlendToNewOrientation; // 0x0
	// void CFuncMoverMove; // 0x0
};

