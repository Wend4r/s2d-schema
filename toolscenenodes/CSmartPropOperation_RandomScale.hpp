#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Random Scale"
// MPropertyDescription "Apply a random scale to the current transform."
// MVDataClassGroup
class CSmartPropOperation_RandomScale : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Minimum scale range"
	CSmartPropAttributeFloat m_flRandomScaleMin; // 0x50	
	// MPropertyDescription "Maximum scale range"
	CSmartPropAttributeFloat m_flRandomScaleMax; // 0x90	
};

