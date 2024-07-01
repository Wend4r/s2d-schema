#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca0
// Has VTable
class CCitadel_Ability_ShivDagger : public CCitadelBaseShivAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x70]; // 0xc28
public:
	bool m_bDaggerIsEmpowered; // 0xc98	
};

