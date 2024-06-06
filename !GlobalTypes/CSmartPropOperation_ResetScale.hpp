#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Reset Scale"
// MPropertyDescription "Reset the current scale such the element only inherits the object level scale, but does not inherit the scale applied to its parent."
// MVDataClassGroup
class CSmartPropOperation_ResetScale : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "If enabled, the object level scale will be ignored, meaning any scale applied in Hammer will have no effect on the element or its children."
	CSmartPropAttributeBool m_bIgnoreObjectScale; // 0x50	
};

