#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd28
// Has VTable
class CCitadel_Ability_SettingSun : public CCitadelBaseAbility
{
public:
	bool m_bProjectileActive; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x18f]; // 0xb01
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xc90	
private:
	[[maybe_unused]] uint8_t __pad0ca8[0x78]; // 0xca8
public:
	bool m_bWasSelected; // 0xd20	
};

