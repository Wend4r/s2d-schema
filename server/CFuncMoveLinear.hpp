#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x870
// Has VTable
// 
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecVelocity"
// MNetworkOverride "m_fFlags CBaseEntity"
class CFuncMoveLinear : public CBaseToggle
{
public:
	MoveLinearAuthoredPos_t m_authoredPosition; // 0x7c8	
	QAngle m_angMoveEntitySpace; // 0x7cc	
	Vector m_vecMoveDirParentSpace; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CUtlSymbolLarge m_soundStart; // 0x7e8	
	CUtlSymbolLarge m_soundStop; // 0x7f0	
	CUtlSymbolLarge m_currentSound; // 0x7f8	
	float m_flBlockDamage; // 0x800	
	float m_flStartPosition; // 0x804	
private:
	[[maybe_unused]] uint8_t __pad0808[0x8]; // 0x808
public:
	CEntityIOOutput m_OnFullyOpen; // 0x810	
	CEntityIOOutput m_OnFullyClosed; // 0x838	
	bool m_bCreateMovableNavMesh; // 0x860	
	bool m_bCreateNavObstacle; // 0x861	
	
	// Datamap fields:
	// float m_flMoveDistance; // 0x74c
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

