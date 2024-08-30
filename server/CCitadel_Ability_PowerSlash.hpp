#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd98
// Has VTable
// 
// MNetworkVarNames "int m_nPowerLevel"
class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ae0[0xc]; // 0xae0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	int32_t m_nPowerLevel; // 0xaec	
	ParticleIndex_t m_nCastParticle; // 0xaf0	
};

