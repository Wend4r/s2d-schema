#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ClientPhysics : public CParticleFunctionRenderer
{
public:
	// MPropertyFriendlyName "client physics type"
	// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata!generic_physics_particle_spawner )"
	CUtlString m_strPhysicsType; // 0x208	
	// MPropertyFriendlyName "start all physics asleep"
	bool m_bStartAsleep; // 0x210	
private:
	[[maybe_unused]] uint8_t __pad0211[0x7]; // 0x211
public:
	// MPropertyFriendlyName "Player Wake Radius"
	CParticleCollectionFloatInput m_flPlayerWakeRadius; // 0x218	
	// MPropertyFriendlyName "Vehicle Wake Radius"
	CParticleCollectionFloatInput m_flVehicleWakeRadius; // 0x370	
	// MPropertyFriendlyName "use high quality simulation"
	bool m_bUseHighQualitySimulation; // 0x4c8	
private:
	[[maybe_unused]] uint8_t __pad04c9[0x3]; // 0x4c9
public:
	// MPropertyFriendlyName "max particle count"
	int32_t m_nMaxParticleCount; // 0x4cc	
	// MPropertyFriendlyName "prevent spawning in exclusion volumes"
	// MPropertySuppressExpr "m_bKillParticles == true"
	bool m_bRespectExclusionVolumes; // 0x4d0	
	// MPropertyFriendlyName "kill physics particles"
	bool m_bKillParticles; // 0x4d1	
	// MPropertyFriendlyName "delete physics sim when stopped"
	// MPropertySuppressExpr "m_bKillParticles == false"
	bool m_bDeleteSim; // 0x4d2	
private:
	[[maybe_unused]] uint8_t __pad04d3[0x1]; // 0x4d3
public:
	// MPropertyFriendlyName "control point (for finding nearest sim)"
	// MPropertySuppressExpr "m_bKillParticles == true"
	int32_t m_nControlPoint; // 0x4d4	
	// MPropertyFriendlyName "tint blend (color vs prop group gradient)"
	ParticleColorBlendType_t m_nColorBlendType; // 0x4d8	
};

