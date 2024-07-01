#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcf0
// Has VTable
// 
// MNetworkVarNames "bool m_bLeaping"
// MNetworkVarNames "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x2]; // 0xaa8
public:
	// MNetworkEnable
	bool m_bLeaping; // 0xaaa	
private:
	[[maybe_unused]] uint8_t __pad0aab[0x1]; // 0xaab
public:
	// MNetworkEnable
	GameTime_t m_flLeapStartTime; // 0xaac	
	ParticleIndex_t m_nFXIndex; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab4[0x234]; // 0xab4
public:
	ParticleIndex_t m_TrailFX; // 0xce8	
};

