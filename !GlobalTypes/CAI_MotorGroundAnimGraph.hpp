#pragma once

#include <cstdint>

struct CAI_MotorGroundAnimGraph_State_Idle;
struct CAI_MotorGroundAnimGraph_State_IdleTurn;
struct CAI_MotorGroundAnimGraph_State_Loop;
struct CAI_MotorGroundAnimGraph_State_Start;
struct CAI_MotorGroundAnimGraph_State_Stop;
struct CAI_MotorGroundAnimGraph_State_InstantStop;
struct CAI_MotorGroundAnimGraph_State_Hop;
struct CAI_MotorGroundAnimGraph_State_MovePerformance;
struct CAI_MotorGroundAnimGraph_State_PlantedTurn;
struct CAI_MotorGroundAnimGraph_State_Other;
struct CFloatExponentialMovingAverage;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x310
class CAI_MotorGroundAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // 0x10	
	// -> m_eType - 0x50
	// -> m_vOriginalTargetFacingPosition - 0x54
	// -> m_vTargetFacingPosition - 0x60
	// -> m_flOriginalAngleDelta - 0x6c
	// -> m_flTurnSpeed - 0x70
	// -> m_bWasBlockIdleTurnTagActive - 0x74
	// -> m_bWasBlockIdleTagActive - 0x75
	CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // 0x30	
	CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // 0x78	
	CAI_MotorGroundAnimGraph_State_Start m_stateStart; // 0xa0	
	// -> m_vGoalPosition - 0xe8
	// -> m_vArrivalDirection - 0xf4
	// -> m_bPathChanged - 0x100
	CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // 0xc8	
	CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop; // 0x120	
	CAI_MotorGroundAnimGraph_State_Hop m_stateHop; // 0x178	
	// -> m_bWasMovingOffPath - 0x1f0
	// -> m_bRepathed - 0x1f1
	// -> m_sHandshake - 0x1f8
	// -> m_dynamicSettings - 0x200
	CAI_MotorGroundAnimGraph_State_MovePerformance m_stateMovePerformance; // 0x1d0	
	// -> m_bRepathed - 0x258
	// -> m_bPathChanged - 0x259
	CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn; // 0x238	
	CAI_MotorGroundAnimGraph_State_Other m_stateOther; // 0x260	
private:
	[[maybe_unused]] uint8_t __pad0280[0x18]; // 0x280
public:
	int32_t m_nCurrentState; // 0x298	
	float m_flDistanceCoveredInCurrentState; // 0x29c	
	bool m_bEnableStop; // 0x2a0	
	bool m_bEnableStart; // 0x2a1	
	bool m_bHadPath; // 0x2a2	
	bool m_bEnableAdvancedFeatures; // 0x2a3	
	AI_MotorGroundAnimGraph_Flags_t m_eFlags; // 0x2a4	
	Vector m_vPreviousPosition; // 0x2a8	
private:
	[[maybe_unused]] uint8_t __pad02b4[0x4]; // 0x2b4
public:
	float m_flCurrentLean; // 0x2b8	
	RotationVector m_vDesiredMovementHeadingChangeVelocity; // 0x2bc	
	CFloatExponentialMovingAverage m_smoothedDesiredMoveHeading; // 0x2c8	
};

