#pragma once

#include <cstdint>

struct CAI_WaypointList;
struct NavGravity_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x108
// Has VTable
class CAI_Path
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CAI_WaypointList m_Waypoints; // 0x8	
	Vector m_vPrevWaypoint; // 0x10	
	Vector m_vPrevWaypointBase; // 0x1c	
	CAI_WaypointList m_WaypointsLocal; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	uint32_t m_nLocalPathHash; // 0x38	
	float m_flGoalTolerance; // 0x3c	
	float m_flWaypointTolerance; // 0x40	
	CHandle< CBaseEntity > m_hTarget; // 0x44	
	Vector m_vTargetOffset; // 0x48	
	bool m_bArrivalRequiresCrouch; // 0x54	
	bool m_bGoalPosSet; // 0x55	
private:
	[[maybe_unused]] uint8_t __pad0056[0x2]; // 0x56
public:
	Vector m_vGoalActualPos; // 0x58	
	Vector m_vGoalBasePos; // 0x64	
	Vector m_vGoalActualPos_EntityInitial; // 0x70	
	Vector m_vGoalBasePos_EntityInitial; // 0x7c	
	Vector m_vGoalPosBlocked; // 0x88	
	NavGravity_t m_GravityAtGoalPos; // 0x94	
	bool m_bGoalTypeSet; // 0xa4	
private:
	[[maybe_unused]] uint8_t __pad00a5[0x3]; // 0xa5
public:
	GoalType_t m_goalType; // 0xa8	
	AI_NavGoalFlags_t m_goalFlags; // 0xac	
	CUtlString m_pathRestrictionTag; // 0xb0	
	float m_flGoalMaxPathLength; // 0xb8	
	float m_flGoalMaxTravelDist; // 0xbc	
	GameTime_t m_flGoalChangeTime; // 0xc0	
	GameTime_t m_flPathChangeTime; // 0xc4	
	float m_flDistAdvancedToCurWaypoint; // 0xc8	
	Vector m_vGoalDirection; // 0xcc	
	CHandle< CBaseEntity > m_hGoalDirectionTarget; // 0xd8	
	float m_flGoalDirectionToleranceDot; // 0xdc	
private:
	[[maybe_unused]] uint8_t __pad00e0[0x8]; // 0xe0
public:
	uint32_t m_nConstrainedToMovableMeshId; // 0xe8	
};

