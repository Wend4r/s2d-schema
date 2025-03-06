#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd78
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
	ParticleIndex_t m_nTargetingParticleIndex; // 0xb90	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCanSlamDownChanged"
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flCastTime; // 0xb94	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCrashingDown; // 0xb98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bImpulseApplied; // 0xb99	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bCanCrash; // 0xb9a	
private:
	[[maybe_unused]] uint8_t __pad0b9b[0x1]; // 0xb9b
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCrashPosition; // 0xb9c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vecCrashDirection; // 0xba8	
};

