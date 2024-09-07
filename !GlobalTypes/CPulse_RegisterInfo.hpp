#pragma once

#include <cstdint>

struct PulseRuntimeRegisterIndex_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x58
// 
// MGetKV3ClassDefaults
class CPulse_RegisterInfo
{
public:
	PulseRuntimeRegisterIndex_t m_nReg; // 0x0	
	CPulseValueFullType m_Type; // 0x8	
	CKV3MemberNameWithStorage m_OriginName; // 0x18	
	int32_t m_nWrittenByInstruction; // 0x50	
	int32_t m_nLastReadByInstruction; // 0x54	
};

