#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xb00	
	float m_flHealthToCaster; // 0xb04	
	float m_flTargetHealthLost; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x18c]; // 0xb0c
public:
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xc98	
};

