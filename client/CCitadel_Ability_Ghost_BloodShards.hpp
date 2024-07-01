#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd90
// Has VTable
class CCitadel_Ability_Ghost_BloodShards : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x150]; // 0xc28
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecDamagedTargets; // 0xd78	
};

