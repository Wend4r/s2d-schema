#pragma once

#include <cstdint>

struct CSmartPropAttributeCoordinateSpace;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save Current Position"
// MPropertyDescription "Save the current position to a specified variable in the requested coordinate space"
// MVDataClassGroup
class CSmartPropOperation_SavePosition : public CSmartPropOperation
{
public:
	// MPropertyDescription "Specifies the coordinate space of the saved position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x50	
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_VariableName; // 0x90	
};

