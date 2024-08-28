#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderClientPhysicsImpulse : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "radius"
	CPerParticleFloatInput m_flRadius; // 0x210	
	// MPropertyFriendlyName "magnitude"
	CPerParticleFloatInput m_flMagnitude; // 0x370	
	// MPropertyFriendlyName "filter explosion to single simulation id"
	int32_t m_nSimIdFilter; // 0x4d0	
};

