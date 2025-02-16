#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xef0
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
	EViscousChargedGunState m_ChargeState; // 0xca0	
	// MNetworkEnable
	float m_nClipConsumed; // 0xca4	
	// MNetworkEnable
	bool m_bIsCharging; // 0xca8	
	// MNetworkEnable
	bool m_bIsToggled; // 0xca9	
private:
	[[maybe_unused]] uint8_t __pad0caa[0x2]; // 0xcaa
public:
	ParticleIndex_t m_fxChargingParticle; // 0xcac	
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x8]; // 0xcb0
public:
	GameTime_t m_flLastBulletConsumedTime; // 0xcb8	
};

