#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ClientPhysics : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "client physics type"
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata!generic_physics_particle_spawner )"
	CUtlString m_strPhysicsType; // 0x208	
	// MPropertyFriendlyName "kill physics particles"
	bool m_bKillParticles; // 0x210	
	// MPropertyFriendlyName "delete physics sim when stopped"
	// MPropertySuppressExpr "m_bKillParticles == false"
	bool m_bDeleteSim; // 0x211	
private:
	[[maybe_unused]] uint8_t __pad0212[0x2]; // 0x212
public:
	// MPropertyFriendlyName "control point (for finding nearest sim)"
	// MPropertySuppressExpr "m_bKillParticles == true"
	int32_t m_nControlPoint; // 0x214	
	// MPropertyFriendlyName "tint blend (color vs prop group gradient)"
	ParticleColorBlendType_t m_nColorBlendType; // 0x218	
};

