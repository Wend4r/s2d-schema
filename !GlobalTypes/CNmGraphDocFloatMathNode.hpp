#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocFloatMathNode : public CNmGraphDocFlowNode
{
public:
	bool m_bReturnAbsoluteResult; // 0xf8	
	CNmFloatMathNode::Operator_t m_operator; // 0xf9	
private:
	[[maybe_unused]] uint8_t __pad00fa[0x2]; // 0xfa
public:
	float m_flValueB; // 0xfc	
};

