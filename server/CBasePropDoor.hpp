#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe98
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
	[[maybe_unused]] uint8_t __pad0c08[0x10]; // 0xc08
public:
	float m_flAutoReturnDelay; // 0xc18	
private:
	[[maybe_unused]] uint8_t __pad0c1c[0x4]; // 0xc1c
public:
	CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xc20	
	int32_t m_nHardwareType; // 0xc38	
	bool m_bNeedsHardware; // 0xc3c	
private:
	[[maybe_unused]] uint8_t __pad0c3d[0x3]; // 0xc3d
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xc40	
	// MNetworkEnable
	bool m_bLocked; // 0xc44	
private:
	[[maybe_unused]] uint8_t __pad0c45[0x3]; // 0xc45
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xc48	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xc54	
	CHandle< CBaseEntity > m_hBlocker; // 0xc60	
	bool m_bFirstBlocked; // 0xc64	
private:
	[[maybe_unused]] uint8_t __pad0c65[0x3]; // 0xc65
public:
	locksound_t m_ls; // 0xc68	
	bool m_bForceClosed; // 0xc88	
private:
	[[maybe_unused]] uint8_t __pad0c89[0x3]; // 0xc89
public:
	Vector m_vecLatchWorldPosition; // 0xc8c	
	CHandle< CBaseEntity > m_hActivator; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c9c[0xc]; // 0xc9c
public:
	CUtlSymbolLarge m_SoundMoving; // 0xca8	
	CUtlSymbolLarge m_SoundOpen; // 0xcb0	
	CUtlSymbolLarge m_SoundClose; // 0xcb8	
	CUtlSymbolLarge m_SoundLock; // 0xcc0	
	CUtlSymbolLarge m_SoundUnlock; // 0xcc8	
	CUtlSymbolLarge m_SoundLatch; // 0xcd0	
	CUtlSymbolLarge m_SoundPound; // 0xcd8	
	CUtlSymbolLarge m_SoundJiggle; // 0xce0	
	CUtlSymbolLarge m_SoundLockedAnim; // 0xce8	
	int32_t m_numCloseAttempts; // 0xcf0	
	CUtlStringToken m_nPhysicsMaterial; // 0xcf4	
	CUtlSymbolLarge m_SlaveName; // 0xcf8	
	// MNetworkEnable
	CHandle< CBasePropDoor > m_hMaster; // 0xd00	
private:
	[[maybe_unused]] uint8_t __pad0d04[0x4]; // 0xd04
public:
	CEntityIOOutput m_OnBlockedClosing; // 0xd08	
	CEntityIOOutput m_OnBlockedOpening; // 0xd30	
	CEntityIOOutput m_OnUnblockedClosing; // 0xd58	
	CEntityIOOutput m_OnUnblockedOpening; // 0xd80	
	CEntityIOOutput m_OnFullyClosed; // 0xda8	
	CEntityIOOutput m_OnFullyOpen; // 0xdd0	
	CEntityIOOutput m_OnClose; // 0xdf8	
	CEntityIOOutput m_OnOpen; // 0xe20	
	CEntityIOOutput m_OnLockedUse; // 0xe48	
	CEntityIOOutput m_OnAjarOpen; // 0xe70	
	
	// Datamap fields:
	// void m_hSoundMoving; // 0xc9c
	//  m_ls.sLockedSound; // 0xc70
	//  m_ls.sUnlockedSound; // 0xc78
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

