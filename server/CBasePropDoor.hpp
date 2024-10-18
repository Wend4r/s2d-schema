#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xee8
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
	[[maybe_unused]] uint8_t __pad0c58[0x10]; // 0xc58
public:
	float m_flAutoReturnDelay; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c6c[0x4]; // 0xc6c
public:
	CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xc70	
	int32_t m_nHardwareType; // 0xc88	
	bool m_bNeedsHardware; // 0xc8c	
private:
	[[maybe_unused]] uint8_t __pad0c8d[0x3]; // 0xc8d
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xc90	
	// MNetworkEnable
	bool m_bLocked; // 0xc94	
private:
	[[maybe_unused]] uint8_t __pad0c95[0x3]; // 0xc95
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xc98	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xca4	
	CHandle< CBaseEntity > m_hBlocker; // 0xcb0	
	bool m_bFirstBlocked; // 0xcb4	
private:
	[[maybe_unused]] uint8_t __pad0cb5[0x3]; // 0xcb5
public:
	locksound_t m_ls; // 0xcb8	
	bool m_bForceClosed; // 0xcd8	
private:
	[[maybe_unused]] uint8_t __pad0cd9[0x3]; // 0xcd9
public:
	Vector m_vecLatchWorldPosition; // 0xcdc	
	CHandle< CBaseEntity > m_hActivator; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0cec[0xc]; // 0xcec
public:
	CUtlSymbolLarge m_SoundMoving; // 0xcf8	
	CUtlSymbolLarge m_SoundOpen; // 0xd00	
	CUtlSymbolLarge m_SoundClose; // 0xd08	
	CUtlSymbolLarge m_SoundLock; // 0xd10	
	CUtlSymbolLarge m_SoundUnlock; // 0xd18	
	CUtlSymbolLarge m_SoundLatch; // 0xd20	
	CUtlSymbolLarge m_SoundPound; // 0xd28	
	CUtlSymbolLarge m_SoundJiggle; // 0xd30	
	CUtlSymbolLarge m_SoundLockedAnim; // 0xd38	
	int32_t m_numCloseAttempts; // 0xd40	
	CUtlStringToken m_nPhysicsMaterial; // 0xd44	
	CUtlSymbolLarge m_SlaveName; // 0xd48	
	// MNetworkEnable
	CHandle< CBasePropDoor > m_hMaster; // 0xd50	
private:
	[[maybe_unused]] uint8_t __pad0d54[0x4]; // 0xd54
public:
	CEntityIOOutput m_OnBlockedClosing; // 0xd58	
	CEntityIOOutput m_OnBlockedOpening; // 0xd80	
	CEntityIOOutput m_OnUnblockedClosing; // 0xda8	
	CEntityIOOutput m_OnUnblockedOpening; // 0xdd0	
	CEntityIOOutput m_OnFullyClosed; // 0xdf8	
	CEntityIOOutput m_OnFullyOpen; // 0xe20	
	CEntityIOOutput m_OnClose; // 0xe48	
	CEntityIOOutput m_OnOpen; // 0xe70	
	CEntityIOOutput m_OnLockedUse; // 0xe98	
	CEntityIOOutput m_OnAjarOpen; // 0xec0	
	
	// Datamap fields:
	// void m_hSoundMoving; // 0xcec
	//  m_ls.sLockedSound; // 0xcc0
	//  m_ls.sUnlockedSound; // 0xcc8
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

