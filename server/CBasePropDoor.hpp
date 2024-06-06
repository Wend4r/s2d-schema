#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe10
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
	[[maybe_unused]] uint8_t __pad0b80[0x10]; // 0xb80
public:
	float m_flAutoReturnDelay; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b94[0x4]; // 0xb94
public:
	CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xb98	
	int32_t m_nHardwareType; // 0xbb0	
	bool m_bNeedsHardware; // 0xbb4	
private:
	[[maybe_unused]] uint8_t __pad0bb5[0x3]; // 0xbb5
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xbb8	
	// MNetworkEnable
	bool m_bLocked; // 0xbbc	
private:
	[[maybe_unused]] uint8_t __pad0bbd[0x3]; // 0xbbd
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xbc0	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xbcc	
	CHandle< CBaseEntity > m_hBlocker; // 0xbd8	
	bool m_bFirstBlocked; // 0xbdc	
private:
	[[maybe_unused]] uint8_t __pad0bdd[0x3]; // 0xbdd
public:
	locksound_t m_ls; // 0xbe0	
	bool m_bForceClosed; // 0xc00	
private:
	[[maybe_unused]] uint8_t __pad0c01[0x3]; // 0xc01
public:
	Vector m_vecLatchWorldPosition; // 0xc04	
	CHandle< CBaseEntity > m_hActivator; // 0xc10	
private:
	[[maybe_unused]] uint8_t __pad0c14[0xc]; // 0xc14
public:
	CUtlSymbolLarge m_SoundMoving; // 0xc20	
	CUtlSymbolLarge m_SoundOpen; // 0xc28	
	CUtlSymbolLarge m_SoundClose; // 0xc30	
	CUtlSymbolLarge m_SoundLock; // 0xc38	
	CUtlSymbolLarge m_SoundUnlock; // 0xc40	
	CUtlSymbolLarge m_SoundLatch; // 0xc48	
	CUtlSymbolLarge m_SoundPound; // 0xc50	
	CUtlSymbolLarge m_SoundJiggle; // 0xc58	
	CUtlSymbolLarge m_SoundLockedAnim; // 0xc60	
	int32_t m_numCloseAttempts; // 0xc68	
	CUtlStringToken m_nPhysicsMaterial; // 0xc6c	
	CUtlSymbolLarge m_SlaveName; // 0xc70	
	// MNetworkEnable
	CHandle< CBasePropDoor > m_hMaster; // 0xc78	
private:
	[[maybe_unused]] uint8_t __pad0c7c[0x4]; // 0xc7c
public:
	CEntityIOOutput m_OnBlockedClosing; // 0xc80	
	CEntityIOOutput m_OnBlockedOpening; // 0xca8	
	CEntityIOOutput m_OnUnblockedClosing; // 0xcd0	
	CEntityIOOutput m_OnUnblockedOpening; // 0xcf8	
	CEntityIOOutput m_OnFullyClosed; // 0xd20	
	CEntityIOOutput m_OnFullyOpen; // 0xd48	
	CEntityIOOutput m_OnClose; // 0xd70	
	CEntityIOOutput m_OnOpen; // 0xd98	
	CEntityIOOutput m_OnLockedUse; // 0xdc0	
	CEntityIOOutput m_OnAjarOpen; // 0xde8	
	
	// Datamap fields:
	// void m_hSoundMoving; // 0xc14
	//  m_ls.sLockedSound; // 0xbe8
	//  m_ls.sUnlockedSound; // 0xbf0
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

