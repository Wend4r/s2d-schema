#pragma once

#include <cstdint>

struct CParticleCollectionRendererFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x658
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderBlobs : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "cube width"
	CParticleCollectionRendererFloatInput m_cubeWidth; // 0x208	
	// MPropertyFriendlyName "cutoff radius"
	CParticleCollectionRendererFloatInput m_cutoffRadius; // 0x360	
	// MPropertyFriendlyName "render radius"
	CParticleCollectionRendererFloatInput m_renderRadius; // 0x4b8	
	// MPropertyFriendlyName "(optional) vertex buffer size (k)"
	// MPropertyAttributeRange "0 1024"
	uint32_t m_nVertexCountKb; // 0x610	
	// MPropertyFriendlyName "(optional) index buffer size (k)"
	// MPropertyAttributeRange "0 1024"
	uint32_t m_nIndexCountKb; // 0x614	
	// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
	int32_t m_nScaleCP; // 0x618	
private:
	[[maybe_unused]] uint8_t __pad061c[0x4]; // 0x61c
public:
	// MPropertyFriendlyName "material variables"
	// MPropertyAutoExpandSelf
	// MPropertySortPriority "600"
	CUtlVector< MaterialVariable_t > m_MaterialVars; // 0x620	
private:
	[[maybe_unused]] uint8_t __pad0638[0x18]; // 0x638
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0x650	
};

