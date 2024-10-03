#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xea0
// Has VTable
// Is Abstract
// 
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByName "m_flexWeight"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByUserGroup "m_flPoseParameter"
// MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
// MNetworkExcludeByUserGroup "overlay_vars"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "DoorState_t m_eDoorState"
// MNetworkVarNames "bool m_bLocked"
// MNetworkVarNames "Vector m_closedPosition"
// MNetworkVarNames "QAngle m_closedAngles"
// MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
class CBasePropDoor : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0c10[0x10]; // 0xc10
public:
	float m_flAutoReturnDelay; // 0xc20	
private:
	[[maybe_unused]] uint8_t __pad0c24[0x4]; // 0xc24
public:
	CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xc28	
	int32_t m_nHardwareType; // 0xc40	
	bool m_bNeedsHardware; // 0xc44	
private:
	[[maybe_unused]] uint8_t __pad0c45[0x3]; // 0xc45
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xc48	
	// MNetworkEnable
	bool m_bLocked; // 0xc4c	
private:
	[[maybe_unused]] uint8_t __pad0c4d[0x3]; // 0xc4d
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xc50	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xc5c	
	CHandle< CBaseEntity > m_hBlocker; // 0xc68	
	bool m_bFirstBlocked; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c6d[0x3]; // 0xc6d
public:
	locksound_t m_ls; // 0xc70	
	bool m_bForceClosed; // 0xc90	
private:
	[[maybe_unused]] uint8_t __pad0c91[0x3]; // 0xc91
public:
	Vector m_vecLatchWorldPosition; // 0xc94	
	CHandle< CBaseEntity > m_hActivator; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca4[0xc]; // 0xca4
public:
	CUtlSymbolLarge m_SoundMoving; // 0xcb0	
	CUtlSymbolLarge m_SoundOpen; // 0xcb8	
	CUtlSymbolLarge m_SoundClose; // 0xcc0	
	CUtlSymbolLarge m_SoundLock; // 0xcc8	
	CUtlSymbolLarge m_SoundUnlock; // 0xcd0	
	CUtlSymbolLarge m_SoundLatch; // 0xcd8	
	CUtlSymbolLarge m_SoundPound; // 0xce0	
	CUtlSymbolLarge m_SoundJiggle; // 0xce8	
	CUtlSymbolLarge m_SoundLockedAnim; // 0xcf0	
	int32_t m_numCloseAttempts; // 0xcf8	
	CUtlStringToken m_nPhysicsMaterial; // 0xcfc	
	CUtlSymbolLarge m_SlaveName; // 0xd00	
	// MNetworkEnable
	CHandle< CBasePropDoor > m_hMaster; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d0c[0x4]; // 0xd0c
public:
	CEntityIOOutput m_OnBlockedClosing; // 0xd10	
	CEntityIOOutput m_OnBlockedOpening; // 0xd38	
	CEntityIOOutput m_OnUnblockedClosing; // 0xd60	
	CEntityIOOutput m_OnUnblockedOpening; // 0xd88	
	CEntityIOOutput m_OnFullyClosed; // 0xdb0	
	CEntityIOOutput m_OnFullyOpen; // 0xdd8	
	CEntityIOOutput m_OnClose; // 0xe00	
	CEntityIOOutput m_OnOpen; // 0xe28	
	CEntityIOOutput m_OnLockedUse; // 0xe50	
	CEntityIOOutput m_OnAjarOpen; // 0xe78	
	
	// Datamap fields:
	// void m_hSoundMoving; // 0xca4
	//  m_ls.sLockedSound; // 0xc78
	//  m_ls.sUnlockedSound; // 0xc80
	// void InputOpen; // 0x0
	// CUtlSymbolLarge InputOpenAwayFrom; // 0x0
	// float InputOpenAwayFromActivator; // 0x0
	// void InputClose; // 0x0
	// void InputToggle; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// void InputPlayerOpen; // 0x0
	// void InputPlayerClose; // 0x0
	// void CBasePropDoorDoorOpenMoveDone; // 0x0
	// void CBasePropDoorDoorCloseMoveDone; // 0x0
	// void CBasePropDoorDoorAutoCloseThink; // 0x0
	// void CBasePropDoorDisableAreaPortalThink; // 0x0
};

