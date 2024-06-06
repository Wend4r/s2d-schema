#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CPulse_DomainValue
{
public:
	PulseDomainValueType_t m_nType; // 0x0	
	CGlobalSymbol m_Value; // 0x8	
	CGlobalSymbol m_ExpectedRuntimeType; // 0x10	
};

