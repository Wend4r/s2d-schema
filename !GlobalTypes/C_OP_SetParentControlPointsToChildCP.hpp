#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_SetParentControlPointsToChildCP : public CParticleFunctionPreEmission
{
public:
	// MPropertyFriendlyName "group ID to affect"
	int32_t m_nChildGroupID; // 0x1c0	
	// MPropertyFriendlyName "control point to set"
	int32_t m_nChildControlPoint; // 0x1c4	
	// MPropertyFriendlyName "# of children to set"
	int32_t m_nNumControlPoints; // 0x1c8	
	// MPropertyFriendlyName "first parent control point to set from"
	int32_t m_nFirstSourcePoint; // 0x1cc	
	// MPropertyFriendlyName "set orientation"
	bool m_bSetOrientation; // 0x1d0	
};

