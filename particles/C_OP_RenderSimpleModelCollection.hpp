#pragma once

#include <cstdint>

struct CParticleModelInput;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x298
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
	// MPropertyFriendlyName "model LOD"
	int32_t m_nLOD; // 0x278	
	// MPropertyFriendlyName "disable shadows"
	bool m_bDisableShadows; // 0x27c	
	// MPropertyFriendlyName "disable motion blur"
	bool m_bDisableMotionBlur; // 0x27d	
	// MPropertyFriendlyName "accept decals"
	bool m_bAcceptsDecals; // 0x27e	
private:
	[[maybe_unused]] uint8_t __pad027f[0x1]; // 0x27f
public:
	// MPropertyFriendlyName "angular velocity attribute (improves motion blur)"
	// MPropertyAttributeChoiceName "particlefield_vector"
	ParticleAttributeIndex_t m_nAngularVelocityField; // 0x280	
};

