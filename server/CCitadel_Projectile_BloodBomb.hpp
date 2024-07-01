#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
// Has VTable
class CCitadel_Projectile_BloodBomb : public CCitadelProjectile
{
public:
	bool m_bSecondBomb; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad07f9[0x3]; // 0x7f9
public:
	int32_t m_nBeepSoundBuildupCount; // 0x7fc	
	float m_flBeepSoundIntervalBias; // 0x800	
	float m_flBeepSoundMaxFrequency; // 0x804	
	float m_flArmingDuration; // 0x808	
private:
	[[maybe_unused]] uint8_t __pad080c[0x4]; // 0x80c
public:
	CUtlVector< float32 > m_vecBeepIntervals; // 0x810	
};

