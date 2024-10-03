#pragma once

#include <cstdint>

struct CAttributeContainer;
struct CountdownTimer;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x3120
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
class CChicken : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0c10[0x20]; // 0xc10
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xc30	
	CountdownTimer m_updateTimer; // 0xef8	
	Vector m_stuckAnchor; // 0xf10	
private:
	[[maybe_unused]] uint8_t __pad0f1c[0x4]; // 0xf1c
public:
	CountdownTimer m_stuckTimer; // 0xf20	
	CountdownTimer m_collisionStuckTimer; // 0xf38	
	bool m_isOnGround; // 0xf50	
private:
	[[maybe_unused]] uint8_t __pad0f51[0x3]; // 0xf51
public:
	Vector m_vFallVelocity; // 0xf54	
	ChickenActivity m_desiredActivity; // 0xf60	
	ChickenActivity m_currentActivity; // 0xf64	
	CountdownTimer m_activityTimer; // 0xf68	
	float m_turnRate; // 0xf80	
	CHandle< CBaseEntity > m_fleeFrom; // 0xf84	
	CountdownTimer m_moveRateThrottleTimer; // 0xf88	
	CountdownTimer m_startleTimer; // 0xfa0	
	CountdownTimer m_vocalizeTimer; // 0xfb8	
	GameTime_t m_flWhenZombified; // 0xfd0	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0xfd4	
private:
	[[maybe_unused]] uint8_t __pad0fd5[0x3]; // 0xfd5
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_leader; // 0xfd8	
private:
	[[maybe_unused]] uint8_t __pad0fdc[0x14]; // 0xfdc
public:
	CountdownTimer m_reuseTimer; // 0xff0	
	bool m_hasBeenUsed; // 0x1008	
private:
	[[maybe_unused]] uint8_t __pad1009[0x7]; // 0x1009
public:
	CountdownTimer m_jumpTimer; // 0x1010	
	float m_flLastJumpTime; // 0x1028	
	bool m_bInJump; // 0x102c	
private:
	[[maybe_unused]] uint8_t __pad102d[0x200b]; // 0x102d
public:
	CountdownTimer m_repathTimer; // 0x3038	
private:
	[[maybe_unused]] uint8_t __pad3050[0x80]; // 0x3050
public:
	Vector m_vecPathGoal; // 0x30d0	
	GameTime_t m_flActiveFollowStartTime; // 0x30dc	
	CountdownTimer m_followMinuteTimer; // 0x30e0	
private:
	[[maybe_unused]] uint8_t __pad30f8[0x8]; // 0x30f8
public:
	CountdownTimer m_BlockDirectionTimer; // 0x3100	
	
	// Datamap fields:
	// void CChickenChickenTouch; // 0x0
	// void CChickenChickenThink; // 0x0
	// void CChickenChickenUse; // 0x0
};

