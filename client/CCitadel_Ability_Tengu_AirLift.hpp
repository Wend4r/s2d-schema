#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe40
// Has VTable
// 
// MNetworkVarNames "bool m_bFlying"
// MNetworkVarNames "bool m_bFlyingStarted"
// MNetworkVarNames "bool m_bIsGrabbing"
// MNetworkVarNames "bool m_bIsHoldingBomb"
// MNetworkVarNames "float m_flCurrentSpeed"
class CCitadel_Ability_Tengu_AirLift : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nHoldBombEffect; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c2c[0x1fc]; // 0xc2c
public:
	// MNetworkEnable
	bool m_bFlying; // 0xe28	
	// MNetworkEnable
	bool m_bFlyingStarted; // 0xe29	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xe2a	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xe2b	
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xe2c	
};

