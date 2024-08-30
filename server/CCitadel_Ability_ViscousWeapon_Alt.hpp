#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkVarNames "EViscousChargedGunState m_ChargeState"
// MNetworkVarNames "float m_nClipConsumed"
// MNetworkVarNames "bool m_bIsCharging"
// MNetworkVarNames "bool m_bIsToggled"
class CCitadel_Ability_ViscousWeapon_Alt : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	EViscousChargedGunState m_ChargeState; // 0xad8	
	// MNetworkEnable
	float m_nClipConsumed; // 0xadc	
	// MNetworkEnable
	bool m_bIsCharging; // 0xae0	
	// MNetworkEnable
	bool m_bIsToggled; // 0xae1	
private:
	[[maybe_unused]] uint8_t __pad0ae2[0x2]; // 0xae2
public:
	ParticleIndex_t m_fxChargingParticle; // 0xae4	
private:
	[[maybe_unused]] uint8_t __pad0ae8[0x8]; // 0xae8
public:
	GameTime_t m_flLastBulletConsumedTime; // 0xaf0	
};

