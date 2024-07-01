#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xeb8
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0xa8]; // 0xc28
public:
	GameTime_t m_ImpactTime; // 0xcd0	
	Vector m_vDamagePos; // 0xcd4	
private:
	[[maybe_unused]] uint8_t __pad0ce0[0x4]; // 0xce0
public:
	ParticleIndex_t m_PreviewEffect; // 0xce4	
private:
	[[maybe_unused]] uint8_t __pad0ce8[0x1c0]; // 0xce8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStrikeVel; // 0xea8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xeb4	
};

