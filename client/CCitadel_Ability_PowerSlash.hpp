#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf20
// Has VTable
// 
// MNetworkVarNames "int m_nPowerLevel"
class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c68[0xc]; // 0xc68
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nPowerLevel; // 0xc74	
	ParticleIndex_t m_nCastParticle; // 0xc78	
};

