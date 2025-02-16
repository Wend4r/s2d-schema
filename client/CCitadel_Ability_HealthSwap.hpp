#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe78
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xca0	
	float m_flHealthToCaster; // 0xca4	
	float m_flTargetHealthLost; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0cac[0x18c]; // 0xcac
public:
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xe38	
};

