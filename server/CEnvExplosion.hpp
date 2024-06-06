#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
class CEnvExplosion : public CModelPointEntity
{
public:
	int32_t m_iMagnitude; // 0x710	
	float m_flPlayerDamage; // 0x714	
	int32_t m_iRadiusOverride; // 0x718	
	float m_flInnerRadius; // 0x71c	
	int32_t m_spriteScale; // 0x720	
	float m_flDamageForce; // 0x724	
	CHandle< CBaseEntity > m_hInflictor; // 0x728	
	int32_t m_iCustomDamageType; // 0x72c	
private:
	[[maybe_unused]] uint8_t __pad0730[0x8]; // 0x730
public:
	CUtlSymbolLarge m_iszExplosionType; // 0x738	
	CUtlSymbolLarge m_iszCustomEffectName; // 0x740	
	CUtlSymbolLarge m_iszCustomSoundName; // 0x748	
	Class_T m_iClassIgnore; // 0x750	
	Class_T m_iClassIgnore2; // 0x754	
	CUtlSymbolLarge m_iszEntityIgnoreName; // 0x758	
	CHandle< CBaseEntity > m_hEntityIgnore; // 0x760	
	
	// Datamap fields:
	// uint32_t m_nExplosionType; // 0x730
	// void CEnvExplosionSmoke; // 0x0
	// void InputExplode; // 0x0
};

