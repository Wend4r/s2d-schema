#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextShootTime"
class CAbility_Synth_Barrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x268]; // 0xc50
public:
	int32_t m_nProjectilesScheduled; // 0xeb8	
	ParticleIndex_t m_ChannelParticle; // 0xebc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextShootTime; // 0xec0	
};

