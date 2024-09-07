#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flCastTime"
// MNetworkVarNames "bool m_bCrashingDown"
// MNetworkVarNames "bool m_bImpulseApplied"
// MNetworkVarNames "Vector m_vecCrashPosition"
// MNetworkVarNames "Vector m_vecCrashDirection"
class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots
{
private:
	[[maybe_unused]] uint8_t __pad0ce8[0x4]; // 0xce8
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xcec	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCanSlamDownChanged"
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flCastTime; // 0xcf0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCrashingDown; // 0xcf4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bImpulseApplied; // 0xcf5	
private:
	[[maybe_unused]] uint8_t __pad0cf6[0x2]; // 0xcf6
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCrashPosition; // 0xcf8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCrashDirection; // 0xd04	
};

