#pragma once

#include <cstdint>

struct CAttributeContainer;
struct CountdownTimer;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x3168
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
// MNetworkVarNames "bool m_jumpedThisFrame"
// MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
class CChicken : public CDynamicProp
{
private:
	[[maybe_unused]] uint8_t __pad0c58[0x20]; // 0xc58
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xc78	
	CountdownTimer m_updateTimer; // 0xf40	
	Vector m_stuckAnchor; // 0xf58	
private:
	[[maybe_unused]] uint8_t __pad0f64[0x4]; // 0xf64
public:
	CountdownTimer m_stuckTimer; // 0xf68	
	CountdownTimer m_collisionStuckTimer; // 0xf80	
	bool m_isOnGround; // 0xf98	
private:
	[[maybe_unused]] uint8_t __pad0f99[0x3]; // 0xf99
public:
	Vector m_vFallVelocity; // 0xf9c	
	ChickenActivity m_desiredActivity; // 0xfa8	
	ChickenActivity m_currentActivity; // 0xfac	
	CountdownTimer m_activityTimer; // 0xfb0	
	float m_turnRate; // 0xfc8	
	CHandle< CBaseEntity > m_fleeFrom; // 0xfcc	
	CountdownTimer m_moveRateThrottleTimer; // 0xfd0	
	CountdownTimer m_startleTimer; // 0xfe8	
	CountdownTimer m_vocalizeTimer; // 0x1000	
	GameTime_t m_flWhenZombified; // 0x1018	
	// MNetworkEnable
	bool m_jumpedThisFrame; // 0x101c	
private:
	[[maybe_unused]] uint8_t __pad101d[0x3]; // 0x101d
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_leader; // 0x1020	
private:
	[[maybe_unused]] uint8_t __pad1024[0x14]; // 0x1024
public:
	CountdownTimer m_reuseTimer; // 0x1038	
	bool m_hasBeenUsed; // 0x1050	
private:
	[[maybe_unused]] uint8_t __pad1051[0x7]; // 0x1051
public:
	CountdownTimer m_jumpTimer; // 0x1058	
	float m_flLastJumpTime; // 0x1070	
	bool m_bInJump; // 0x1074	
private:
	[[maybe_unused]] uint8_t __pad1075[0x200b]; // 0x1075
public:
	CountdownTimer m_repathTimer; // 0x3080	
private:
	[[maybe_unused]] uint8_t __pad3098[0x80]; // 0x3098
public:
	Vector m_vecPathGoal; // 0x3118	
	GameTime_t m_flActiveFollowStartTime; // 0x3124	
	CountdownTimer m_followMinuteTimer; // 0x3128	
private:
	[[maybe_unused]] uint8_t __pad3140[0x8]; // 0x3140
public:
	CountdownTimer m_BlockDirectionTimer; // 0x3148	
	
	// Datamap fields:
	// void CChickenChickenTouch; // 0x0
	// void CChickenChickenThink; // 0x0
	// void CChickenChickenUse; // 0x0
};

