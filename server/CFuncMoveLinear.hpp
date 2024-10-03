#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x878
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkOverride "m_fFlags CBaseEntity"
class CFuncMoveLinear : public CBaseToggle
{
public:
	MoveLinearAuthoredPos_t m_authoredPosition; // 0x7d0	
	QAngle m_angMoveEntitySpace; // 0x7d4	
	Vector m_vecMoveDirParentSpace; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07ec[0x4]; // 0x7ec
public:
	CUtlSymbolLarge m_soundStart; // 0x7f0	
	CUtlSymbolLarge m_soundStop; // 0x7f8	
	CUtlSymbolLarge m_currentSound; // 0x800	
	float m_flBlockDamage; // 0x808	
	float m_flStartPosition; // 0x80c	
private:
	[[maybe_unused]] uint8_t __pad0810[0x8]; // 0x810
public:
	CEntityIOOutput m_OnFullyOpen; // 0x818	
	CEntityIOOutput m_OnFullyClosed; // 0x840	
	bool m_bCreateMovableNavMesh; // 0x868	
	bool m_bCreateNavObstacle; // 0x869	
	
	// Datamap fields:
	// float m_flMoveDistance; // 0x754
	// bool movewithoutpushingblockers; // 0x7fffffff
	// void CFuncMoveLinearNavObstacleThink; // 0x0
	// void CFuncMoveLinearNavMovableThink; // 0x0
	// void InputOpen; // 0x0
	// void InputClose; // 0x0
	// float InputSetPosition; // 0x0
	// float InputSetSpeed; // 0x0
	// CUtlSymbolLarge InputTeleportToTarget; // 0x0
	// float InputResetPosition; // 0x0
	// float InputSetMoveDistanceFromStart; // 0x0
	// float InputSetMoveDistanceFromEnd; // 0x0
	// void CFuncMoveLinearStopMoveSound; // 0x0
};

