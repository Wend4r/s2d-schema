#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf8
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashSlideTime"
// MNetworkVarNames "GameTime_t m_flSlowGetupStartTime"
// MNetworkVarNames "bool m_bShouldTriggerSlowGetup"
// MNetworkVarNames "bool m_bWantsSlide"
// MNetworkVarNames "bool m_bAirborneWhenDuckPressed"
// MNetworkVarNames "bool m_bIsSliding"
// MNetworkVarNames "bool m_bSlideIsSticky"
// MNetworkVarNames "float m_flSpeedAdjust"
// MNetworkVarNames "GameTime_t m_flDuckPressedTime"
// MNetworkVarNames "GameTime_t m_flSlideChangeTime"
// MNetworkVarNames "GameTime_t m_flSlidingOnFlatStartTime"
// MNetworkVarNames "int m_nJumpsThisSlideSession"
// MNetworkVarNames "GameTime_t m_flOnGroundStartTime"
// MNetworkVarNames "GameTime_t m_flDashSlideStartTime"
class CCitadel_Ability_Slide : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x58]; // 0xc50
public:
	// MNetworkEnable
	CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xca8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlowGetupStartTime; // 0xcc0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bShouldTriggerSlowGetup; // 0xcc4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bWantsSlide; // 0xcc5	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bAirborneWhenDuckPressed; // 0xcc6	
	// MNetworkEnable
	bool m_bIsSliding; // 0xcc7	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bSlideIsSticky; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cc9[0x3]; // 0xcc9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flSpeedAdjust; // 0xccc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDuckPressedTime; // 0xcd0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlideChangeTime; // 0xcd4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSlidingOnFlatStartTime; // 0xcd8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	int32_t m_nJumpsThisSlideSession; // 0xcdc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flOnGroundStartTime; // 0xce0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDashSlideStartTime; // 0xce4	
	bool m_bStartedSlideViaProbeSlope; // 0xce8	
private:
	[[maybe_unused]] uint8_t __pad0ce9[0x3]; // 0xce9
public:
	ParticleIndex_t m_nSlideEffectIndex; // 0xcec	
};

