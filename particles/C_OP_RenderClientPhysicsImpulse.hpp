#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4c0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderClientPhysicsImpulse : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_flRadius; // 0x208	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_flMagnitude; // 0x360	
	// MPropertyFriendlyName "filter explosion to single simulation id"
	int32_t m_nSimIdFilter; // 0x4b8	
};

