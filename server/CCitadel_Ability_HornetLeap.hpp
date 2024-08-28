#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcf8
// Has VTable
// 
// MNetworkVarNames "bool m_bLeaping"
// MNetworkVarNames "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x2]; // 0xab0
public:
	// MNetworkEnable
	bool m_bLeaping; // 0xab2	
private:
	[[maybe_unused]] uint8_t __pad0ab3[0x1]; // 0xab3
public:
	// MNetworkEnable
	GameTime_t m_flLeapStartTime; // 0xab4	
	ParticleIndex_t m_nFXIndex; // 0xab8	
private:
	[[maybe_unused]] uint8_t __pad0abc[0x234]; // 0xabc
public:
	ParticleIndex_t m_TrailFX; // 0xcf0	
};

