#pragma once

#include <cstdint>

struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x238
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_NormalAlignToCP : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "input"
	CParticleTransformInput m_transformInput; // 0x1c8	
	// MPropertyFriendlyName "control point axis"
	ParticleControlPointAxis_t m_nControlPointAxis; // 0x230	
};

