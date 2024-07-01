#pragma once

#include <cstdint>

struct PulseRuntimeChunkIndex_t;
struct PulseRegisterMap_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseCell_Inflow_BaseEntrypoint : public CPulseCell_BaseFlow
{
public:
	PulseRuntimeChunkIndex_t m_EntryChunk; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	PulseRegisterMap_t m_RegisterMap; // 0x50	
};

