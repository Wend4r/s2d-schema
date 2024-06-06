#pragma once

#include <cstdint>

struct AnimParamID;
struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blend 2D"
class CAnimGraphDoc_Blend2DNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x18]; // 0x40
public:
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_Blend2DItem > > m_items; // 0x58	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_TagSpan > > m_tagSpans; // 0x70	
	// MPropertyHideField
	CUtlVector< CSmartPtr< CAnimGraphDoc_ParamSpan > > m_paramSpans; // 0x88	
	// MPropertyFriendlyName "Horizontal Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceX; // 0xa0	
private:
	[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
public:
	// MPropertyHideField
	CUtlString m_paramNameX; // 0xa8	
	// MPropertyFriendlyName "Horizontal Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramX; // 0xb0	
	// MPropertyFriendlyName "Vertical Axis"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendSourceY; // 0xb4	
	// MPropertyHideField
	CUtlString m_paramNameY; // 0xb8	
	// MPropertyFriendlyName "Vertical Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_paramY; // 0xc0	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0xc4	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0xc5	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0xc6	
private:
	[[maybe_unused]] uint8_t __pad00c7[0x1]; // 0xc7
public:
	// MPropertyFriendlyName "Playback Speed"
	float m_playbackSpeed; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0xd0	
	// MPropertyFriendlyName "AnimEvents and Tags Exclusive To Most Weighted"
	bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xe0	
};

