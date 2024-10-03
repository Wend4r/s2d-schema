#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocIDEventNode : public CNmGraphDocFlowNode
{
public:
	CGlobalSymbol m_defaultValue; // 0xf8	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState; // 0x100	
	// MPropertyGroupName "+Advanced Search Rules"
	NmEventPriorityRule_t m_priorityRule; // 0x101	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents; // 0x102	
};

