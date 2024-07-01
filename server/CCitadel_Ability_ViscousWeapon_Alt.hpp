#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcf8
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
	EViscousChargedGunState m_ChargeState; // 0xaa8	
	// MNetworkEnable
	float m_nClipConsumed; // 0xaac	
	// MNetworkEnable
	bool m_bIsCharging; // 0xab0	
	// MNetworkEnable
	bool m_bIsToggled; // 0xab1	
private:
	[[maybe_unused]] uint8_t __pad0ab2[0x2]; // 0xab2
public:
	ParticleIndex_t m_fxChargingParticle; // 0xab4	
private:
	[[maybe_unused]] uint8_t __pad0ab8[0x8]; // 0xab8
public:
	GameTime_t m_flLastBulletConsumedTime; // 0xac0	
};

