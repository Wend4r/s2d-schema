#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Random Rotation"
// MPropertyDescription "Apply a random rotation to the current transform."
// MVDataClassGroup
class CSmartPropOperation_RandomRotation : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Minimum rotation range"
	CSmartPropAttributeAngles m_vRandomRotationMin; // 0x50	
	// MPropertyDescription "Maximum rotation range"
	CSmartPropAttributeAngles m_vRandomRotationMax; // 0x90	
};

