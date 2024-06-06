#pragma once

#include <cstdint>

// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x78
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Single Frame"
class CAnimGraphDoc_SingleFrameNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x10]; // 0x40
public:
	// MPropertyFriendlyName "Sequence"
	// MPropertyAttributeChoiceName "Sequence"
	CUtlString m_sequenceName; // 0x50	
	// MPropertyFriendlyName "Frame Selection"
	// MPropertyAttrChangeCallback
	SingleFrameSelection m_eFrameSelection; // 0x58	
	// MPropertyFriendlyName "Frame Index"
	// MPropertyAttrStateCallback
	int32_t m_nFrameIndex; // 0x5c	
	CUtlVector< CSmartPtr< CAnimGraphDoc_Action > > m_actions; // 0x60	
};

