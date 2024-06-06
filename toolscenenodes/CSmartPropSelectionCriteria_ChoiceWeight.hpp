#pragma once

#include <cstdint>

// Registered binary: toolscenenodes.dll (project 'smartprops')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataComponentValidGrandParents
// MPropertyFriendlyName "Choice Weight"
// MPropertyDescription "Specifies a weighting value which affects that likelyhood of selecting this element which picking a choice."
class CSmartPropSelectionCriteria_ChoiceWeight : public CSmartPropSelectionCriteria
{
public:
	// MPropertyDescription "Relative weight of this choice, higher weighted choices are more likely to be selected."
	CSmartPropAttributeFloat m_flWeight; // 0x48	
};

