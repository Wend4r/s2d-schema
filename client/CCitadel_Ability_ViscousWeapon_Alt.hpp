#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe78
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
	EViscousChargedGunState m_ChargeState; // 0xc28	
	// MNetworkEnable
	float m_nClipConsumed; // 0xc2c	
	// MNetworkEnable
	bool m_bIsCharging; // 0xc30	
	// MNetworkEnable
	bool m_bIsToggled; // 0xc31	
private:
	[[maybe_unused]] uint8_t __pad0c32[0x2]; // 0xc32
public:
	ParticleIndex_t m_fxChargingParticle; // 0xc34	
private:
	[[maybe_unused]] uint8_t __pad0c38[0x8]; // 0xc38
public:
	GameTime_t m_flLastBulletConsumedTime; // 0xc40	
};

