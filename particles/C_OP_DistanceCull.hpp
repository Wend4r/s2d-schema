#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_DistanceCull : public CParticleFunctionOperator
{
public:
	// MPropertyFriendlyName "control point"
	int32_t m_nControlPoint; // 0x1b8	
	// MPropertyFriendlyName "control point offset"
	// MVectorIsCoordinate
	Vector m_vecPointOffset; // 0x1bc	
	// MPropertyFriendlyName "cull distance"
	float m_flDistance; // 0x1c8	
	// MPropertyFriendlyName "cull inside instead of outside"
	bool m_bCullInside; // 0x1cc	
};

