#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb50
// Has VTable
// 
// MNetworkIncludeByName "m_bTakesDamage"
// MNetworkIncludeByName "m_nTakeDamageFlags"
// MNetworkVarNames "Vector m_vecUnitStatusOffset"
class CNPC_BaseDefenseSentry : public CNPC_SimpleAnimatingAI
{
private:
	[[maybe_unused]] uint8_t __pad0af0[0x8]; // 0xaf0
public:
	// MNetworkEnable
	Vector m_vecUnitStatusOffset; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x28]; // 0xb04
public:
	float m_flAttackCone; // 0xb2c	
	float m_flAttackDelay; // 0xb30	
	GameTime_t m_flLastAlertSound; // 0xb34	
private:
	[[maybe_unused]] uint8_t __pad0b38[0x4]; // 0xb38
public:
	int16_t m_nSentryLevel; // 0xb3c	
private:
	[[maybe_unused]] uint8_t __pad0b3e[0x2]; // 0xb3e
public:
	Vector m_vecForward; // 0xb40	
	
	// Datamap fields:
	// void EnableAttacking; // 0x0
	// void DisableAttacking; // 0x0
};

