#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7e8
// Has VTable
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x790	
	float m_flPlayerDamage; // 0x794	
	int32_t m_iRadiusOverride; // 0x798	
	float m_flInnerRadius; // 0x79c	
	int32_t m_spriteScale; // 0x7a0	
	float m_flDamageForce; // 0x7a4	
	CHandle< CBaseEntity > m_hInflictor; // 0x7a8	
	DamageTypes_t m_iCustomDamageType; // 0x7ac	
	bool m_bCreateDebris; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07b1[0x7]; // 0x7b1
public:
	CUtlSymbolLarge m_iszExplosionType; // 0x7b8	
	CUtlSymbolLarge m_iszCustomEffectName; // 0x7c0	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x7c8	
	Class_T m_iClassIgnore; // 0x7d0	
	Class_T m_iClassIgnore2; // 0x7d4	
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x7d8	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x7e0	
	
	// Datamap fields:
	// uint32_t m_nExplosionType; // 0x7b4
	// void CEnvExplosionSmoke; // 0x0
	// void InputExplode; // 0x0
};

