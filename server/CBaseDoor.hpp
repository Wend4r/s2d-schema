#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa18
// Has VTable
// 
// MNetworkVarNames "bool m_bIsUsable"
class CBaseDoor : public CBaseToggle
{
private:
	[[maybe_unused]] uint8_t __pad0810[0x10]; // 0x810
public:
	QAngle m_angMoveEntitySpace; // 0x820	
	Vector m_vecMoveDirParentSpace; // 0x82c	
	locksound_t m_ls; // 0x838	
	bool m_bForceClosed; // 0x858	
	bool m_bDoorGroup; // 0x859	
	bool m_bLocked; // 0x85a	
	bool m_bIgnoreDebris; // 0x85b	
	FuncDoorSpawnPos_t m_eSpawnPosition; // 0x85c	
	float m_flBlockDamage; // 0x860	
private:
	[[maybe_unused]] uint8_t __pad0864[0x4]; // 0x864
public:
	CUtlSymbolLarge m_NoiseMoving; // 0x868	
	CUtlSymbolLarge m_NoiseArrived; // 0x870	
	CUtlSymbolLarge m_NoiseMovingClosed; // 0x878	
	CUtlSymbolLarge m_NoiseArrivedClosed; // 0x880	
	CUtlSymbolLarge m_ChainTarget; // 0x888	
	CEntityIOOutput m_OnBlockedClosing; // 0x890	
	CEntityIOOutput m_OnBlockedOpening; // 0x8b8	
	CEntityIOOutput m_OnUnblockedClosing; // 0x8e0	
	CEntityIOOutput m_OnUnblockedOpening; // 0x908	
	CEntityIOOutput m_OnFullyClosed; // 0x930	
	CEntityIOOutput m_OnFullyOpen; // 0x958	
	CEntityIOOutput m_OnClose; // 0x980	
	CEntityIOOutput m_OnOpen; // 0x9a8	
	CEntityIOOutput m_OnLockedUse; // 0x9d0	
	bool m_bLoopMoveSound; // 0x9f8	
private:
	[[maybe_unused]] uint8_t __pad09f9[0x17]; // 0x9f9
public:
	bool m_bCreateNavObstacle; // 0xa10	
	bool m_isChaining; // 0xa11	
	// MNetworkEnable
	bool m_bIsUsable; // 0xa12	
	
	// Datamap fields:
	// void m_nMovingSoundGUID; // 0x9fc
	//  m_ls.sLockedSound; // 0x840
	//  m_ls.sUnlockedSound; // 0x848
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

