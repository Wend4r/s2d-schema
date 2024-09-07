#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xef0
// Has VTable
// 
// MNetworkVarNames "Vector m_vStrikeVel"
// MNetworkVarNames "float m_flStartHeight"
class CCitadel_Ability_LashDownStrike : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0xa8]; // 0xc60
public:
	GameTime_t m_ImpactTime; // 0xd08	
	Vector m_vDamagePos; // 0xd0c	
private:
	[[maybe_unused]] uint8_t __pad0d18[0x4]; // 0xd18
public:
	ParticleIndex_t m_PreviewEffect; // 0xd1c	
private:
	[[maybe_unused]] uint8_t __pad0d20[0x1c0]; // 0xd20
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vStrikeVel; // 0xee0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	float m_flStartHeight; // 0xeec	
};

