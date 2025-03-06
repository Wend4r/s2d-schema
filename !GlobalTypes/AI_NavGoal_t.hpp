#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
struct AI_NavGoal_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
public:
	GoalType_t m_type; // 0x18	
	Vector m_vDest; // 0x1c	
	float m_flTolerance; // 0x28	
	float m_flPathEndGoalRange; // 0x2c	
	float m_flPathEndGoalRange_Repathing; // 0x30	
	AI_NavGoalFlags_t m_goalFlags; // 0x34	
	CHandle< CBaseEntity > m_pTarget; // 0x38	
	Vector m_vThreatPos; // 0x3c	
	float m_flMaxPathLength; // 0x48	
	float m_flMaxTravelDist; // 0x4c	
	float m_flMaxTravelDistAdditionalFromRepath; // 0x50	
	Vector m_vLimitRefPos; // 0x54	
	CUtlString m_markupTagRequired; // 0x60	
	Vector m_vArrivalDirection; // 0x68	
	float m_flArrivalDirectionToleranceDot; // 0x74	
	StanceType_t m_eArrivalStance; // 0x78	
	float m_flArrivalFlyingSpeedScale; // 0x7c	
};

