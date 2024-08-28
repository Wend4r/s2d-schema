#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd10
// Has VTable
class CCitadel_Ability_SettingSun : public CCitadelBaseAbility
{
public:
	bool m_bProjectileActive; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x18f]; // 0xab1
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xc40	
private:
	[[maybe_unused]] uint8_t __pad0c58[0xb0]; // 0xc58
public:
	bool m_bWasSelected; // 0xd08	
};

