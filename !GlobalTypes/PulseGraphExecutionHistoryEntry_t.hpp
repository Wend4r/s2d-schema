#pragma once

#include <cstdint>

struct PulseCursorID_t;
struct PulseDocNodeID_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct PulseGraphExecutionHistoryEntry_t
{
public:
	PulseCursorID_t nCursorID; // 0x0	
	PulseDocNodeID_t nEditorID; // 0x4	
	float flExecTime; // 0x8	
	uint32_t unFlags; // 0xc	
	CUtlSymbolLarge tagName; // 0x10	
};

