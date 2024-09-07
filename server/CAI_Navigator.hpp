#pragma once

#include <cstdint>

struct CAI_Path;
struct CAI_WaypointList;
struct GameTime_t;
struct CSimTimer;
struct CNavSmartGoalHelper;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x170
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
	[[maybe_unused]] uint8_t __pad0051[0x1f]; // 0x51
public:
	CAI_Path* m_pPath; // 0x70	
	CHandle< CBaseEntity > m_hLosTarget; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
public:
	CAI_WaypointList m_interruptPathWaypoints; // 0x80	
	GameTime_t m_flLastSuccessfulSimplifyTime; // 0x88	
	GameTime_t m_flTimeLastAvoidanceTriangulate; // 0x8c	
	GameTime_t m_flLastMoveTime; // 0x90	
	GameTime_t m_flStartWaitingForFacingTime; // 0x94	
	bool m_bPeerMoveWait; // 0x98	
private:
	[[maybe_unused]] uint8_t __pad0099[0x3]; // 0x99
public:
	CHandle< CBaseEntity > m_hPeerWaitingOn; // 0x9c	
	CSimTimer m_PeerWaitMoveTimer; // 0xa0	
	CSimTimer m_PeerWaitClearTimer; // 0xac	
	CSimTimer m_NextSidestepTimer; // 0xb8	
	CHandle< CBaseEntity > m_hBigStepGroundEnt; // 0xc4	
	CHandle< CBaseEntity > m_hLastBlockingEnt; // 0xc8	
	Vector m_vPosBeginFailedSteer; // 0xcc	
	GameTime_t m_timeBeginFailedSteer; // 0xd8	
	int32_t m_nNavFailCounter; // 0xdc	
	GameTime_t m_flLastNavFailTime; // 0xe0	
	bool m_bShouldBruteForceFailedNav; // 0xe4	
	bool m_bNavChangedAlongPath; // 0xe5	
private:
	[[maybe_unused]] uint8_t __pad00e6[0x2]; // 0xe6
public:
	int32_t m_nPreviousCollisionGroup; // 0xe8	
	GameTime_t m_flLastNpcOverlapTime; // 0xec	
	float m_flGoalTolerance; // 0xf0	
	float m_flWaypointTolerance; // 0xf4	
	Vector m_vGoalDirection; // 0xf8	
	CHandle< CBaseEntity > m_hGoalDirectionTarget; // 0x104	
	float m_flGoalDirectionToleranceDot; // 0x108	
	float m_flPathEndGoalRange; // 0x10c	
	float m_flPathEndGoalRange_Repathing; // 0x110	
	bool m_bGoalRequiresCrouch; // 0x114	
private:
	[[maybe_unused]] uint8_t __pad0115[0x3]; // 0x115
public:
	float m_flGoalMaxPathLength; // 0x118	
	float m_flGoalMaxTravelDist; // 0x11c	
	CUtlString m_pathRestrictionTag; // 0x120	
private:
	[[maybe_unused]] uint8_t __pad0128[0x18]; // 0x128
public:
	CNavSmartGoalHelper m_smartGoalHelper; // 0x140	
};

