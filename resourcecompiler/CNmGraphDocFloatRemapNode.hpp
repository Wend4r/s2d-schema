#pragma once

#include <cstdint>

struct CNmGraphDocFloatRemapNode::RemapRange_t;
// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFloatRemapNode : public CNmGraphDocFlowNode
{
public:
	// -> m_flBegin - 0xf8
	// -> m_flEnd - 0xfc
	CNmGraphDocFloatRemapNode::RemapRange_t m_inputRange; // 0xf8	
	// -> m_flBegin - 0x100
	// -> m_flEnd - 0x104
	CNmGraphDocFloatRemapNode::RemapRange_t m_outputRange; // 0x100	
};

