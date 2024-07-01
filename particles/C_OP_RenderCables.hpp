#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
struct CParticleCollectionVecInput;
struct CParticleTransformInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1420
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderCables : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "Renderer Modifiers"
	// MPropertyFriendlyName "Radius Scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flRadiusScale; // 0x208	
	// MPropertyFriendlyName "alpha scale"
	// MPropertySortPriority "700"
	CParticleCollectionFloatInput m_flAlphaScale; // 0x360	
	// MPropertyFriendlyName "color blend"
	// MPropertySortPriority "700"
	CParticleCollectionVecInput m_vecColorScale; // 0x4b8	
	// MPropertyFriendlyName "color blend type"
	// MPropertySortPriority "700"
	ParticleColorBlendType_t m_nColorBlendType; // 0xb10	
private:
	[[maybe_unused]] uint8_t __pad0b14[0x4]; // 0xb14
public:
	// MPropertyStartGroup
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xb18	
	// MPropertyFriendlyName "texture repetition mode"
	TextureRepetitionMode_t m_nTextureRepetitionMode; // 0xb20	
private:
	[[maybe_unused]] uint8_t __pad0b24[0x4]; // 0xb24
public:
	// MPropertyFriendlyName "texture repetitions"
	CParticleCollectionFloatInput m_flTextureRepeatsPerSegment; // 0xb28	
	// MPropertyFriendlyName "texture repetitions around cable"
	CParticleCollectionFloatInput m_flTextureRepeatsCircumference; // 0xc80	
	// MPropertyFriendlyName "color map offset along path"
	CParticleCollectionFloatInput m_flColorMapOffsetV; // 0xdd8	
	// MPropertyFriendlyName "color map offset around cable"
	CParticleCollectionFloatInput m_flColorMapOffsetU; // 0xf30	
	// MPropertyFriendlyName "normal map offset along path"
	CParticleCollectionFloatInput m_flNormalMapOffsetV; // 0x1088	
	// MPropertyFriendlyName "normal map offset around cable"
	CParticleCollectionFloatInput m_flNormalMapOffsetU; // 0x11e0	
	// MPropertyFriendlyName "draw caps at each end of the cable"
	bool m_bDrawCableCaps; // 0x1338	
private:
	[[maybe_unused]] uint8_t __pad1339[0x3]; // 0x1339
public:
	// MPropertyFriendlyName "cable end cap shape factor"
	// MPropertyAttributeRange "0 2"
	float m_flCapRoundness; // 0x133c	
	// MPropertyFriendlyName "cable end cap offset amount"
	// MPropertyAttributeRange "0 2"
	float m_flCapOffsetAmount; // 0x1340	
	// MPropertyFriendlyName "tessellation scale factor"
	float m_flTessScale; // 0x1344	
	// MPropertyFriendlyName "minimum steps between particles"
	int32_t m_nMinTesselation; // 0x1348	
	// MPropertyFriendlyName "maximum steps between particles"
	int32_t m_nMaxTesselation; // 0x134c	
	// MPropertyFriendlyName "roundness factor"
	int32_t m_nRoundness; // 0x1350	
private:
	[[maybe_unused]] uint8_t __pad1354[0x4]; // 0x1354
public:
	// MPropertyFriendlyName "diffuse lighting origin"
	// MParticleInputOptional
	CParticleTransformInput m_LightingTransform; // 0x1358	
	// MPropertyFriendlyName "material float variables"
	CUtlVector< FloatInputMaterialVariable_t > m_MaterialFloatVars; // 0x13c0	
private:
	[[maybe_unused]] uint8_t __pad13d8[0x18]; // 0x13d8
public:
	// MPropertyFriendlyName "material vector variables"
	CUtlVector< VecInputMaterialVariable_t > m_MaterialVecVars; // 0x13f0	
};

