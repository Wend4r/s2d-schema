#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
// 
// MGetKV3ClassDefaults
class CPulse_DomainValue
{
public:
	PulseDomainValueType_t m_nType; // 0x0	
	CGlobalSymbolCaseSensitive m_Value; // 0x8	
	CPulseValueFullType m_RequiredRuntimeType; // 0x10	
};

