#pragma once

#include <cstdint>

struct PulseDocNodeID_t;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x38
// 
// MGetKV3ClassDefaults
class CPulse_Variable
{
public:
	CUtlSymbolLarge m_Name; // 0x0	
	CUtlString m_Description; // 0x8	
	CPulseValueFullType m_Type; // 0x10	
	KeyValues3 m_DefaultValue; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0030[0x2]; // 0x30
public:
	bool m_bIsPublic; // 0x32	
	bool m_bIsObservable; // 0x33	
	PulseDocNodeID_t m_nEditorNodeID; // 0x34	
};

