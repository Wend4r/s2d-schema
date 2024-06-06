#pragma once

#include <cstdint>

struct CSmartPropAttributeCoordinateSpace;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Project Vector"
// MPropertyDescription "Project Vector A onto Vector B"
// MVDataClassGroup
class CSmartPropOperation_ComputeProjectVector3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName; // 0x50	
	// MPropertyDescription "Specifies the coordinate space that vector should be returned in."
	CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // 0x58	
	// MPropertyGroupName "+Vector A"
	// MPropertyFriendlyName "Vector A"
	CSmartPropAttributeVector m_InputVectorA; // 0x98	
	// MPropertyGroupName "+Vector A"
	// MPropertyDescription "Specifies the coordinate space of vector A."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // 0xd8	
	// MPropertyGroupName "+Vector B"
	// MPropertyFriendlyName "Vector B"
	CSmartPropAttributeVector m_InputVectorB; // 0x118	
	// MPropertyGroupName "+Vector B"
	// MPropertyDescription "Specifies the coordinate space of posivectortion B."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // 0x158	
	// MPropertyFriendlyName "Projection to plane"
	// MPropertyDescription "Interpret Vector B as plane normal."
	CSmartPropAttributeBool m_bPlane; // 0x198	
};

