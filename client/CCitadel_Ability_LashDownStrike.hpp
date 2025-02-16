#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf30
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0xa8]; // 0xca0
public:
	GameTime_t m_ImpactTime; // 0xd48	
	Vector m_vDamagePos; // 0xd4c	
private:
	[[maybe_unused]] uint8_t __pad0d58[0x4]; // 0xd58
public:
	ParticleIndex_t m_PreviewEffect; // 0xd5c	
private:
	[[maybe_unused]] uint8_t __pad0d60[0x1c0]; // 0xd60
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	Vector m_vStrikeVel; // 0xf20	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xf2c	
};

