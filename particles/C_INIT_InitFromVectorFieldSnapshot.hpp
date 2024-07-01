#pragma once

#include <cstdint>

struct CPerParticleVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x828
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_InitFromVectorFieldSnapshot : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "snapshot control point number"
	int32_t m_nControlPointNumber; // 0x1c0	
	// MPropertyFriendlyName "local space control point number"
	int32_t m_nLocalSpaceCP; // 0x1c4	
	// MPropertyFriendlyName "weight update control point"
	int32_t m_nWeightUpdateCP; // 0x1c8	
	// MPropertyFriendlyName "use vertical velocity for weighting"
	bool m_bUseVerticalVelocity; // 0x1cc	
private:
	[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
public:
	// MPropertyFriendlyName "Component Scale"
	CPerParticleVecInput m_vecScale; // 0x1d0	
};

