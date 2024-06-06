#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Cross Product"
// MPropertyDescription "Compute a dot or cross product between two 3D vectors"
// MVDataClassGroup
class CSmartPropOperation_ComputeCrossProduct3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName; // 0x50	
	// MPropertyFriendlyName "Vector A"
	CSmartPropAttributeVector m_InputVectorA; // 0x58	
	// MPropertyFriendlyName "Vector B"
	CSmartPropAttributeVector m_InputVectorB; // 0x98	
};

