#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee0
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0xa8]; // 0xc50
public:
	GameTime_t m_ImpactTime; // 0xcf8	
	Vector m_vDamagePos; // 0xcfc	
private:
	[[maybe_unused]] uint8_t __pad0d08[0x4]; // 0xd08
public:
	ParticleIndex_t m_PreviewEffect; // 0xd0c	
private:
	[[maybe_unused]] uint8_t __pad0d10[0x1c0]; // 0xd10
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStrikeVel; // 0xed0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xedc	
};

