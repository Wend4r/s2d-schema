#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
struct PulseRegisterMap_t
{
public:
	KeyValues3 m_Inparams; // 0x0	
	CKV3MemberNameSet m_InparamsWhichCanBeMoved; // 0x10	
	KeyValues3 m_Outparams; // 0x20	
};

