#pragma once

#include <cstdint>

struct ParticleAttributeIndex_t;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x8a0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderDeferredLight : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "projected texture use alpha test window"
	// MPropertySuppressExpr "!m_bUseTexture"
	bool m_bUseAlphaTestWindow; // 0x208	
	// MPropertyFriendlyName "projected texture light"
	bool m_bUseTexture; // 0x209	
private:
	[[maybe_unused]] uint8_t __pad020a[0x2]; // 0x20a
public:
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "radius scale"
	// MPropertySortPriority "700"
	float m_flRadiusScale; // 0x20c	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	float m_flAlphaScale; // 0x210	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x214	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x218	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x870	
	// MPropertyStartGroup
	// MPropertyFriendlyName "spotlight distance"
	float m_flLightDistance; // 0x874	
	// MPropertyFriendlyName "light start falloff"
	float m_flStartFalloff; // 0x878	
	// MPropertyFriendlyName "spotlight distance falloff"
	float m_flDistanceFalloff; // 0x87c	
	// MPropertyFriendlyName "spotlight FoV"
	float m_flSpotFoV; // 0x880	
	// MPropertyFriendlyName "projected texture alpha test point scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x884	
	// MPropertyFriendlyName "projected texture alpha test range scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x888	
	// MPropertyFriendlyName "projected texture alpha test sharpness scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySuppressExpr "!m_bUseTexture"
	ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x88c	
	// MPropertyFriendlyName "texture"
	// MPropertySuppressExpr "!m_bUseTexture"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x890	
	// MPropertyFriendlyName "HSV Shift Control Point"
	int32_t m_nHSVShiftControlPoint; // 0x898	
};

