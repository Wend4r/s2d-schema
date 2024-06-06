#pragma once

#include <cstdint>

struct AnimParamID;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Jump Helper"
class CAnimGraphDoc_JumpHelperNode : public CAnimGraphDoc_SequenceNode
{
public:
	// MPropertyHideField
	CUtlString m_targetParamName; // 0xb0	
	// MPropertyFriendlyName "Target Parameter"
	// MPropertyAttributeChoiceName "VectorParameter"
	AnimParamID m_targetParamID; // 0xb8	
	// MPropertySuppressField
	float m_flJumpStartCycle; // 0xbc	
	// MPropertySuppressField
	float m_flJumpDuration; // 0xc0	
	// MPropertyFriendlyName "Translate X"
	bool m_bTranslateX; // 0xc4	
	// MPropertyFriendlyName "Translate Y"
	bool m_bTranslateY; // 0xc5	
	// MPropertyFriendlyName "Translate Z"
	bool m_bTranslateZ; // 0xc6	
	// MPropertyFriendlyName "Apply Speed Scale"
	bool m_bScaleSpeed; // 0xc7	
	// MPropertyFriendlyName "Correction Method"
	JumpCorrectionMethod m_eCorrectionMethod; // 0xc8	
};

