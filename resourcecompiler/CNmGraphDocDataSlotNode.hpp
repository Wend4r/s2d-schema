#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x1e8
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocDataSlotNode : public CNmGraphDocFlowGraphNode
{
public:
	CResourceName m_defaultResourceName; // 0xf0	
	CUtlVector< CNmGraphDocDataSlotNode::OverrideValue_t > m_overrides; // 0x1d0	
};

