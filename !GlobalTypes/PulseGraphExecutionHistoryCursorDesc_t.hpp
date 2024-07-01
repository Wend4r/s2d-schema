#pragma once

#include <cstdint>

struct PulseDocNodeID_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
struct PulseGraphExecutionHistoryCursorDesc_t
{
public:
	CUtlVector< PulseCursorID_t > vecAncestorCursorIDs; // 0x0	
	PulseDocNodeID_t nSpawnNodeID; // 0x18	
	PulseDocNodeID_t nRetiredAtNodeID; // 0x1c	
	float flLastReferenced; // 0x20	
	int32_t nLastValidEntryIdx; // 0x24	
};

