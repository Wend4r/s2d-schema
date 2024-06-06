#pragma once

#include <cstdint>

struct CSmartPropAttributeCoordinateSpace;
// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x198
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Distance"
// MPropertyDescription "Compute the distance between two 3D points"
// MVDataClassGroup
class CSmartPropOperation_ComputeDistance3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableName; // 0x50	
	// MPropertyDescription "Specifies the coordinate space the distance should be computed in. The scale of the coordinate space may affect the distance value."
	CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // 0x58	
	// MPropertyGroupName "+Position A"
	// MPropertyFriendlyName "Position A"
	CSmartPropAttributeVector m_InputPositionA; // 0x98	
	// MPropertyGroupName "+Position A"
	// MPropertyDescription "Specifies the coordinate space of position A."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // 0xd8	
	// MPropertyGroupName "+Position B"
	// MPropertyFriendlyName "Position B"
	CSmartPropAttributeVector m_InputPositionB; // 0x118	
	// MPropertyGroupName "+Position B"
	// MPropertyDescription "Specifies the coordinate space of position B."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // 0x158	
};

