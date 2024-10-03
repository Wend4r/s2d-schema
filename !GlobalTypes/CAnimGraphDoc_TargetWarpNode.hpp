#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Target Warp"
class CAnimGraphDoc_TargetWarpNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Position Source"
	// MPropertyAttrChangeCallback
	TargetWarpPositionSource_t m_positionSource; // 0x48	
	// MPropertyFriendlyName "Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	// MPropertyAttrStateCallback
	AnimParamID m_positionParamID; // 0x4c	
	// MPropertyFriendlyName "Face Position Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_facePositionParamID; // 0x50	
};

