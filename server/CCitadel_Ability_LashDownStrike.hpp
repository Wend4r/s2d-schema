#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd78
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0xa8]; // 0xaa8
public:
	GameTime_t m_ImpactTime; // 0xb50	
	Vector m_vDamagePos; // 0xb54	
	Vector m_vDamageDir; // 0xb60	
private:
	[[maybe_unused]] uint8_t __pad0b6c[0x4]; // 0xb6c
public:
	CUtlVector< CHandle< CBaseEntity > > m_vHitEnemies; // 0xb70	
private:
	[[maybe_unused]] uint8_t __pad0b88[0x18]; // 0xb88
public:
	ParticleIndex_t m_PreviewEffect; // 0xba0	
private:
	[[maybe_unused]] uint8_t __pad0ba4[0x1c4]; // 0xba4
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStrikeVel; // 0xd68	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xd74	
};

