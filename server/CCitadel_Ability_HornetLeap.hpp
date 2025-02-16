#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "bool m_bLeaping"
// MNetworkVarNames "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x2]; // 0xb00
public:
	// MNetworkEnable
	bool m_bLeaping; // 0xb02	
private:
	[[maybe_unused]] uint8_t __pad0b03[0x1]; // 0xb03
public:
	// MNetworkEnable
	GameTime_t m_flLeapStartTime; // 0xb04	
	ParticleIndex_t m_nFXIndex; // 0xb08	
private:
	[[maybe_unused]] uint8_t __pad0b0c[0x234]; // 0xb0c
public:
	ParticleIndex_t m_TrailFX; // 0xd40	
};

