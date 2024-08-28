#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
class CCitadel_Projectile_BloodBomb : public CCitadelProjectile
{
public:
	bool m_bSecondBomb; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0801[0x3]; // 0x801
public:
	int32_t m_nBeepSoundBuildupCount; // 0x804	
	float m_flBeepSoundIntervalBias; // 0x808	
	float m_flBeepSoundMaxFrequency; // 0x80c	
	float m_flArmingDuration; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0814[0x4]; // 0x814
public:
	CUtlVector< float32 > m_vecBeepIntervals; // 0x818	
};

