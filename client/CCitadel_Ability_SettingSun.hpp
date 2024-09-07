#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd30
// Has VTable
class CCitadel_Ability_SettingSun : public C_CitadelBaseAbility
{
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xc60	
private:
	[[maybe_unused]] uint8_t __pad0c78[0xb0]; // 0xc78
public:
	bool m_bWasSelected; // 0xd28	
};

