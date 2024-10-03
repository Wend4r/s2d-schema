#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocTransitionEventConditionNode : public CNmGraphDocFlowNode
{
public:
	NmTransitionRuleCondition_t m_ruleCondition; // 0xf8	
	bool m_bMatchOnlySpecificMarkerID; // 0xf9	
private:
	[[maybe_unused]] uint8_t __pad00fa[0x6]; // 0xfa
public:
	// MPropertyAttributeEditor "AnimGraphID()"
	CGlobalSymbol m_markerIDToMatch; // 0x100	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState; // 0x108	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents; // 0x109	
};

