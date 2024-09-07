#pragma once

#include <cstdint>

struct PulseRuntimeChunkIndex_t;
struct PulseRegisterMap_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
class CPulse_OutflowConnection
{
public:
	CUtlSymbolLarge m_SourceOutflowName; // 0x0	
	PulseRuntimeChunkIndex_t m_nDestChunk; // 0x8	
	int32_t m_nInstruction; // 0xc	
	PulseRegisterMap_t m_OutflowRegisterMap; // 0x10	
};

