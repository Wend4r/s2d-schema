#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a0
// Has VTable
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x748	
	float m_flPlayerDamage; // 0x74c	
	int32_t m_iRadiusOverride; // 0x750	
	float m_flInnerRadius; // 0x754	
	int32_t m_spriteScale; // 0x758	
	float m_flDamageForce; // 0x75c	
	CHandle< CBaseEntity > m_hInflictor; // 0x760	
	int32_t m_iCustomDamageType; // 0x764	
	bool m_bCreateDebris; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad0769[0x7]; // 0x769
public:
	CUtlSymbolLarge m_iszExplosionType; // 0x770	
	CUtlSymbolLarge m_iszCustomEffectName; // 0x778	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x780	
	Class_T m_iClassIgnore; // 0x788	
	Class_T m_iClassIgnore2; // 0x78c	
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x790	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x798	
	
	// Datamap fields:
	// uint32_t m_nExplosionType; // 0x76c
	// void CEnvExplosionSmoke; // 0x0
	// void InputExplode; // 0x0
};

