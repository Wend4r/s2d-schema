#pragma once

#include <cstdint>

struct CParticleVisibilityInputs;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x210
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CParticleFunctionRenderer : public CParticleFunction
{
public:
	// MPropertySortPriority "-1"
	CParticleVisibilityInputs VisibilityInputs; // 0x1c0	
	// MPropertyStartGroup "Rendering filter"
	// MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
	// MPropertySortPriority "-1"
	bool m_bCannotBeRefracted; // 0x208	
	// MPropertyFriendlyName "Skip rendering on mobile"
	// MPropertySortPriority "-1"
	bool m_bSkipRenderingOnMobile; // 0x209	
};

