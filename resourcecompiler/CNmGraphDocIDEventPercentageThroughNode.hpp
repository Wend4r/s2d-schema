#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocIDEventPercentageThroughNode : public CNmGraphDocFlowNode
{
public:
	// MPropertyGroupName "+Advanced Search Rules"
	NmEventPriorityRule_t m_priorityRule; // 0xf8	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState; // 0xf9	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents; // 0xfa	
private:
	[[maybe_unused]] uint8_t __pad00fb[0x5]; // 0xfb
public:
	// MPropertyAttributeEditor "AnimGraphID()"
	CGlobalSymbol m_eventID; // 0x100	
};

