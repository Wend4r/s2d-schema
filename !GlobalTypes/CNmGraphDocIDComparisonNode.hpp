#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocIDComparisonNode : public CNmGraphDocFlowNode
{
public:
	CNmIDComparisonNode::Comparison_t m_comparison; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x7]; // 0xf9
public:
	// MPropertyAttributeEditor "AnimGraphID()"
	CUtlVector< CGlobalSymbol > m_values; // 0x100	
};

