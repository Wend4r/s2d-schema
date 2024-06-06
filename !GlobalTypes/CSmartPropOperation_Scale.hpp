#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Scale"
// MPropertyDescription "Apply a scale to the current transform."
// MVDataClassGroup
class CSmartPropOperation_Scale : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Scale to apply to the current transform"
	CSmartPropAttributeFloat m_flScale; // 0x50	
};

