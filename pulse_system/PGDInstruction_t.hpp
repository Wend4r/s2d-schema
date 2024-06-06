#pragma once

#include <cstdint>

struct PulseRuntimeVarIndex_t;
struct PulseRuntimeRegisterIndex_t;
struct PulseRuntimeInvokeIndex_t;
struct PulseRuntimeChunkIndex_t;
struct PulseRuntimeCallInfoIndex_t;
struct PulseRuntimeConstantIndex_t;
struct PulseRuntimeDomainValueIndex_t;
struct PulseRuntimeBlackboardReferenceIndex_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x38
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct PGDInstruction_t
{
public:
	PulseInstructionCode_t m_nCode; // 0x0	
	PulseRuntimeVarIndex_t m_nVar; // 0x4	
	PulseRuntimeRegisterIndex_t m_nReg0; // 0x8	
	PulseRuntimeRegisterIndex_t m_nReg1; // 0xa	
	PulseRuntimeRegisterIndex_t m_nReg2; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000e[0x2]; // 0xe
public:
	PulseRuntimeInvokeIndex_t m_nInvokeBindingIndex; // 0x10	
	PulseRuntimeChunkIndex_t m_nChunk; // 0x14	
	int32_t m_nDestInstruction; // 0x18	
	PulseRuntimeCallInfoIndex_t m_nCallInfoIndex; // 0x1c	
	PulseRuntimeConstantIndex_t m_nConstIdx; // 0x20	
	PulseRuntimeDomainValueIndex_t m_nDomainValueIdx; // 0x22	
	PulseRuntimeBlackboardReferenceIndex_t m_nBlackboardReferenceIdx; // 0x24	
};

