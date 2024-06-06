#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Random Offset"
// MPropertyDescription "Apply a random position offset to the current transform."
// MVDataClassGroup
class CSmartPropOperation_RandomOffset : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Minimum random position offset"
	CSmartPropAttributeVector m_vRandomPositionMin; // 0x50	
	// MPropertyDescription "Maximum random position offset"
	CSmartPropAttributeVector m_vRandomPositionMax; // 0x90	
};

