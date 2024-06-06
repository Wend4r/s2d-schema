#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeConnection;
struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Stance Override"
class CAnimGraphDoc_StanceOverrideNode : public CAnimGraphDoc_Node
{
public:
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_inputConnection; // 0x40	
	// MPropertyHideField
	CAnimGraphDoc_NodeConnection m_stanceSourceConnection; // 0x48	
	// MPropertyHideField
	CUtlString m_blendParamName; // 0x50	
	// MPropertyFriendlyName "Blend Parameter (optional)"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_blendParamID; // 0x58	
	// MPropertyFriendlyName "Stance Source"
	// MPropertyAttrChangeCallback
	StanceOverrideMode m_eMode; // 0x5c	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	// MPropertyAttrStateCallback
	CUtlString m_sequenceName; // 0x60	
	// MPropertyFriendlyName "Frame"
	// MPropertyAttrStateCallback
	int32_t m_nFrameIndex; // 0x68	
};

