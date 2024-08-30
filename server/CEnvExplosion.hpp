#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c0
// Has VTable
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x768	
	float m_flPlayerDamage; // 0x76c	
	int32_t m_iRadiusOverride; // 0x770	
	float m_flInnerRadius; // 0x774	
	int32_t m_spriteScale; // 0x778	
	float m_flDamageForce; // 0x77c	
	CHandle< CBaseEntity > m_hInflictor; // 0x780	
	int32_t m_iCustomDamageType; // 0x784	
	bool m_bCreateDebris; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0789[0x7]; // 0x789
public:
	CUtlSymbolLarge m_iszExplosionType; // 0x790	
	CUtlSymbolLarge m_iszCustomEffectName; // 0x798	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x7a0	
	Class_T m_iClassIgnore; // 0x7a8	
	Class_T m_iClassIgnore2; // 0x7ac	
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x7b0	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x7b8	
	
	// Datamap fields:
	// uint32_t m_nExplosionType; // 0x78c
	// void CEnvExplosionSmoke; // 0x0
	// void InputExplode; // 0x0
};

