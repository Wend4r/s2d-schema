#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFloatSelectorNode : public CNmGraphDocFlowNode
{
public:
	// MPropertyResizable
	// MPropertyAutoExpandSelf
	CUtlVector< CNmGraphDocFloatSelectorNode::Option_t > m_options; // 0xf8	
	float m_flDefaultValue; // 0x110	
	// MPropertyGroupName "+Easing"
	NmEasingOperation_t m_easing; // 0x114	
private:
	[[maybe_unused]] uint8_t __pad0115[0x3]; // 0x115
public:
	// MPropertyGroupName "+Easing"
	float m_easeTime; // 0x118	
};

