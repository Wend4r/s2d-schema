#pragma once

#include <cstdint>

struct CPathParameters;
struct ParticleAttributeIndex_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 16
// Size: 0x220
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConstrainDistanceToPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1c0	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance0; // 0x1c4	
	// MPropertyFriendlyName "maximum distance middle"
	float m_flMaxDistanceMid; // 0x1c8	
	// MPropertyFriendlyName "maximum distance end"
	float m_flMaxDistance1; // 0x1cc	
	CPathParameters m_PathParameters; // 0x1d0	
	// MPropertyFriendlyName "travel time"
	float m_flTravelTime; // 0x210	
	// MPropertyFriendlyName "travel time scale field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nFieldScale; // 0x214	
	// MPropertyFriendlyName "manual time placement field"
	// MPropertyAttributeChoiceName "particlefield_scalar"
	ParticleAttributeIndex_t m_nManualTField; // 0x218	
};

