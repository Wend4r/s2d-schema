#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xec0
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
	[[maybe_unused]] uint8_t __pad0cd8[0x4]; // 0xcd8
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xcdc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCanSlamDownChanged"
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flCastTime; // 0xce0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bCrashingDown; // 0xce4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bImpulseApplied; // 0xce5	
private:
	[[maybe_unused]] uint8_t __pad0ce6[0x2]; // 0xce6
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCrashPosition; // 0xce8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vecCrashDirection; // 0xcf4	
};

