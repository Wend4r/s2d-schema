#pragma once

#include <cstdint>

struct CSmartPropAttributeCoordinateSpace;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Set Position"
// MPropertyDescription "Set the position of the current transform."
// MVDataClassGroup
class CSmartPropOperation_SetPosition : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Local space position translation to apply to the current transform"
	CSmartPropAttributeVector m_vPosition; // 0x50	
	// MPropertyDescription "Specifies the coordinate space of the specified position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x90	
};

