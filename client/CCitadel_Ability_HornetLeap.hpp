#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe68
// Has VTable
// 
// MNetworkVarNames "bool m_bLeaping"
// MNetworkVarNames "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x2]; // 0xc28
public:
	// MNetworkEnable
	bool m_bLeaping; // 0xc2a	
private:
	[[maybe_unused]] uint8_t __pad0c2b[0x1]; // 0xc2b
public:
	// MNetworkEnable
	GameTime_t m_flLeapStartTime; // 0xc2c	
	ParticleIndex_t m_nFXIndex; // 0xc30	
};

