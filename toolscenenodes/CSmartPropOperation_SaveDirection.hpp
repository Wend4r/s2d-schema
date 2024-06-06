#pragma once

#include <cstdint>

struct CSmartPropAttributeDirection;
struct CSmartPropAttributeCoordinateSpace;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save Direction Vector"
// MPropertyDescription "Save the specified direction vector to a specified variable, in the requested coordinate space"
// MVDataClassGroup
class CSmartPropOperation_SaveDirection : public CSmartPropOperation
{
public:
	// MPropertyDescription "Specifies which direction vector to save."
	CSmartPropAttributeDirection m_DirectionVector; // 0x50	
	// MPropertyDescription "Specifies the coordinate space of the saved position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x90	
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_VariableName; // 0xd0	
};

