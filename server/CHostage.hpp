#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct EntitySpottedState_t;
struct CountdownTimer;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2ca8
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
	[[maybe_unused]] uint8_t __pad0a10[0x10]; // 0xa10
public:
	CEntityIOOutput m_OnHostageBeginGrab; // 0xa20	
	CEntityIOOutput m_OnFirstPickedUp; // 0xa48	
	CEntityIOOutput m_OnDroppedNotRescued; // 0xa70	
	CEntityIOOutput m_OnRescued; // 0xa98	
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xac0	
	int32_t m_nSpotRules; // 0xad8	
	uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xadc	
	uint32_t m_nHostageSpawnRandomFactor; // 0xae0	
	bool m_bRemove; // 0xae4	
private:
	[[maybe_unused]] uint8_t __pad0ae5[0x3]; // 0xae5
public:
	// MNetworkEnable
	Vector m_vel; // 0xae8	
	// MNetworkEnable
	bool m_isRescued; // 0xaf4	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0xaf5	
private:
	[[maybe_unused]] uint8_t __pad0af6[0x2]; // 0xaf6
public:
	// MNetworkEnable
	int32_t m_nHostageState; // 0xaf8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_leader; // 0xafc	
	CHandle< CCSPlayerPawnBase > m_lastLeader; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x4]; // 0xb04
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0xb08	
	bool m_hasBeenUsed; // 0xb20	
private:
	[[maybe_unused]] uint8_t __pad0b21[0x3]; // 0xb21
public:
	Vector m_accel; // 0xb24	
	bool m_isRunning; // 0xb30	
	bool m_isCrouching; // 0xb31	
private:
	[[maybe_unused]] uint8_t __pad0b32[0x6]; // 0xb32
public:
	CountdownTimer m_jumpTimer; // 0xb38	
	bool m_isWaitingForLeader; // 0xb50	
private:
	[[maybe_unused]] uint8_t __pad0b51[0x200f]; // 0xb51
public:
	CountdownTimer m_repathTimer; // 0x2b60	
	CountdownTimer m_inhibitDoorTimer; // 0x2b78	
private:
	[[maybe_unused]] uint8_t __pad2b90[0x78]; // 0x2b90
public:
	CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2c08	
private:
	[[maybe_unused]] uint8_t __pad2c20[0x8]; // 0x2c20
public:
	CountdownTimer m_wiggleTimer; // 0x2c28	
private:
	[[maybe_unused]] uint8_t __pad2c40[0x4]; // 0x2c40
public:
	bool m_isAdjusted; // 0x2c44	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x2c45	
private:
	[[maybe_unused]] uint8_t __pad2c46[0x2]; // 0x2c46
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hHostageGrabber; // 0x2c48	
	GameTime_t m_fLastGrabTime; // 0x2c4c	
	Vector m_vecPositionWhenStartedDroppingToGround; // 0x2c50	
	Vector m_vecGrabbedPos; // 0x2c5c	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x2c68	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x2c6c	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x2c70	
	int32_t m_nApproachRewardPayouts; // 0x2c74	
	int32_t m_nPickupEventCount; // 0x2c78	
	Vector m_vecSpawnGroundPos; // 0x2c7c	
private:
	[[maybe_unused]] uint8_t __pad2c88[0x14]; // 0x2c88
public:
	Vector m_vecHostageResetPosition; // 0x2c9c	
	
	// Datamap fields:
	// void HostageRescueZoneTouch; // 0x0
	// void CHostageHostageUse; // 0x0
	// void CHostageHostageThink; // 0x0
};

