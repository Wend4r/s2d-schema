#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd90
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xc28	
	float m_flHealthToCaster; // 0xc2c	
	float m_flTargetHealthLost; // 0xc30	
private:
	[[maybe_unused]] uint8_t __pad0c34[0x11c]; // 0xc34
public:
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xd50	
};

