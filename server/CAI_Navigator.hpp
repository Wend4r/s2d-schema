#pragma once

#include <cstdint>

struct CAI_Path;
struct CAI_WaypointList;
struct GameTime_t;
struct CSimTimer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x100
// Has VTable
class CAI_Navigator : public CAI_Component
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	float m_flGoalStoppingDistance; // 0x48	
	float m_flPathEndGoalRange; // 0x4c	
	float m_flPathEndGoalRange_Repathing; // 0x50	
	Navigation_t m_navType; // 0x54	
	bool m_bNavComplete; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad0059[0x1f]; // 0x59
public:
	CAI_Path* m_pPath; // 0x78	
private:
	[[maybe_unused]] uint8_t __pad0080[0x8]; // 0x80
public:
	CHandle< CBaseEntity > m_hLosTarget; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad008c[0x4]; // 0x8c
public:
	CAI_WaypointList m_interruptPathWaypoints; // 0x90	
	GameTime_t m_flLastSuccessfulSimplifyTime; // 0x98	
	GameTime_t m_flTimeLastAvoidanceTriangulate; // 0x9c	
	GameTime_t m_flLastMoveTime; // 0xa0	
	GameTime_t m_flStartWaitingForFacingTime; // 0xa4	
	bool m_bPeerMoveWait; // 0xa8	
private:
	[[maybe_unused]] uint8_t __pad00a9[0x3]; // 0xa9
public:
	CHandle< CBaseEntity > m_hPeerWaitingOn; // 0xac	
	CSimTimer m_PeerWaitMoveTimer; // 0xb0	
	CSimTimer m_PeerWaitClearTimer; // 0xbc	
	CSimTimer m_NextSidestepTimer; // 0xc8	
	CHandle< CBaseEntity > m_hBigStepGroundEnt; // 0xd4	
	CHandle< CBaseEntity > m_hLastBlockingEnt; // 0xd8	
	Vector m_vPosBeginFailedSteer; // 0xdc	
	GameTime_t m_timeBeginFailedSteer; // 0xe8	
	int32_t m_nNavFailCounter; // 0xec	
	GameTime_t m_flLastNavFailTime; // 0xf0	
	bool m_bShouldBruteForceFailedNav; // 0xf4	
	bool m_bNavChangedAlongPath; // 0xf5	
private:
	[[maybe_unused]] uint8_t __pad00f6[0x2]; // 0xf6
public:
	int32_t m_nPreviousCollisionGroup; // 0xf8	
	GameTime_t m_flLastNpcOverlapTime; // 0xfc	
};

