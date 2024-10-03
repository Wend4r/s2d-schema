#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTimeConditionNode : public CNmGraphDocFlowNode
{
public:
	float m_flComparand; // 0xf8	
	CNmTimeConditionNode::ComparisonType_t m_type; // 0xfc	
	CNmTimeConditionNode::Operator_t m_operator; // 0xfd	
};

