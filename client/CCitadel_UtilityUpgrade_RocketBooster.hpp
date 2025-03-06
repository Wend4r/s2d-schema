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
// MNetworkVarNames "bool m_bCanCrash"
// MNetworkVarNames "Vector m_vecCrashPosition"
// MNetworkVarNames "Vector m_vecCrashDirection"
class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots
{
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xcd8	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCanSlamDownChanged"
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flCastTime; // 0xcdc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCrashingDown; // 0xce0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bImpulseApplied; // 0xce1	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanCrash; // 0xce2	
private:
	[[maybe_unused]] uint8_t __pad0ce3[0x1]; // 0xce3
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCrashPosition; // 0xce4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCrashDirection; // 0xcf0	
};

