#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7a8
// Has VTable
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x750	
	float m_flPlayerDamage; // 0x754	
	int32_t m_iRadiusOverride; // 0x758	
	float m_flInnerRadius; // 0x75c	
	int32_t m_spriteScale; // 0x760	
	float m_flDamageForce; // 0x764	
	CHandle< CBaseEntity > m_hInflictor; // 0x768	
	DamageTypes_t m_iCustomDamageType; // 0x76c	
	bool m_bCreateDebris; // 0x770	
private:
	[[maybe_unused]] uint8_t __pad0771[0x7]; // 0x771
public:
	CUtlSymbolLarge m_iszExplosionType; // 0x778	
	CUtlSymbolLarge m_iszCustomEffectName; // 0x780	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x788	
	Class_T m_iClassIgnore; // 0x790	
	Class_T m_iClassIgnore2; // 0x794	
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x798	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x7a0	
	
	// Datamap fields:
	// uint32_t m_nExplosionType; // 0x774
	// void CEnvExplosionSmoke; // 0x0
	// void InputExplode; // 0x0
};

