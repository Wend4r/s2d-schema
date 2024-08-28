#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CPerParticleFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x13b8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderOmni2Light : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "Type"
	ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	// MPropertyFriendlyName "Color Blend"
	CParticleCollectionVecInput m_vColorBlend; // 0x218	
	// MPropertyFriendlyName "Color Blend Type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0x890	
	ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x894	
	// MPropertyFriendlyName "Lumens"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
	CPerParticleFloatInput m_flBrightnessLumens; // 0x898	
	// MPropertyFriendlyName "Candelas"
	// MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
	CPerParticleFloatInput m_flBrightnessCandelas; // 0x9f8	
	// MPropertyFriendlyName "Shadows"
	// MPropertySuppressExpr "mod == csgo"
	bool m_bCastShadows; // 0xb58	
	// MPropertyFriendlyName "Fog"
	bool m_bFog; // 0xb59	
private:
	[[maybe_unused]] uint8_t __pad0b5a[0x6]; // 0xb5a
public:
	// MPropertyFriendlyName "Fog Scale"
	// MPropertySuppressExpr "!m_bFog"
	CPerParticleFloatInput m_flFogScale; // 0xb60	
	// MPropertyFriendlyName "Light Radius"
	CPerParticleFloatInput m_flLuminaireRadius; // 0xcc0	
	// MPropertyFriendlyName "Skirt"
	CPerParticleFloatInput m_flSkirt; // 0xe20	
	// MPropertyFriendlyName "Range"
	CPerParticleFloatInput m_flRange; // 0xf80	
	// MPropertyFriendlyName "Inner Cone Angle"
	CPerParticleFloatInput m_flInnerConeAngle; // 0x10e0	
	// MPropertyFriendlyName "Outer Cone Angle"
	CPerParticleFloatInput m_flOuterConeAngle; // 0x1240	
	// MPropertyFriendlyName "Cookie"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // 0x13a0	
	// MPropertyFriendlyName "Cookie is Spherically Mapped"
	bool m_bSphericalCookie; // 0x13a8	
};

