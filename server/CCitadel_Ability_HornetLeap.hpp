#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "bool m_bLeaping"
// MNetworkVarNames "GameTime_t m_flLeapStartTime"
class CCitadel_Ability_HornetLeap : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x2]; // 0xad8
public:
	// MNetworkEnable
	bool m_bLeaping; // 0xada	
private:
	[[maybe_unused]] uint8_t __pad0adb[0x1]; // 0xadb
public:
	// MNetworkEnable
	GameTime_t m_flLeapStartTime; // 0xadc	
	ParticleIndex_t m_nFXIndex; // 0xae0	
private:
	[[maybe_unused]] uint8_t __pad0ae4[0x234]; // 0xae4
public:
	ParticleIndex_t m_TrailFX; // 0xd18	
};

