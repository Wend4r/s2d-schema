#pragma once

#include <cstdint>

struct NavGravity_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
struct AI_Waypoint_t
{
public:
	Vector m_vPos; // 0x0	
	WaypointFlags_t m_fWaypointFlags; // 0xc	
	Navigation_t m_nWpType; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x14]; // 0x14
public:
	int32_t m_nNodeId; // 0x28	
	float m_flYaw; // 0x2c	
	float m_flBoundaryDist; // 0x30	
	float m_flPathDistGoal; // 0x34	
	CHandle< CBaseEntity > m_hPathCorner; // 0x38	
	CHandle< CBaseEntity > m_hData; // 0x3c	
	uint32_t m_nGroundNavAreaId; // 0x40	
	uint32_t m_nNavLinkAreaId; // 0x44	
	NavGravity_t m_gravityOverride; // 0x48	
	bool m_bGravityOverrideSet; // 0x58	
};

