#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "Vector m_vecUnitStatusOffset"
class CNPC_BaseDefenseSentry : public CNPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x8]; // 0xc28
public:
	// MNetworkEnable
	Vector m_vecUnitStatusOffset; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c3c[0x28]; // 0xc3c
public:
	float m_flAttackCone; // 0xc64	
	float m_flAttackDelay; // 0xc68	
	GameTime_t m_flLastAlertSound; // 0xc6c	
private:
	[[maybe_unused]] uint8_t __pad0c70[0x4]; // 0xc70
public:
	int16_t m_nSentryLevel; // 0xc74	
private:
	[[maybe_unused]] uint8_t __pad0c76[0x2]; // 0xc76
public:
	Vector m_vecForward; // 0xc78	
	
	// Datamap fields:
	// void EnableAttacking; // 0x0
	// void DisableAttacking; // 0x0
};

