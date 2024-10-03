#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x118
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocIDToFloatNode : public CNmGraphDocFlowNode
{
public:
	float m_defaultValue; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00fc[0x4]; // 0xfc
public:
	CUtlVector< CNmGraphDocIDToFloatNode::Mapping_t > m_mappings; // 0x100	
};

