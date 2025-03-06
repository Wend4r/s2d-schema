#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea0
// Has VTable
// 
// MNetworkVarNames "EViscousChargedGunState m_ChargeState"
// MNetworkVarNames "float m_nClipConsumed"
// MNetworkVarNames "bool m_bIsCharging"
// MNetworkVarNames "bool m_bIsToggled"
class CCitadel_Ability_ViscousWeapon_Alt : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	EViscousChargedGunState m_ChargeState; // 0xc50	
	// MNetworkEnable
	float m_nClipConsumed; // 0xc54	
	// MNetworkEnable
	bool m_bIsCharging; // 0xc58	
	// MNetworkEnable
	bool m_bIsToggled; // 0xc59	
private:
	[[maybe_unused]] uint8_t __pad0c5a[0x2]; // 0xc5a
public:
	ParticleIndex_t m_fxChargingParticle; // 0xc5c	
private:
	[[maybe_unused]] uint8_t __pad0c60[0x8]; // 0xc60
public:
	GameTime_t m_flLastBulletConsumedTime; // 0xc68	
};

