#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct EntitySpottedState_t;
struct CountdownTimer;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2d20
// Has VTable
// 
// MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_fFlags"
// MNetworkIncludeByName "m_vecViewOffset"
// MNetworkVarNames "Vector m_vel"
// MNetworkVarNames "bool m_isRescued"
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "int m_nHostageState"
// MNetworkVarNames "CHandle< CBaseEntity> m_leader"
// MNetworkVarNames "CountdownTimer m_reuseTimer"
// MNetworkVarNames "bool m_bHandsHaveBeenCut"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_hHostageGrabber"
// MNetworkVarNames "GameTime_t m_flRescueStartTime"
// MNetworkVarNames "GameTime_t m_flGrabSuccessTime"
// MNetworkVarNames "GameTime_t m_flDropStartTime"
class CHostage : public CHostageExpresserShim
{
private:
	[[maybe_unused]] uint8_t __pad0a88[0x10]; // 0xa88
public:
	CEntityIOOutput m_OnHostageBeginGrab; // 0xa98	
	CEntityIOOutput m_OnFirstPickedUp; // 0xac0	
	CEntityIOOutput m_OnDroppedNotRescued; // 0xae8	
	CEntityIOOutput m_OnRescued; // 0xb10	
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xb38	
	int32_t m_nSpotRules; // 0xb50	
	uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xb54	
	uint32_t m_nHostageSpawnRandomFactor; // 0xb58	
	bool m_bRemove; // 0xb5c	
private:
	[[maybe_unused]] uint8_t __pad0b5d[0x3]; // 0xb5d
public:
	// MNetworkEnable
	Vector m_vel; // 0xb60	
	// MNetworkEnable
	bool m_isRescued; // 0xb6c	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0xb6d	
private:
	[[maybe_unused]] uint8_t __pad0b6e[0x2]; // 0xb6e
public:
	// MNetworkEnable
	int32_t m_nHostageState; // 0xb70	
	// MNetworkEnable
	CHandle< CBaseEntity > m_leader; // 0xb74	
	CHandle< CCSPlayerPawnBase > m_lastLeader; // 0xb78	
private:
	[[maybe_unused]] uint8_t __pad0b7c[0x4]; // 0xb7c
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0xb80	
	bool m_hasBeenUsed; // 0xb98	
private:
	[[maybe_unused]] uint8_t __pad0b99[0x3]; // 0xb99
public:
	Vector m_accel; // 0xb9c	
	bool m_isRunning; // 0xba8	
	bool m_isCrouching; // 0xba9	
private:
	[[maybe_unused]] uint8_t __pad0baa[0x6]; // 0xbaa
public:
	CountdownTimer m_jumpTimer; // 0xbb0	
	bool m_isWaitingForLeader; // 0xbc8	
private:
	[[maybe_unused]] uint8_t __pad0bc9[0x200f]; // 0xbc9
public:
	CountdownTimer m_repathTimer; // 0x2bd8	
	CountdownTimer m_inhibitDoorTimer; // 0x2bf0	
private:
	[[maybe_unused]] uint8_t __pad2c08[0x78]; // 0x2c08
public:
	CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2c80	
private:
	[[maybe_unused]] uint8_t __pad2c98[0x8]; // 0x2c98
public:
	CountdownTimer m_wiggleTimer; // 0x2ca0	
private:
	[[maybe_unused]] uint8_t __pad2cb8[0x4]; // 0x2cb8
public:
	bool m_isAdjusted; // 0x2cbc	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x2cbd	
private:
	[[maybe_unused]] uint8_t __pad2cbe[0x2]; // 0x2cbe
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hHostageGrabber; // 0x2cc0	
	GameTime_t m_fLastGrabTime; // 0x2cc4	
	Vector m_vecPositionWhenStartedDroppingToGround; // 0x2cc8	
	Vector m_vecGrabbedPos; // 0x2cd4	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x2ce0	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x2ce4	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x2ce8	
	int32_t m_nApproachRewardPayouts; // 0x2cec	
	int32_t m_nPickupEventCount; // 0x2cf0	
	Vector m_vecSpawnGroundPos; // 0x2cf4	
private:
	[[maybe_unused]] uint8_t __pad2d00[0x14]; // 0x2d00
public:
	Vector m_vecHostageResetPosition; // 0x2d14	
	
	// Datamap fields:
	// void HostageRescueZoneTouch; // 0x0
	// void CHostageHostageUse; // 0x0
	// void CHostageHostageThink; // 0x0
};

