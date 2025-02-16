#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
class CCitadel_Ability_Gunslinger_Salvo : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x4]; // 0xca0
public:
	CHandle< C_BaseEntity > m_CastTarget; // 0xca4	
	int32_t m_iCurrentShots; // 0xca8	
	int32_t m_iTotalShots; // 0xcac	
};

