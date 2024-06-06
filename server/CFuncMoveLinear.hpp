#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x838
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkOverride "m_fFlags CBaseEntity"
class CFuncMoveLinear : public CBaseToggle
{
public:
	MoveLinearAuthoredPos_t m_authoredPosition; // 0x790	
	QAngle m_angMoveEntitySpace; // 0x794	
	Vector m_vecMoveDirParentSpace; // 0x7a0	
private:
	[[maybe_unused]] uint8_t __pad07ac[0x4]; // 0x7ac
public:
	CUtlSymbolLarge m_soundStart; // 0x7b0	
	CUtlSymbolLarge m_soundStop; // 0x7b8	
	CUtlSymbolLarge m_currentSound; // 0x7c0	
	float m_flBlockDamage; // 0x7c8	
	float m_flStartPosition; // 0x7cc	
private:
	[[maybe_unused]] uint8_t __pad07d0[0x8]; // 0x7d0
public:
	CEntityIOOutput m_OnFullyOpen; // 0x7d8	
	CEntityIOOutput m_OnFullyClosed; // 0x800	
	bool m_bCreateMovableNavMesh; // 0x828	
	bool m_bCreateNavObstacle; // 0x829	
	
	// Datamap fields:
	// float m_flMoveDistance; // 0x714
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

