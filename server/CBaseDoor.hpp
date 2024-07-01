#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d0
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class CBaseDoor : public CBaseToggle
{
private:
	[[maybe_unused]] uint8_t __pad07c8[0x10]; // 0x7c8
public:
	QAngle m_angMoveEntitySpace; // 0x7d8	
	Vector m_vecMoveDirParentSpace; // 0x7e4	
	locksound_t m_ls; // 0x7f0	
	bool m_bForceClosed; // 0x810	
	bool m_bDoorGroup; // 0x811	
	bool m_bLocked; // 0x812	
	bool m_bIgnoreDebris; // 0x813	
	FuncDoorSpawnPos_t m_eSpawnPosition; // 0x814	
	float m_flBlockDamage; // 0x818	
private:
	[[maybe_unused]] uint8_t __pad081c[0x4]; // 0x81c
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x820	
	CUtlSymbolLarge m_NoiseArrived; // 0x828	
	CUtlSymbolLarge m_NoiseMovingClosed; // 0x830	
	CUtlSymbolLarge m_NoiseArrivedClosed; // 0x838	
	CUtlSymbolLarge m_ChainTarget; // 0x840	
	CEntityIOOutput m_OnBlockedClosing; // 0x848	
	CEntityIOOutput m_OnBlockedOpening; // 0x870	
	CEntityIOOutput m_OnUnblockedClosing; // 0x898	
	CEntityIOOutput m_OnUnblockedOpening; // 0x8c0	
	CEntityIOOutput m_OnFullyClosed; // 0x8e8	
	CEntityIOOutput m_OnFullyOpen; // 0x910	
	CEntityIOOutput m_OnClose; // 0x938	
	CEntityIOOutput m_OnOpen; // 0x960	
	CEntityIOOutput m_OnLockedUse; // 0x988	
	bool m_bLoopMoveSound; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b1[0x17]; // 0x9b1
public:
	bool m_bCreateNavObstacle; // 0x9c8	
	bool m_isChaining; // 0x9c9	
	// MNetworkEnable
	bool m_bIsUsable; // 0x9ca	
	
	// Datamap fields:
	// void m_nMovingSoundGUID; // 0x9b4
	//  m_ls.sLockedSound; // 0x7f8
	//  m_ls.sUnlockedSound; // 0x800
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

