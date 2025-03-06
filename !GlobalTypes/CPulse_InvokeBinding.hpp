#pragma once

#include <cstdint>

struct PulseRegisterMap_t;
struct PulseRuntimeCellIndex_t;
struct PulseRuntimeChunkIndex_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xb0
// 
// MGetKV3ClassDefaults
class CPulse_InvokeBinding
{
public:
	PulseRegisterMap_t m_RegisterMap; // 0x0	
	PulseSymbol_t m_FuncName; // 0x30	
	PulseRuntimeCellIndex_t m_nCellIndex; // 0x40	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x44	
	int32_t m_nSrcInstruction; // 0x48	
};

