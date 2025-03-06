#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee0
// Has VTable
class CCitadel_Ability_Magician_MagicBolt : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x8]; // 0xc50
public:
	CUtlVector< CHandle< C_CitadelProjectile > > m_vecDeployedProjectiles; // 0xc58	
	int32_t m_iCurrentRedirects; // 0xc70	
};

