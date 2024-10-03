#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x68
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Target Selector"
class CAnimGraphDoc_TargetSelectorNode : public CAnimGraphDoc_Node
{
public:
	CUtlVector< CTargetSelectorChild > m_children; // 0x40	
	// MPropertyFriendlyName "Position Source"
	// MPropertyAttrChangeCallback
	TargetSelectorPositionSource_t m_positionSource; // 0x58	
	// MPropertyFriendlyName "Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_positionParamID; // 0x5c	
	// MPropertyFriendlyName "Face Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_facePositionParamID; // 0x60	
};

