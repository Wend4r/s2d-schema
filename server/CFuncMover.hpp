#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x850
// Has VTable
class CFuncMover : public CBaseModelEntity
{
public:
	bool m_bCreateMovableNavMesh; // 0x750	
private:
	[[maybe_unused]] uint8_t __pad0751[0x7]; // 0x751
public:
	CUtlSymbolLarge m_iszPathName; // 0x758	
	CHandle< CPathMover > m_hPathMover; // 0x760	
private:
	[[maybe_unused]] uint8_t __pad0764[0x4]; // 0x764
public:
	CUtlSymbolLarge m_iszPathNodeStart; // 0x768	
	CFuncMover::Move_t m_eMoveType; // 0x770	
	bool m_bIsReversing; // 0x774	
private:
	[[maybe_unused]] uint8_t __pad0775[0x3]; // 0x775
public:
	Vector m_vTarget; // 0x778	
	float m_flStartSpeed; // 0x784	
	float m_flPathLocation; // 0x788	
	float m_flT; // 0x78c	
	int32_t m_nCurrentNodeIndex; // 0x790	
	int32_t m_nPreviousNodeIndex; // 0x794	
	bool m_bFixedOrientation; // 0x798	
	bool m_bFixedPitch; // 0x799	
	SolidType_t m_eSolidType; // 0x79a	
	bool m_bIsMoving; // 0x79b	
	float m_flTimeToReachMaxSpeed; // 0x79c	
	float m_flDistanceToReachMaxSpeed; // 0x7a0	
	float m_flTimeToReachZeroSpeed; // 0x7a4	
	float m_flDistanceToReachZeroSpeed; // 0x7a8	
	GameTime_t m_flTimeMovementStart; // 0x7ac	
	GameTime_t m_flTimeMovementStop; // 0x7b0	
	CHandle< CMoverPathNode > m_hStopAtNode; // 0x7b4	
	float m_flPathLocationToBeginStop; // 0x7b8	
private:
	[[maybe_unused]] uint8_t __pad07bc[0x4]; // 0x7bc
public:
	CUtlSymbolLarge m_iszStartForwardSound; // 0x7c0	
	CUtlSymbolLarge m_iszLoopForwardSound; // 0x7c8	
	CUtlSymbolLarge m_iszStopForwardSound; // 0x7d0	
	CUtlSymbolLarge m_iszStartReverseSound; // 0x7d8	
	CUtlSymbolLarge m_iszLoopReverseSound; // 0x7e0	
	CUtlSymbolLarge m_iszStopReverseSound; // 0x7e8	
	CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad07f8[0x8]; // 0x7f8
public:
	CEntityIOOutput m_OnMovementEnd; // 0x800	
	bool m_bStartAtEnd; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0829[0x3]; // 0x829
public:
	CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // 0x82c	
	GameTime_t m_flTimeStartOrientationChange; // 0x830	
	float m_flTimeToBlendToNewOrientation; // 0x834	
	float m_flDurationBlendToNewOrientationRan; // 0x838	
private:
	[[maybe_unused]] uint8_t __pad083c[0x4]; // 0x83c
public:
	Quaternion m_qOriginalOrientation; // 0x840	
	
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

