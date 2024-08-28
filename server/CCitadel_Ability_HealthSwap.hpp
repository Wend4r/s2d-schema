#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc18
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
class CCitadel_Ability_HealthSwap : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nFXIndex; // 0xab0	
	float m_flHealthToCaster; // 0xab4	
	float m_flTargetHealthLost; // 0xab8	
private:
	[[maybe_unused]] uint8_t __pad0abc[0x11c]; // 0xabc
public:
	// MNetworkEnable
	GameTime_t m_flPostCastHoldEndTime; // 0xbd8	
};

