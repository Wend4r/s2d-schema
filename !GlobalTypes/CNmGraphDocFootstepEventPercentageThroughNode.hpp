#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFootstepEventPercentageThroughNode : public CNmGraphDocFlowNode
{
public:
	NmFootPhaseCondition_t m_phaseCondition; // 0xf8	
	// MPropertyGroupName "+Advanced Search Rules"
	NmEventPriorityRule_t m_priorityRule; // 0xf9	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState; // 0xfa	
	// MPropertyGroupName "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents; // 0xfb	
};

