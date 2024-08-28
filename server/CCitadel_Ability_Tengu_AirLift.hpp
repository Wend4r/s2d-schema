#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bFlyingStarted"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bIsHoldingBomb"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x1c]; // 0xab0
public:
	ParticleIndex_t m_nHoldBombEffect; // 0xacc	
private:
	[[maybe_unused]] uint8_t __pad0ad0[0x1f8]; // 0xad0
public:
	// MNetworkEnable
	bool m_bFlying; // 0xcc8	
	// MNetworkEnable
	bool m_bFlyingStarted; // 0xcc9	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xcca	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xccb	
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xccc	
};

