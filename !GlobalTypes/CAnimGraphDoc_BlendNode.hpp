#pragma once

#include <cstdint>

struct AnimParamID;
struct CAnimInputDamping;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Blend 1D"
class CAnimGraphDoc_BlendNode : public CAnimGraphDoc_Node
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x10]; // 0x40
public:
	// MPropertyFriendlyName "Blend Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CBlendNodeChild > m_children; // 0x50	
	// MPropertyFriendlyName "Blend Source"
	// MPropertyAttrChangeCallback
	// MPropertyAttrStateCallback
	AnimValueSource m_blendValueSource; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
public:
	// MPropertyHideField
	CUtlString m_paramName; // 0x70	
	// MPropertyFriendlyName "Parameter"
	// MPropertyAttributeChoiceName "FloatParameter"
	AnimParamID m_param; // 0x78	
	// MPropertyFriendlyName "Blend Key Values"
	BlendKeyType m_blendKeyType; // 0x7c	
	// MPropertyFriendlyName "Lock Blend on Reset"
	bool m_bLockBlendOnReset; // 0x80	
	// MPropertyFriendlyName "Sync Cycles"
	bool m_bSyncCycles; // 0x81	
	// MPropertyFriendlyName "Loop"
	bool m_bLoop; // 0x82	
	// MPropertyFriendlyName "Lock Blend When Waning"
	bool m_bLockWhenWaning; // 0x83	
private:
	[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
public:
	// MPropertyFriendlyName "Damping"
	CAnimInputDamping m_damping; // 0x88	
};

