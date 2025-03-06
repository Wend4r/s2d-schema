#pragma once

#include <cstdint>

struct locksound_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfc8
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
// MNetworkVarNames "bool m_bNoNPCs"
// MNetworkVarNames "Vector m_closedPosition"
// MNetworkVarNames "QAngle m_closedAngles"
// MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
class CBasePropDoor : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0d38[0x10]; // 0xd38
public:
	float m_flAutoReturnDelay; // 0xd48	
private:
	[[maybe_unused]] uint8_t __pad0d4c[0x4]; // 0xd4c
public:
	CUtlVector< CHandle< CBasePropDoor > > m_hDoorList; // 0xd50	
	int32_t m_nHardwareType; // 0xd68	
	bool m_bNeedsHardware; // 0xd6c	
private:
	[[maybe_unused]] uint8_t __pad0d6d[0x3]; // 0xd6d
public:
	// MNetworkEnable
	DoorState_t m_eDoorState; // 0xd70	
	// MNetworkEnable
	bool m_bLocked; // 0xd74	
	// MNetworkEnable
	bool m_bNoNPCs; // 0xd75	
private:
	[[maybe_unused]] uint8_t __pad0d76[0x2]; // 0xd76
public:
	// MNetworkEnable
	Vector m_closedPosition; // 0xd78	
	// MNetworkEnable
	QAngle m_closedAngles; // 0xd84	
	CHandle< CBaseEntity > m_hBlocker; // 0xd90	
	bool m_bFirstBlocked; // 0xd94	
private:
	[[maybe_unused]] uint8_t __pad0d95[0x3]; // 0xd95
public:
	locksound_t m_ls; // 0xd98	
	bool m_bForceClosed; // 0xdb8	
private:
	[[maybe_unused]] uint8_t __pad0db9[0x3]; // 0xdb9
public:
	Vector m_vecLatchWorldPosition; // 0xdbc	
	CHandle< CBaseEntity > m_hActivator; // 0xdc8	
private:
	[[maybe_unused]] uint8_t __pad0dcc[0xc]; // 0xdcc
public:
	CUtlSymbolLarge m_SoundMoving; // 0xdd8	
	CUtlSymbolLarge m_SoundOpen; // 0xde0	
	CUtlSymbolLarge m_SoundClose; // 0xde8	
	CUtlSymbolLarge m_SoundLock; // 0xdf0	
	CUtlSymbolLarge m_SoundUnlock; // 0xdf8	
	CUtlSymbolLarge m_SoundLatch; // 0xe00	
	CUtlSymbolLarge m_SoundPound; // 0xe08	
	CUtlSymbolLarge m_SoundJiggle; // 0xe10	
	CUtlSymbolLarge m_SoundLockedAnim; // 0xe18	
	int32_t m_numCloseAttempts; // 0xe20	
	CUtlStringToken m_nPhysicsMaterial; // 0xe24	
	CUtlSymbolLarge m_SlaveName; // 0xe28	
	// MNetworkEnable
	CHandle< CBasePropDoor > m_hMaster; // 0xe30	
private:
	[[maybe_unused]] uint8_t __pad0e34[0x4]; // 0xe34
public:
	CEntityIOOutput m_OnBlockedClosing; // 0xe38	
	CEntityIOOutput m_OnBlockedOpening; // 0xe60	
	CEntityIOOutput m_OnUnblockedClosing; // 0xe88	
	CEntityIOOutput m_OnUnblockedOpening; // 0xeb0	
	CEntityIOOutput m_OnFullyClosed; // 0xed8	
	CEntityIOOutput m_OnFullyOpen; // 0xf00	
	CEntityIOOutput m_OnClose; // 0xf28	
	CEntityIOOutput m_OnOpen; // 0xf50	
	CEntityIOOutput m_OnLockedUse; // 0xf78	
	CEntityIOOutput m_OnAjarOpen; // 0xfa0	
	
	// Datamap fields:
	// void m_hSoundMoving; // 0xdcc
	//  m_ls.sLockedSound; // 0xda0
	//  m_ls.sUnlockedSound; // 0xda8
	// void InputOpen; // 0x0
	// CUtlSymbolLarge InputOpenAwayFrom; // 0x0
	// float InputOpenAwayFromActivator; // 0x0
	// void InputClose; // 0x0
	// void InputToggle; // 0x0
	// void InputLock; // 0x0
	// void InputUnlock; // 0x0
	// void InputPlayerOpen; // 0x0
	// void InputPlayerClose; // 0x0
	// bool InputSetNoNPCs; // 0x0
	// void CBasePropDoorDoorOpenMoveDone; // 0x0
	// void CBasePropDoorDoorCloseMoveDone; // 0x0
	// void CBasePropDoorDoorAutoCloseThink; // 0x0
	// void CBasePropDoorDisableAreaPortalThink; // 0x0
};

