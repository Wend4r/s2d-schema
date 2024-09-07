#pragma once

#include <cstdint>

struct PulseDocNodeID_t;
struct PulseRegisterMap_t;
struct PulseRuntimeChunkIndex_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x40
// 
// MGetKV3ClassDefaults
class CPulse_CallInfo
{
public:
	CUtlSymbolLarge m_PortName; // 0x0	
	PulseDocNodeID_t m_nEditorNodeID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	PulseRegisterMap_t m_RegisterMap; // 0x10	
	PulseDocNodeID_t m_CallMethodID; // 0x30	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x34	
	int32_t m_nSrcInstruction; // 0x38	
};

