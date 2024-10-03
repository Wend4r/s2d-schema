#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9d8
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class CBaseDoor : public CBaseToggle
{
private:
	[[maybe_unused]] uint8_t __pad07d0[0x10]; // 0x7d0
public:
	QAngle m_angMoveEntitySpace; // 0x7e0	
	Vector m_vecMoveDirParentSpace; // 0x7ec	
	locksound_t m_ls; // 0x7f8	
	bool m_bForceClosed; // 0x818	
	bool m_bDoorGroup; // 0x819	
	bool m_bLocked; // 0x81a	
	bool m_bIgnoreDebris; // 0x81b	
	FuncDoorSpawnPos_t m_eSpawnPosition; // 0x81c	
	float m_flBlockDamage; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x828	
	CUtlSymbolLarge m_NoiseArrived; // 0x830	
	CUtlSymbolLarge m_NoiseMovingClosed; // 0x838	
	CUtlSymbolLarge m_NoiseArrivedClosed; // 0x840	
	CUtlSymbolLarge m_ChainTarget; // 0x848	
	CEntityIOOutput m_OnBlockedClosing; // 0x850	
	CEntityIOOutput m_OnBlockedOpening; // 0x878	
	CEntityIOOutput m_OnUnblockedClosing; // 0x8a0	
	CEntityIOOutput m_OnUnblockedOpening; // 0x8c8	
	CEntityIOOutput m_OnFullyClosed; // 0x8f0	
	CEntityIOOutput m_OnFullyOpen; // 0x918	
	CEntityIOOutput m_OnClose; // 0x940	
	CEntityIOOutput m_OnOpen; // 0x968	
	CEntityIOOutput m_OnLockedUse; // 0x990	
	bool m_bLoopMoveSound; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09b9[0x17]; // 0x9b9
public:
	bool m_bCreateNavObstacle; // 0x9d0	
	bool m_isChaining; // 0x9d1	
	// MNetworkEnable
	bool m_bIsUsable; // 0x9d2	
	
	// Datamap fields:
	// void m_nMovingSoundGUID; // 0x9bc
	//  m_ls.sLockedSound; // 0x800
	//  m_ls.sUnlockedSound; // 0x808
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

