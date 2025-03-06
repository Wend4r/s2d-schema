#pragma once

#include <cstdint>

struct CAI_Path;
struct CAI_WaypointList;
struct GameTime_t;
struct AI_NavGoal_t;
struct CSimTimer;
struct CNavSmartGoalHelper;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2b0
// Has VTable
class CAI_Navigator : public CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	float m_flGoalStoppingDistance; // 0x48	
	Navigation_t m_navType; // 0x4c	
	bool m_bNavComplete; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0051[0x27]; // 0x51
public:
	CAI_Path* m_pPath; // 0x78	
	CHandle< CBaseEntity > m_hLosTarget; // 0x80	
	Vector m_vThreatPos; // 0x84	
	CAI_WaypointList m_interruptPathWaypoints; // 0x90	
	GameTime_t m_flLastSuccessfulSimplifyTime; // 0x98	
	GameTime_t m_flTimeLastAvoidanceTriangulate; // 0x9c	
	GameTime_t m_flStartWaitingForFacingTime; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	AI_NavGoal_t m_queuedGoal; // 0xa8	
	AI_NavSetGoalFlags_t m_queuedGoalFlags; // 0x128	
	bool m_bQueuedGoalSuccess; // 0x12c	
private:
	[[maybe_unused]] uint8_t __pad012d[0x3]; // 0x12d
public:
	CGlobalSymbol m_sQueuedGoalName; // 0x130	
	bool m_bPeerMoveWait; // 0x138	
private:
	[[maybe_unused]] uint8_t __pad0139[0x3]; // 0x139
public:
	CHandle< CBaseEntity > m_hPeerWaitingOn; // 0x13c	
	CSimTimer m_PeerWaitMoveTimer; // 0x140	
	CSimTimer m_PeerWaitClearTimer; // 0x14c	
	CSimTimer m_NextSidestepTimer; // 0x158	
	CHandle< CBaseEntity > m_hBigStepGroundEnt; // 0x164	
	CHandle< CBaseEntity > m_hLastBlockingEnt; // 0x168	
	Vector m_vPosBeginFailedSteer; // 0x16c	
	GameTime_t m_timeBeginFailedSteer; // 0x178	
	int32_t m_nNavFailCounter; // 0x17c	
	GameTime_t m_flLastNavFailTime; // 0x180	
	bool m_bShouldBruteForceFailedNav; // 0x184	
	bool m_bNavChangedAlongPath; // 0x185	
private:
	[[maybe_unused]] uint8_t __pad0186[0x2]; // 0x186
public:
	int32_t m_nPreviousCollisionGroup; // 0x188	
	GameTime_t m_flLastNpcOverlapTime; // 0x18c	
	float m_flGoalTolerance; // 0x190	
	float m_flWaypointTolerance; // 0x194	
	Vector m_vGoalDirection; // 0x198	
	CHandle< CBaseEntity > m_hGoalDirectionTarget; // 0x1a4	
	float m_flGoalDirectionToleranceDot; // 0x1a8	
	StanceType_t m_eGoalStance; // 0x1ac	
	float m_flArrivalFlyingSpeedScale; // 0x1b0	
	float m_flPathEndGoalRange; // 0x1b4	
	float m_flPathEndGoalRange_Repathing; // 0x1b8	
	float m_flGoalMaxPathLength; // 0x1bc	
	float m_flGoalMaxTravelDist; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	CUtlString m_pathRestrictionTag; // 0x1c8	
private:
	[[maybe_unused]] uint8_t __pad01d0[0x18]; // 0x1d0
public:
	CNavSmartGoalHelper m_smartGoalHelper; // 0x1e8	
};

