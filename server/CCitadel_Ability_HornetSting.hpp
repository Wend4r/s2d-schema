#pragma once

#include <cstdint>

struct CitadelAbilityProjectileCreateInfo_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
class CCitadel_Ability_HornetSting : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x70]; // 0xab0
public:
	CitadelAbilityProjectileCreateInfo_t m_projInfo; // 0xb20	
};

