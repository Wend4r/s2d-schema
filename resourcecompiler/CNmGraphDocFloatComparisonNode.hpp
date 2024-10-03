#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFloatComparisonNode : public CNmGraphDocFlowNode
{
public:
	CNmFloatComparisonNode::Comparison_t m_comparison; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x3]; // 0xf9
public:
	float m_flComparisonValue; // 0xfc	
	float m_flEpsilon; // 0x100	
};

