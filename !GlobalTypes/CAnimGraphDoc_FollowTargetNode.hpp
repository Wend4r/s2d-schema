#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct IKTargetSettings_t;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Follow Target"
class CAnimGraphDoc_FollowTargetNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyFriendlyName "Bone"
	// MPropertyAttributeChoiceName "Bone"
	CUtlString m_boneName; // 0x48	
	// MPropertyFriendlyName "Target Settings"
	// MPropertyAutoExpandSelf
	IKTargetSettings_t m_TargetSettings; // 0x50	
	// MPropertyFriendlyName "Match Target Orientation"
	// MPropertyAttrChangeCallback
	bool m_bMatchTargetOrientation; // 0x78	
};

