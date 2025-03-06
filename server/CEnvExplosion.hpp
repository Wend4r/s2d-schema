#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
// Has VTable
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x7b8	
	float m_flPlayerDamage; // 0x7bc	
	int32_t m_iRadiusOverride; // 0x7c0	
	float m_flInnerRadius; // 0x7c4	
	float m_flDamageForce; // 0x7c8	
	CHandle< CBaseEntity > m_hInflictor; // 0x7cc	
	DamageTypes_t m_iCustomDamageType; // 0x7d0	
	bool m_bCreateDebris; // 0x7d4	
private:
	[[maybe_unused]] uint8_t __pad07d5[0xb]; // 0x7d5
public:
	CUtlSymbolLarge m_iszCustomEffectName; // 0x7e0	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x7e8	
	bool m_bSuppressParticleImpulse; // 0x7f0	
private:
	[[maybe_unused]] uint8_t __pad07f1[0x3]; // 0x7f1
public:
	Class_T m_iClassIgnore; // 0x7f4	
	Class_T m_iClassIgnore2; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad07fc[0x4]; // 0x7fc
public:
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x800	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x808	
	
	// Datamap fields:
	// CUtlSymbolLarge explosion_type; // 0x7fffffff
	// uint32_t m_nExplosionType; // 0x7d8
	// void InputExplode; // 0x0
};

