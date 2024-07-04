#pragma once

#include <cstdint>

struct CParticleModelInput;
struct CParticleCollectionFloatInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x3e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderSimpleModelCollection : public CParticleFunctionRenderer
{
public:
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "center mesh"
	// MPropertySortPriority "750"
	bool m_bCenterOffset; // 0x208	
private:
	[[maybe_unused]] uint8_t __pad0209[0x7]; // 0x209
public:
	// MPropertyStartGroup "Model"
	// MPropertyFriendlyName "model"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0x210	
	// MPropertyFriendlyName "input model override"
	CParticleModelInput m_modelInput; // 0x218	
	// MPropertyStartGroup "Rendering"
	// MPropertyFriendlyName "size cull scale"
	CParticleCollectionFloatInput m_fSizeCullScale; // 0x278	
	// MPropertyFriendlyName "disable shadows"
	bool m_bDisableShadows; // 0x3d0	
	// MPropertyFriendlyName "disable motion blur"
	bool m_bDisableMotionBlur; // 0x3d1	
	// MPropertyFriendlyName "accept decals"
	bool m_bAcceptsDecals; // 0x3d2	
private:
	[[maybe_unused]] uint8_t __pad03d3[0x1]; // 0x3d3
public:
	// MPropertyFriendlyName "angular velocity attribute (improves motion blur)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nAngularVelocityField; // 0x3d4	
};

