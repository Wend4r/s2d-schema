#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'animdoclib')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MGetKV3ClassDefaults
class CNmGraphDocParameterReferenceNode : public CNmGraphDocFlowNode
{
private:
	[[maybe_unused]] uint8_t __pad00f8[0x8]; // 0xf8
public:
	V_uuid_t m_parameterUUID; // 0x100	
	NmGraphValueType_t m_parameterValueType; // 0x110	
private:
	[[maybe_unused]] uint8_t __pad0111[0x7]; // 0x111
public:
	CUtlString m_parameterName; // 0x118	
	CUtlString m_parameterGroupName; // 0x120	
};

