#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x788
// Has VTable
class CFuncMover : public CBaseModelEntity
{
public:
	CUtlSymbolLarge m_iszPathName; // 0x710	
	CHandle< CPathMover > m_hPathMover; // 0x718	
private:
	[[maybe_unused]] uint8_t __pad071c[0x4]; // 0x71c
public:
	CUtlSymbolLarge m_iszPathNodeStart; // 0x720	
	CFuncMover::Move_t m_eMoveType; // 0x728	
	bool m_bIsReversing; // 0x72c	
private:
	[[maybe_unused]] uint8_t __pad072d[0x3]; // 0x72d
public:
	Vector m_vTarget; // 0x730	
	float m_flStartSpeed; // 0x73c	
	float m_flPathLocation; // 0x740	
	float m_flT; // 0x744	
	int32_t m_nCurrentNodeIndex; // 0x748	
	int32_t m_nPreviousNodeIndex; // 0x74c	
	bool m_bFixedOrientation; // 0x750	
	bool m_bFixedPitch; // 0x751	
	SolidType_t m_eSolidType; // 0x752	
	bool m_bIsMoving; // 0x753	
	float m_flTimeToReachMaxSpeed; // 0x754	
	float m_flTimeToReachZeroSpeed; // 0x758	
	GameTime_t m_flTimeMovementStart; // 0x75c	
	GameTime_t m_flTimeMovementStop; // 0x760	
	CHandle< CMoverPathNode > m_hStopAtNode; // 0x764	
	float m_flPathLocationToBeginStop; // 0x768	
	bool m_bMatchPathNodeUp; // 0x76c	
	bool m_bFacePlayer; // 0x76d	
private:
	[[maybe_unused]] uint8_t __pad076e[0x2]; // 0x76e
public:
	GameTime_t m_flTimeStartRoll; // 0x770	
	Vector m_vOriginalUp; // 0x774	
	float m_flTimeToRollToNewUp; // 0x780	
	
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
	// void CFuncMoverMove; // 0x0
};

