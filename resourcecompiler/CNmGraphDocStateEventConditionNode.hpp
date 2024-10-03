#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocStateEventConditionNode : public CNmGraphDocFlowNode
{
public:
	NmEventConditionOperator_t m_operator; // 0xf8	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState; // 0xf9	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents; // 0xfa	
private:
	[[maybe_unused]] uint8_t __pad00fb[0x5]; // 0xfb
public:
	// MPropertyGroupName "+Conditions"
	CUtlVector< CNmGraphDocStateEventConditionNode::Condition_t > m_conditions; // 0x100	
};

