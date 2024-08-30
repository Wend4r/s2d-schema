#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb98
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flExplodeEndTime"
// MNetworkVarNames "GameTime_t m_flBuffEndTime"
class CCitadel_Ability_InfinitySlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ae0[0xa8]; // 0xae0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flExplodeEndTime; // 0xb88	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flBuffEndTime; // 0xb8c	
	ParticleIndex_t m_nCastEffect; // 0xb90	
};

