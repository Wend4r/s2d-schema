#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x120
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocParameterReferenceNode : public CNmGraphDocFlowGraphNode
{
private:
	[[maybe_unused]] uint8_t __pad00f0[0x8]; // 0xf0
public:
	V_uuid_t m_parameterUUID; // 0xf8	
	NmGraphValueType_t m_parameterValueType; // 0x108	
private:
	[[maybe_unused]] uint8_t __pad0109[0x7]; // 0x109
public:
	CUtlString m_parameterName; // 0x110	
	CUtlString m_parameterGroupName; // 0x118	
};

