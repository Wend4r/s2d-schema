#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocBoneMaskSelectorNode : public CNmGraphDocFlowNode
{
public:
	bool m_switchDynamically; // 0xf8	
private:
	[[maybe_unused]] uint8_t __pad00f9[0x7]; // 0xf9
public:
	// MPropertyResizable
	CUtlVector< CGlobalSymbol > m_options; // 0x100	
	float m_flBlendTimeSeconds; // 0x118	
};

