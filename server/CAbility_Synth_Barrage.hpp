#pragma once

#include <cstdint>

struct ShotID_t;
struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd80
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flNextShootTime"
class CAbility_Synth_Barrage : public CCitadelBaseAbility
{
public:
	ShotID_t m_tLastShotID; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x26c]; // 0xb04
public:
	int32_t m_nProjectilesScheduled; // 0xd70	
	ParticleIndex_t m_ChannelParticle; // 0xd74	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flNextShootTime; // 0xd78	
};

