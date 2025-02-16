#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd38
// Has VTable
class CCitadel_Ability_SettingSun : public C_CitadelBaseAbility
{
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0cb8[0x78]; // 0xcb8
public:
	bool m_bWasSelected; // 0xd30	
};

