#pragma once

#include <cstdint>

struct CEntityIOOutput;
struct EntitySpottedState_t;
struct CountdownTimer;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2d60
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
	[[maybe_unused]] uint8_t __pad0ac8[0x10]; // 0xac8
public:
	CEntityIOOutput m_OnHostageBeginGrab; // 0xad8	
	CEntityIOOutput m_OnFirstPickedUp; // 0xb00	
	CEntityIOOutput m_OnDroppedNotRescued; // 0xb28	
	CEntityIOOutput m_OnRescued; // 0xb50	
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xb78	
	int32_t m_nSpotRules; // 0xb90	
	uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xb94	
	uint32_t m_nHostageSpawnRandomFactor; // 0xb98	
	bool m_bRemove; // 0xb9c	
private:
	[[maybe_unused]] uint8_t __pad0b9d[0x3]; // 0xb9d
public:
	// MNetworkEnable
	Vector m_vel; // 0xba0	
	// MNetworkEnable
	bool m_isRescued; // 0xbac	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0xbad	
private:
	[[maybe_unused]] uint8_t __pad0bae[0x2]; // 0xbae
public:
	// MNetworkEnable
	int32_t m_nHostageState; // 0xbb0	
	// MNetworkEnable
	CHandle< CBaseEntity > m_leader; // 0xbb4	
	CHandle< CCSPlayerPawnBase > m_lastLeader; // 0xbb8	
private:
	[[maybe_unused]] uint8_t __pad0bbc[0x4]; // 0xbbc
public:
	// MNetworkEnable
	CountdownTimer m_reuseTimer; // 0xbc0	
	bool m_hasBeenUsed; // 0xbd8	
private:
	[[maybe_unused]] uint8_t __pad0bd9[0x3]; // 0xbd9
public:
	Vector m_accel; // 0xbdc	
	bool m_isRunning; // 0xbe8	
	bool m_isCrouching; // 0xbe9	
private:
	[[maybe_unused]] uint8_t __pad0bea[0x6]; // 0xbea
public:
	CountdownTimer m_jumpTimer; // 0xbf0	
	bool m_isWaitingForLeader; // 0xc08	
private:
	[[maybe_unused]] uint8_t __pad0c09[0x200f]; // 0xc09
public:
	CountdownTimer m_repathTimer; // 0x2c18	
	CountdownTimer m_inhibitDoorTimer; // 0x2c30	
private:
	[[maybe_unused]] uint8_t __pad2c48[0x78]; // 0x2c48
public:
	CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2cc0	
private:
	[[maybe_unused]] uint8_t __pad2cd8[0x8]; // 0x2cd8
public:
	CountdownTimer m_wiggleTimer; // 0x2ce0	
private:
	[[maybe_unused]] uint8_t __pad2cf8[0x4]; // 0x2cf8
public:
	bool m_isAdjusted; // 0x2cfc	
	// MNetworkEnable
	bool m_bHandsHaveBeenCut; // 0x2cfd	
private:
	[[maybe_unused]] uint8_t __pad2cfe[0x2]; // 0x2cfe
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_hHostageGrabber; // 0x2d00	
	GameTime_t m_fLastGrabTime; // 0x2d04	
	Vector m_vecPositionWhenStartedDroppingToGround; // 0x2d08	
	Vector m_vecGrabbedPos; // 0x2d14	
	// MNetworkEnable
	GameTime_t m_flRescueStartTime; // 0x2d20	
	// MNetworkEnable
	GameTime_t m_flGrabSuccessTime; // 0x2d24	
	// MNetworkEnable
	GameTime_t m_flDropStartTime; // 0x2d28	
	int32_t m_nApproachRewardPayouts; // 0x2d2c	
	int32_t m_nPickupEventCount; // 0x2d30	
	Vector m_vecSpawnGroundPos; // 0x2d34	
private:
	[[maybe_unused]] uint8_t __pad2d40[0x14]; // 0x2d40
public:
	Vector m_vecHostageResetPosition; // 0x2d54	
	
	// Datamap fields:
	// void HostageRescueZoneTouch; // 0x0
	// void CHostageHostageUse; // 0x0
	// void CHostageHostageThink; // 0x0
};

