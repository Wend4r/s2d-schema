#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee0
// Has VTable
// 
// MNetworkVarNames "bool m_bLeaping"
// MNetworkVarNames "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x2]; // 0xca0
public:
	// MNetworkEnable
	bool m_bLeaping; // 0xca2	
private:
	[[maybe_unused]] uint8_t __pad0ca3[0x1]; // 0xca3
public:
	// MNetworkEnable
	GameTime_t m_flLeapStartTime; // 0xca4	
	ParticleIndex_t m_nFXIndex; // 0xca8	
};

