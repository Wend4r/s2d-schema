#pragma once

#include <cstdint>

struct CPerParticleFloatInput;
struct CParticleCollectionFloatInput;
struct ParticleAttributeIndex_t;
struct CParticleCollectionVecInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xe30
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderProjected : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "project on characters"
	bool m_bProjectCharacter; // 0x208	
	// MPropertyFriendlyName "project on world"
	bool m_bProjectWorld; // 0x209	
	// MPropertyFriendlyName "project on water"
	bool m_bProjectWater; // 0x20a	
	// MPropertyFriendlyName "flip horizontal"
	bool m_bFlipHorizontal; // 0x20b	
	// MPropertyFriendlyName "enable projected depth controls"
	bool m_bEnableProjectedDepthControls; // 0x20c	
private:
	[[maybe_unused]] uint8_t __pad020d[0x3]; // 0x20d
public:
	// MPropertyFriendlyName "min projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMinProjectionDepth; // 0x210	
	// MPropertyFriendlyName "max projection depth"
	// MPropertySuppressExpr "!m_bEnableProjectedDepthControls"
	float m_flMaxProjectionDepth; // 0x214	
	// MPropertyFriendlyName "materials"
	// MParticleRequireDefaultArrayEntry
	// MPropertyAutoExpandSelf
	CUtlVector< RenderProjectedMaterial_t > m_vecProjectedMaterials; // 0x218	
	// MPropertyFriendlyName "material selection"
	CPerParticleFloatInput m_flMaterialSelection; // 0x230	
	// MPropertyFriendlyName "sheet animation time scale"
	float m_flAnimationTimeScale; // 0x388	
	// MPropertyFriendlyName "orient to normal"
	bool m_bOrientToNormal; // 0x38c	
private:
	[[maybe_unused]] uint8_t __pad038d[0x3]; // 0x38d
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x390	
	// MPropertyStartGroup "+Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x3a8	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x500	
	// MPropertyFriendlyName "rotation roll scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRollScale; // 0x658	
	// MPropertyFriendlyName "per-particle alpha scale attribute"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	// MPropertySortPriority "700"
	ParticleAttributeIndex_t m_nAlpha2Field; // 0x7b0	
private:
	[[maybe_unused]] uint8_t __pad07b4[0x4]; // 0x7b4
public:
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x7b8	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xe10	
};

