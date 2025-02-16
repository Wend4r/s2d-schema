#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xdf0
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0xa8]; // 0xb00
public:
	GameTime_t m_ImpactTime; // 0xba8	
	Vector m_vDamagePos; // 0xbac	
	Vector m_vDamageDir; // 0xbb8	
private:
	[[maybe_unused]] uint8_t __pad0bc4[0x4]; // 0xbc4
public:
	CUtlVector< CHandle< CBaseEntity > > m_vHitEnemies; // 0xbc8	
private:
	[[maybe_unused]] uint8_t __pad0be0[0x20]; // 0xbe0
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // 0xc00	
	ParticleIndex_t m_PreviewEffect; // 0xc18	
private:
	[[maybe_unused]] uint8_t __pad0c1c[0x1c4]; // 0xc1c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStrikeVel; // 0xde0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xdec	
};

