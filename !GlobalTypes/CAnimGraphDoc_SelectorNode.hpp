#pragma once

#include <cstdint>

struct AnimParamID;
struct AnimTagID;
struct CFloatAnimValue;
struct CBlendCurve;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Selector"
// MPropertyExtendedEditor
class CAnimGraphDoc_SelectorNode : public CAnimGraphDoc_Node
{
public:
	// MPropertySuppressField
	CUtlVector< CAnimGraphDoc_NodeConnection > m_children; // 0x40	
	// MPropertyHideField
	CUtlVector< AnimTagID > m_tags; // 0x58	
	// MPropertyFriendlyName "Selection Source"
	// MPropertyAttrChangeCallback
	SelectionSource_t m_selectionSource; // 0x70	
private:
	[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
public:
	// MPropertyHideField
	CUtlString m_boolParamName; // 0x78	
	// MPropertyFriendlyName "Bool Parameter"
	// MPropertyAttributeChoiceName "BoolParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_boolParamID; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	// MPropertyHideField
	CUtlString m_enumParamName; // 0x88	
	// MPropertyFriendlyName "Enum Parameter"
	// MPropertyAttributeChoiceName "EnumParameter"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimParamID m_enumParamID; // 0x90	
	// MPropertyFriendlyName "Tag Parameter"
	// MPropertyAttributeChoiceName "Tag"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimTagID m_tagID; // 0x94	
	// MPropertyFriendlyName "Blend Duration"
	CFloatAnimValue m_blendDuration; // 0x98	
	// MPropertyFriendlyName "Tag Behavior"
	SelectorTagBehavior_t m_tagBehavior; // 0xb8	
	// MPropertyFriendlyName "Reset On Change"
	bool m_bResetOnChange; // 0xbc	
	// MPropertyFriendlyName "Start new option at same cycle"
	bool m_bSyncCyclesOnChange; // 0xbd	
	// MPropertyFriendlyName "Lock Selection When Waning"
	bool m_bLockWhenWaning; // 0xbe	
private:
	[[maybe_unused]] uint8_t __pad00bf[0x1]; // 0xbf
public:
	// MPropertyHideField
	CBlendCurve m_blendCurve; // 0xc0	
};

