#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb80
// Has VTable
class CCitadel_Ability_Gunslinger_Salvo : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x4]; // 0xb00
public:
	CHandle< CBaseEntity > m_CastTarget; // 0xb04	
	int32_t m_iCurrentShots; // 0xb08	
	int32_t m_iTotalShots; // 0xb0c	
};

