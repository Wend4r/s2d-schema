#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x1f0
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CNmGraphDocDataSlotNode : public CNmGraphDocFlowNode
{
public:
	CResourceName m_defaultResourceName; // 0xf8	
	CUtlVector< CNmGraphDocDataSlotNode::OverrideValue_t > m_overrides; // 0x1d8	
};

