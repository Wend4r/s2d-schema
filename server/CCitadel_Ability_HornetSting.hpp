#pragma once

#include <cstdint>

struct CitadelAbilityProjectileCreateInfo_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcb0
// Has VTable
class CCitadel_Ability_HornetSting : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x70]; // 0xad8
public:
	CitadelAbilityProjectileCreateInfo_t m_projInfo; // 0xb48	
};

