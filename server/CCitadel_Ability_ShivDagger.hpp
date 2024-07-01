#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb20
// Has VTable
class CCitadel_Ability_ShivDagger : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x70]; // 0xaa8
public:
	bool m_bDaggerIsEmpowered; // 0xb18	
};

