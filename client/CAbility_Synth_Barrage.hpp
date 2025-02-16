#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf18
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextShootTime"
class CAbility_Synth_Barrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x268]; // 0xca0
public:
	int32_t m_nProjectilesScheduled; // 0xf08	
	ParticleIndex_t m_ChannelParticle; // 0xf0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextShootTime; // 0xf10	
};

