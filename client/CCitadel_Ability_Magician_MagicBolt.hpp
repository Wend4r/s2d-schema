#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf30
// Has VTable
class CCitadel_Ability_Magician_MagicBolt : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ca0[0x8]; // 0xca0
public:
	CUtlVector< CHandle< C_CitadelProjectile > > m_vecDeployedProjectiles; // 0xca8	
	int32_t m_iCurrentRedirects; // 0xcc0	
};

