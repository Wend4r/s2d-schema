#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xb0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Animation Clip"
class CAnimGraphDoc_SequenceNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x30]; // 0x40
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x70	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans; // 0x88	
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0xa0	
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0xa8	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xac	
};

