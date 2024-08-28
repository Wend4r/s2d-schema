#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd80
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0xa8]; // 0xab0
public:
	GameTime_t m_ImpactTime; // 0xb58	
	Vector m_vDamagePos; // 0xb5c	
	Vector m_vDamageDir; // 0xb68	
private:
	[[maybe_unused]] uint8_t __pad0b74[0x4]; // 0xb74
public:
	CUtlVector< CHandle< CBaseEntity > > m_vHitEnemies; // 0xb78	
private:
	[[maybe_unused]] uint8_t __pad0b90[0x1c]; // 0xb90
public:
	ParticleIndex_t m_PreviewEffect; // 0xbac	
private:
	[[maybe_unused]] uint8_t __pad0bb0[0x1c0]; // 0xbb0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStrikeVel; // 0xd70	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xd7c	
};

