#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocIDEventConditionNode : public CNmGraphDocFlowNode
{
public:
	NmEventConditionOperator_t m_operator; // 0xf8	
	CNmGraphDocIDEventConditionNode::SearchRule_t m_searchRule; // 0xf9	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState; // 0xfa	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents; // 0xfb	
private:
	[[maybe_unused]] uint8_t __pad00fc[0x4]; // 0xfc
public:
	// MPropertyGroupName "+Conditions"
	// MPropertyAttributeEditor "AnimGraphID()"
	CUtlVector< CGlobalSymbol > m_eventIDs; // 0x100	
};

