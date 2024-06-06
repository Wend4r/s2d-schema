#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Sequence Blend Item"
// MPropertyElementNameFn
class CAnimGraphDoc_SequenceBlend2DItem : public CAnimGraphDoc_Blend2DItem
{
private:
	[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x38	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50	
};

