#pragma once

#include <cstdint>

struct PulseRegisterMap_t;
struct PulseRuntimeCellIndex_t;
struct PulseRuntimeChunkIndex_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x88
// 
// MGetKV3ClassDefaults
class CPulse_InvokeBinding
{
public:
	PulseRegisterMap_t m_RegisterMap; // 0x0	
	CUtlSymbolLarge m_FuncName; // 0x20	
	PulseRuntimeCellIndex_t m_nCellIndex; // 0x28	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x2c	
	int32_t m_nSrcInstruction; // 0x30	
};

