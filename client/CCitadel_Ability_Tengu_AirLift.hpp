#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe68
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
	ParticleIndex_t m_nHoldBombEffect; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c54[0x1fc]; // 0xc54
public:
	// MNetworkEnable
	bool m_bFlying; // 0xe50	
	// MNetworkEnable
	bool m_bFlyingStarted; // 0xe51	
	// MNetworkEnable
	bool m_bIsGrabbing; // 0xe52	
	// MNetworkEnable
	bool m_bIsHoldingBomb; // 0xe53	
	// MNetworkEnable
	float m_flCurrentSpeed; // 0xe54	
};

