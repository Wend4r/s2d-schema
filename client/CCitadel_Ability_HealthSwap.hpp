#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xc60	
	float m_flHealthToCaster; // 0xc64	
	float m_flTargetHealthLost; // 0xc68	
private:
	[[maybe_unused]] uint8_t __pad0c6c[0x11c]; // 0xc6c
public:
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xd88	
};

