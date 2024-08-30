#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xad8	
	float m_flHealthToCaster; // 0xadc	
	float m_flTargetHealthLost; // 0xae0	
private:
	[[maybe_unused]] uint8_t __pad0ae4[0x11c]; // 0xae4
public:
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xc00	
};

