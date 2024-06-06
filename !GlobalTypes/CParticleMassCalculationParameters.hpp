#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x410
// 
// MGetKV3ClassDefaults
class CParticleMassCalculationParameters
{
public:
	// MPropertyFriendlyName "Radius calculation mode"
	ParticleMassMode_t m_nMassMode; // 0x0	
	// MPropertyFriendlyName "Radius input"
	CPerParticleFloatInput m_flRadius; // 0x8	
	// MPropertyFriendlyName "Nominal radius value"
	CPerParticleFloatInput m_flNominalRadius; // 0x160	
	// MPropertyFriendlyName "Scale to apply to result"
	CPerParticleFloatInput m_flScale; // 0x2b8	
};

