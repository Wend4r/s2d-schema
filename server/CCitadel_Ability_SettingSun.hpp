#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd08
// Has VTable
class CCitadel_Ability_SettingSun : public CCitadelBaseAbility
{
public:
	bool m_bProjectileActive; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aa9[0x18f]; // 0xaa9
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xc38	
private:
	[[maybe_unused]] uint8_t __pad0c50[0xb0]; // 0xc50
public:
	bool m_bWasSelected; // 0xd00	
};

