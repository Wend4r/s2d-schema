#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0xa40
// Has VTable
class CFuncMover : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iszPathName; // 0x7b8	
	CHandle< CPathMover > m_hPathMover; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c4[0x4]; // 0x7c4
public:
	CUtlSymbolLarge m_iszPathNodeStart; // 0x7c8	
	CUtlSymbolLarge m_iszPathNodeEnd; // 0x7d0	
	CFuncMover::Move_t m_eMoveType; // 0x7d8	
	bool m_bIsReversing; // 0x7dc	
private:
	[[maybe_unused]] uint8_t __pad07dd[0x3]; // 0x7dd
public:
	Vector m_vTarget; // 0x7e0	
	float m_flStartSpeed; // 0x7ec	
	float m_flPathLocation; // 0x7f0	
	float m_flT; // 0x7f4	
	int32_t m_nCurrentNodeIndex; // 0x7f8	
	int32_t m_nPreviousNodeIndex; // 0x7fc	
	SolidType_t m_eSolidType; // 0x800	
	bool m_bIsMoving; // 0x801	
private:
	[[maybe_unused]] uint8_t __pad0802[0x2]; // 0x802
public:
	float m_flTimeToReachMaxSpeed; // 0x804	
	float m_flDistanceToReachMaxSpeed; // 0x808	
	float m_flTimeToReachZeroSpeed; // 0x80c	
	float m_flDistanceToReachZeroSpeed; // 0x810	
	GameTime_t m_flTimeMovementStart; // 0x814	
	GameTime_t m_flTimeMovementStop; // 0x818	
	CHandle< CMoverPathNode > m_hStopAtNode; // 0x81c	
	float m_flPathLocationToBeginStop; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
public:
	CUtlSymbolLarge m_iszStartForwardSound; // 0x828	
	CUtlSymbolLarge m_iszLoopForwardSound; // 0x830	
	CUtlSymbolLarge m_iszStopForwardSound; // 0x838	
	CUtlSymbolLarge m_iszStartReverseSound; // 0x840	
	CUtlSymbolLarge m_iszLoopReverseSound; // 0x848	
	CUtlSymbolLarge m_iszStopReverseSound; // 0x850	
	CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad0860[0x8]; // 0x860
public:
	CEntityIOOutput m_OnMovementEnd; // 0x868	
	bool m_bStartAtClosestPoint; // 0x890	
	bool m_bStartAtEnd; // 0x891	
private:
	[[maybe_unused]] uint8_t __pad0892[0x2]; // 0x892
public:
	CFuncMover::OrientationUpdate_t m_eOrientationUpdate; // 0x894	
	GameTime_t m_flTimeStartOrientationChange; // 0x898	
	float m_flTimeToBlendToNewOrientation; // 0x89c	
	float m_flDurationBlendToNewOrientationRan; // 0x8a0	
private:
	[[maybe_unused]] uint8_t __pad08a4[0xc]; // 0x8a4
public:
	Quaternion m_qOriginalOrientation; // 0x8b0	
	bool m_bCreateMovableNavMesh; // 0x8c0	
private:
	[[maybe_unused]] uint8_t __pad08c1[0x7]; // 0x8c1
public:
	CEntityIOOutput m_OnNodePassed; // 0x8c8	
	CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x8f0	
	CHandle< CBaseEntity > m_hOrientationMatchEntity; // 0x8f8	
	float m_flTimeToTraverseToNextNode; // 0x8fc	
	Vector m_vLerpToNewPositionStart; // 0x900	
	Vector m_vLerpToNewPositionEnd; // 0x90c	
	float m_flLerpToPositionT; // 0x918	
	float m_flLerpToPositionDeltaT; // 0x91c	
	CEntityIOOutput m_OnLerpToPositionComplete; // 0x920	
	bool m_bIsPaused; // 0x948	
private:
	[[maybe_unused]] uint8_t __pad0949[0x3]; // 0x949
public:
	CFuncMover::TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x94c	
	int32_t m_nDelayedTeleportToNode; // 0x950	
	bool m_bIsVerboseLogging; // 0x954	
private:
	[[maybe_unused]] uint8_t __pad0955[0x3]; // 0x955
public:
	CEntityIOOutput m_OnStart; // 0x958	
	CEntityIOOutput m_OnStartForward; // 0x980	
	CEntityIOOutput m_OnStartReverse; // 0x9a8	
	CEntityIOOutput m_OnStop; // 0x9d0	
	CEntityIOOutput m_OnStopped; // 0x9f8	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStartForward; // 0x0
	// void InputStartReverse; // 0x0
	// void InputStop; // 0x0
	// void InputToggle; // 0x0
	// void InputToggleDirection; // 0x0
	// void InputPause; // 0x0
	// void InputUnpause; // 0x0
	// CUtlSymbolLarge InputTeleportToPathNode; // 0x0
	// CUtlSymbolLarge InputMoveToPathNode; // 0x0
	// CUtlSymbolLarge InputTransitionToPathNode; // 0x0
	// CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x0
	// CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetSpeedImmediate; // 0x0
	// float InputSetTimeToReachMaxSpeed; // 0x0
	// float InputSetTimeToBlendToNewOrientation; // 0x0
	// int32_t InputSetOrientationMode; // 0x0
	// void CFuncMoverMoveThink; // 0x0
	// void CFuncMoverLerpToNewPosition; // 0x0
};

