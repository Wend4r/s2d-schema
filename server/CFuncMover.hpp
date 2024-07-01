#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x838
// Has VTable
class CFuncMover : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iszPathName; // 0x748	
	CHandle< CPathMover > m_hPathMover; // 0x750	
private:
	[[maybe_unused]] uint8_t __pad0754[0x4]; // 0x754
public:
	CUtlSymbolLarge m_iszPathNodeStart; // 0x758	
	CFuncMover::Move_t m_eMoveType; // 0x760	
	bool m_bIsReversing; // 0x764	
private:
	[[maybe_unused]] uint8_t __pad0765[0x3]; // 0x765
public:
	Vector m_vTarget; // 0x768	
	float m_flStartSpeed; // 0x774	
	float m_flPathLocation; // 0x778	
	float m_flT; // 0x77c	
	int32_t m_nCurrentNodeIndex; // 0x780	
	int32_t m_nPreviousNodeIndex; // 0x784	
	bool m_bFixedOrientation; // 0x788	
	bool m_bFixedPitch; // 0x789	
	SolidType_t m_eSolidType; // 0x78a	
	bool m_bIsMoving; // 0x78b	
	float m_flTimeToReachMaxSpeed; // 0x78c	
	float m_flDistanceToReachMaxSpeed; // 0x790	
	float m_flTimeToReachZeroSpeed; // 0x794	
	float m_flDistanceToReachZeroSpeed; // 0x798	
	GameTime_t m_flTimeMovementStart; // 0x79c	
	GameTime_t m_flTimeMovementStop; // 0x7a0	
	CHandle< CMoverPathNode > m_hStopAtNode; // 0x7a4	
	float m_flPathLocationToBeginStop; // 0x7a8	
	bool m_bMatchPathNodeUp; // 0x7ac	
	bool m_bFacePlayer; // 0x7ad	
private:
	[[maybe_unused]] uint8_t __pad07ae[0x2]; // 0x7ae
public:
	GameTime_t m_flTimeStartRoll; // 0x7b0	
	Vector m_vOriginalUp; // 0x7b4	
	float m_flTimeToRollToNewUp; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c4[0x4]; // 0x7c4
public:
	CUtlSymbolLarge m_iszStartForwardSound; // 0x7c8	
	CUtlSymbolLarge m_iszLoopForwardSound; // 0x7d0	
	CUtlSymbolLarge m_iszStopForwardSound; // 0x7d8	
	CUtlSymbolLarge m_iszStartReverseSound; // 0x7e0	
	CUtlSymbolLarge m_iszLoopReverseSound; // 0x7e8	
	CUtlSymbolLarge m_iszStopReverseSound; // 0x7f0	
	CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad0800[0x8]; // 0x800
public:
	CEntityIOOutput m_OnMovementEnd; // 0x808	
	bool m_bStartAtEnd; // 0x830	
	
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
	// float InputSetTimeToRollToNewUp; // 0x0
	// void CFuncMoverMove; // 0x0
};

