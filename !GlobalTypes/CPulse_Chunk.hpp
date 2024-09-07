#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x58
// 
// MGetKV3ClassDefaults
class CPulse_Chunk
{
public:
	CUtlLeanVector< PGDInstruction_t > m_Instructions; // 0x0	
	CUtlLeanVector< CPulse_RegisterInfo > m_Registers; // 0x10	
	CUtlLeanVector< PulseDocNodeID_t > m_InstructionEditorIDs; // 0x20	
};

