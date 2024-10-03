#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Paired Animation Clip"
class CAnimGraphDoc_PairedSequenceNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
public:
	// MPropertyFriendlyName "Paired Role"
	CGlobalSymbol m_sPairedRole; // 0x48	
	// MPropertyFriendlyName "Preview Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_previewSequenceName; // 0x50	
	// MPropertyFriendlyName "Playback Speed"
	float m_flPlaybackSpeed; // 0x58	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x5c	
};

