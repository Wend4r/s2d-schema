#pragma once

#include <cstdint>

struct CAttributeContainer;
struct CountdownTimer;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x3108
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
class CChicken : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0b80[0x20]; // 0xb80
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xba0	
private:
	[[maybe_unused]] uint8_t __pad0e68[0x20]; // 0xe68
public:
	CUtlStringToken m_sActivityFinishedTag; // 0xe88	
private:
	[[maybe_unused]] uint8_t __pad0e8c[0x4]; // 0xe8c
public:
	CountdownTimer m_updateTimer; // 0xe90	
	Vector m_stuckAnchor; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0eb4[0x4]; // 0xeb4
public:
	CountdownTimer m_stuckTimer; // 0xeb8	
	CountdownTimer m_collisionStuckTimer; // 0xed0	
	bool m_isOnGround; // 0xee8	
private:
	[[maybe_unused]] uint8_t __pad0ee9[0x3]; // 0xee9
public:
	Vector m_vFallVelocity; // 0xeec	
	ChickenActivity m_desiredActivity; // 0xef8	
	ChickenActivity m_currentActivity; // 0xefc	
	CountdownTimer m_activityTimer; // 0xf00	
	float m_turnRate; // 0xf18	
	CHandle< CBaseEntity > m_fleeFrom; // 0xf1c	
	CountdownTimer m_moveRateThrottleTimer; // 0xf20	
	CountdownTimer m_startleTimer; // 0xf38	
	CountdownTimer m_vocalizeTimer; // 0xf50	
	GameTime_t m_flWhenZombified; // 0xf68	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0xf6c	
private:
	[[maybe_unused]] uint8_t __pad0f6d[0x3]; // 0xf6d
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_leader; // 0xf70	
private:
	[[maybe_unused]] uint8_t __pad0f74[0x14]; // 0xf74
public:
	CountdownTimer m_reuseTimer; // 0xf88	
	bool m_hasBeenUsed; // 0xfa0	
private:
	[[maybe_unused]] uint8_t __pad0fa1[0x7]; // 0xfa1
public:
	CountdownTimer m_jumpTimer; // 0xfa8	
	float m_flLastJumpTime; // 0xfc0	
	bool m_bInJump; // 0xfc4	
	bool m_isWaitingForLeader; // 0xfc5	
private:
	[[maybe_unused]] uint8_t __pad0fc6[0x200a]; // 0xfc6
public:
	CountdownTimer m_repathTimer; // 0x2fd0	
	CountdownTimer m_inhibitDoorTimer; // 0x2fe8	
private:
	[[maybe_unused]] uint8_t __pad3000[0x78]; // 0x3000
public:
	CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x3078	
private:
	[[maybe_unused]] uint8_t __pad3090[0x8]; // 0x3090
public:
	Vector m_vecPathGoal; // 0x3098	
	GameTime_t m_flActiveFollowStartTime; // 0x30a4	
	CountdownTimer m_followMinuteTimer; // 0x30a8	
	Vector m_vecLastEggPoopPosition; // 0x30c0	
private:
	[[maybe_unused]] uint8_t __pad30cc[0x4]; // 0x30cc
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecEggsPooped; // 0x30d0	
private:
	[[maybe_unused]] uint8_t __pad30e8[0x8]; // 0x30e8
public:
	CountdownTimer m_BlockDirectionTimer; // 0x30f0	
	
	// Datamap fields:
	// void CChickenChickenTouch; // 0x0
	// void CChickenChickenThink; // 0x0
	// void CChickenChickenUse; // 0x0
};

