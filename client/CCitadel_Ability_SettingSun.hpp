#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcf8
// Has VTable
class CCitadel_Ability_SettingSun : public C_CitadelBaseAbility
{
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c40[0xb0]; // 0xc40
public:
	bool m_bWasSelected; // 0xcf0	
};

