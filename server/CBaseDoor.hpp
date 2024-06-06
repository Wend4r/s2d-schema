#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x998
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class CBaseDoor : public CBaseToggle
{
private:
	[[maybe_unused]] uint8_t __pad0790[0x10]; // 0x790
public:
	QAngle m_angMoveEntitySpace; // 0x7a0	
	Vector m_vecMoveDirParentSpace; // 0x7ac	
	locksound_t m_ls; // 0x7b8	
	bool m_bForceClosed; // 0x7d8	
	bool m_bDoorGroup; // 0x7d9	
	bool m_bLocked; // 0x7da	
	bool m_bIgnoreDebris; // 0x7db	
	FuncDoorSpawnPos_t m_eSpawnPosition; // 0x7dc	
	float m_flBlockDamage; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x7e8	
	CUtlSymbolLarge m_NoiseArrived; // 0x7f0	
	CUtlSymbolLarge m_NoiseMovingClosed; // 0x7f8	
	CUtlSymbolLarge m_NoiseArrivedClosed; // 0x800	
	CUtlSymbolLarge m_ChainTarget; // 0x808	
	CEntityIOOutput m_OnBlockedClosing; // 0x810	
	CEntityIOOutput m_OnBlockedOpening; // 0x838	
	CEntityIOOutput m_OnUnblockedClosing; // 0x860	
	CEntityIOOutput m_OnUnblockedOpening; // 0x888	
	CEntityIOOutput m_OnFullyClosed; // 0x8b0	
	CEntityIOOutput m_OnFullyOpen; // 0x8d8	
	CEntityIOOutput m_OnClose; // 0x900	
	CEntityIOOutput m_OnOpen; // 0x928	
	CEntityIOOutput m_OnLockedUse; // 0x950	
	bool m_bLoopMoveSound; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0x17]; // 0x979
public:
	bool m_bCreateNavObstacle; // 0x990	
	bool m_isChaining; // 0x991	
	// MNetworkEnable
	bool m_bIsUsable; // 0x992	
	
	// Datamap fields:
	// void m_nMovingSoundGUID; // 0x97c
	//  m_ls.sLockedSound; // 0x7c0
	//  m_ls.sUnlockedSound; // 0x7c8
	// void InputOpen; // 0x0
	// void InputClose; // 0x0
	// void InputToggle; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetToggleState; // 0x0
	// void CBaseDoorDoorTouch; // 0x0
	// void CBaseDoorDoorGoUp; // 0x0
	// void CBaseDoorDoorGoDown; // 0x0
	// void CBaseDoorDoorHitTop; // 0x0
	// void CBaseDoorDoorHitBottom; // 0x0
	// void CBaseDoorMovingSoundThink; // 0x0
	// void CBaseDoorCloseAreaPortalsThink; // 0x0
};

