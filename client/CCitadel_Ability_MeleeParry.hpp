#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flParryStartTime"
// MNetworkVarNames "bool m_bAttackParried"
// MNetworkVarNames "GameTime_t m_flParrySuccessTime"
class CCitadel_Ability_MeleeParry : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nActiveFX; // 0xca0	
	// MNetworkEnable
	GameTime_t m_flParryStartTime; // 0xca4	
	// MNetworkEnable
	bool m_bAttackParried; // 0xca8	
private:
	[[maybe_unused]] uint8_t __pad0ca9[0x3]; // 0xca9
public:
	// MNetworkEnable
	GameTime_t m_flParrySuccessTime; // 0xcac	
};

