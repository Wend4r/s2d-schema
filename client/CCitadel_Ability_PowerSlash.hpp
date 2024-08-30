#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf10
// Has VTable
// 
// MNetworkVarNames "int m_nPowerLevel"
class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c58[0xc]; // 0xc58
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nPowerLevel; // 0xc64	
	ParticleIndex_t m_nCastParticle; // 0xc68	
};

