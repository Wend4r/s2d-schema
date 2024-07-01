#pragma once

#include <cstdint>

struct CParticleCollectionRendererFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x630
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderGpuImplicit : public CParticleFunctionRenderer
{
public:
	// MPropertySortPriority "-1"
	// MPropertyDescription "Honors the per-particle radius (multiplied by radius scale) but is more expensive to render.  Some particles with large radii can make things much costlier"
	bool m_bUsePerParticleRadius; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad0209[0x3]; // 0x209
public:
	// MPropertyFriendlyName "(optional) vertex buffer size (k)"
	// MPropertyAttributeRange "0 1024"
	uint32_t m_nVertexCountKb; // 0x20c	
	// MPropertyFriendlyName "(optional) index buffer size (k)"
	// MPropertyAttributeRange "0 2048"
	uint32_t m_nIndexCountKb; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0214[0x4]; // 0x214
public:
	CParticleCollectionRendererFloatInput m_fGridSize; // 0x218	
	CParticleCollectionRendererFloatInput m_fRadiusScale; // 0x370	
	// MPropertyAttributeRange ".1 .95"
	CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // 0x4c8	
	// MPropertyFriendlyName "scale CP (grid size/particle radius/threshold = x/y/z)"
	int32_t m_nScaleCP; // 0x620	
private:
	[[maybe_unused]] uint8_t __pad0624[0x4]; // 0x624
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x628	
};

