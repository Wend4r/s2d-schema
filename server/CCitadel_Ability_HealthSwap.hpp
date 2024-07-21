#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc10
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xaa8	
	float m_flHealthToCaster; // 0xaac	
	float m_flTargetHealthLost; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab4[0x11c]; // 0xab4
public:
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xbd0	
};

