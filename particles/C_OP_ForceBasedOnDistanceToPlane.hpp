#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x200
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ForceBasedOnDistanceToPlane : public CParticleFunctionForce
{
public:
	// MPropertyFriendlyName "min distance from plane"
	float m_flMinDist; // 0x1c8	
	// MPropertyFriendlyName "force at min distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMinDist; // 0x1cc	
	// MPropertyFriendlyName "max distance from plane"
	float m_flMaxDist; // 0x1d8	
	// MPropertyFriendlyName "force at max distance"
	// MVectorIsCoordinate
	Vector m_vecForceAtMaxDist; // 0x1dc	
	// MPropertyFriendlyName "plane normal"
	// MVectorIsCoordinate
	Vector m_vecPlaneNormal; // 0x1e8	
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1f4	
	// MPropertyFriendlyName "exponent"
	float m_flExponent; // 0x1f8	
};

