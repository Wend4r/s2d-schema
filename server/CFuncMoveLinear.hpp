#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8b8
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkOverride "m_fFlags CBaseEntity"
class CFuncMoveLinear : public CBaseToggle
{
public:
	MoveLinearAuthoredPos_t m_authoredPosition; // 0x810	
	QAngle m_angMoveEntitySpace; // 0x814	
	Vector m_vecMoveDirParentSpace; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad082c[0x4]; // 0x82c
public:
	CUtlSymbolLarge m_soundStart; // 0x830	
	CUtlSymbolLarge m_soundStop; // 0x838	
	CUtlSymbolLarge m_currentSound; // 0x840	
	float m_flBlockDamage; // 0x848	
	float m_flStartPosition; // 0x84c	
private:
	[[maybe_unused]] uint8_t __pad0850[0x8]; // 0x850
public:
	CEntityIOOutput m_OnFullyOpen; // 0x858	
	CEntityIOOutput m_OnFullyClosed; // 0x880	
	bool m_bCreateMovableNavMesh; // 0x8a8	
	bool m_bCreateNavObstacle; // 0x8a9	
	
	// Datamap fields:
	// float m_flMoveDistance; // 0x794
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

