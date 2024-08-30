#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xda8
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0xa8]; // 0xad8
public:
	GameTime_t m_ImpactTime; // 0xb80	
	Vector m_vDamagePos; // 0xb84	
	Vector m_vDamageDir; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b9c[0x4]; // 0xb9c
public:
	CUtlVector< CHandle< CBaseEntity > > m_vHitEnemies; // 0xba0	
private:
	[[maybe_unused]] uint8_t __pad0bb8[0x1c]; // 0xbb8
public:
	ParticleIndex_t m_PreviewEffect; // 0xbd4	
private:
	[[maybe_unused]] uint8_t __pad0bd8[0x1c0]; // 0xbd8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStrikeVel; // 0xd98	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xda4	
};

