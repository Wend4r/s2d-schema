#pragma once

#include <cstdint>

struct CitadelAbilityProjectileCreateInfo_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc80
// Has VTable
class CCitadel_Ability_HornetSting : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x70]; // 0xaa8
public:
	CitadelAbilityProjectileCreateInfo_t m_projInfo; // 0xb18	
};

