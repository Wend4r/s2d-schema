#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xb58
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderMaterialProxy : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Control Point for Model"
	int32_t m_nMaterialControlPoint; // 0x208	
	// MPropertyFriendlyName "proxy type"
	MaterialProxyType_t m_nProxyType; // 0x20c	
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x210	
	// MPropertyFriendlyName "material override"
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hOverrideMaterial; // 0x228	
	// MPropertyFriendlyName "material override enable"
	CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x230	
	// MPropertyFriendlyName "model tint"
	CParticleCollectionVecInput m_vecColorScale; // 0x388	
	// MPropertyFriendlyName "model alpha"
	CPerParticleFloatInput m_flAlpha; // 0x9e0	
	// MPropertyFriendlyName "model tint blend type"
	ParticleColorBlendType_t m_nColorBlendType; // 0xb38	
};

