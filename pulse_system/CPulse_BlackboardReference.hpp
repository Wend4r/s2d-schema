#pragma once

#include <cstdint>

struct PulseDocNodeID_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xf8
// 
// MGetKV3ClassDefaults
class CPulse_BlackboardReference
{
public:
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIPulseGraphDef > > m_hBlackboardResource; // 0x0	
	CUtlSymbolLarge m_BlackboardResource; // 0xe0	
	PulseDocNodeID_t m_nNodeID; // 0xe8	
private:
	[[maybe_unused]] uint8_t __pad00ec[0x4]; // 0xec
public:
	CGlobalSymbol m_NodeName; // 0xf0	
};

