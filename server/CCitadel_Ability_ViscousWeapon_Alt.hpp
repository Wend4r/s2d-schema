#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd00
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
	EViscousChargedGunState m_ChargeState; // 0xab0	
	// MNetworkEnable
	float m_nClipConsumed; // 0xab4	
	// MNetworkEnable
	bool m_bIsCharging; // 0xab8	
	// MNetworkEnable
	bool m_bIsToggled; // 0xab9	
private:
	[[maybe_unused]] uint8_t __pad0aba[0x2]; // 0xaba
public:
	ParticleIndex_t m_fxChargingParticle; // 0xabc	
private:
	[[maybe_unused]] uint8_t __pad0ac0[0x8]; // 0xac0
public:
	GameTime_t m_flLastBulletConsumedTime; // 0xac8	
};

