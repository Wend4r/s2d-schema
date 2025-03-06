#pragma once

#include <cstdint>

struct PulseDocNodeID_t;
struct PulseRegisterMap_t;
struct PulseRuntimeChunkIndex_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x58
// 
// MGetKV3ClassDefaults
class CPulse_CallInfo
{
public:
	PulseSymbol_t m_PortName; // 0x0	
	PulseDocNodeID_t m_nEditorNodeID; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
public:
	PulseRegisterMap_t m_RegisterMap; // 0x18	
	PulseDocNodeID_t m_CallMethodID; // 0x48	
	PulseRuntimeChunkIndex_t m_nSrcChunk; // 0x4c	
	int32_t m_nSrcInstruction; // 0x50	
};

