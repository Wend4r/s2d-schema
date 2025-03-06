#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
class CCitadel_Ability_Gunslinger_Salvo : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x4]; // 0xc50
public:
	CHandle< C_BaseEntity > m_CastTarget; // 0xc54	
	int32_t m_iCurrentShots; // 0xc58	
	int32_t m_iTotalShots; // 0xc5c	
};

