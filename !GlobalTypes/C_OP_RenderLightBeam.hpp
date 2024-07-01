#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xdd0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderLightBeam : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x208	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x860	
private:
	[[maybe_unused]] uint8_t __pad0864[0x4]; // 0x864
public:
	// MPropertyFriendlyName "Lumens Per Meter"
	CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x868	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0x9c0	
private:
	[[maybe_unused]] uint8_t __pad09c1[0x7]; // 0x9c1
public:
	// MPropertyFriendlyName "Skirt"
	CParticleCollectionFloatInput m_flSkirt; // 0x9c8	
	// MPropertyFriendlyName "Range"
	CParticleCollectionFloatInput m_flRange; // 0xb20	
	// MPropertyFriendlyName "Thickness"
	CParticleCollectionFloatInput m_flThickness; // 0xc78	
};

