#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd90
// Has VTable
class CCitadel_Ability_Magician_MagicBolt : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x8]; // 0xb00
public:
	CUtlVector< CHandle< CCitadelProjectile > > m_vecDeployedProjectiles; // 0xb08	
	int32_t m_iCurrentRedirects; // 0xb20	
};

