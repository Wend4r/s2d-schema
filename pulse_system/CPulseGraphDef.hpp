#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x178
// Has VTable
// 
// MGetKV3ClassDefaults
class CPulseGraphDef
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlSymbolLarge m_DomainIdentifier; // 0x8	
	CUtlSymbolLarge m_ParentMapName; // 0x10	
	CUtlSymbolLarge m_ParentXmlName; // 0x18	
	CUtlVector< CUtlSymbolLarge > m_vecGameBlackboards; // 0x20	
	CUtlVector< CPulse_Chunk* > m_Chunks; // 0x38	
	CUtlVector< CPulseCell_Base* > m_Cells; // 0x50	
	CUtlVector< CPulse_Variable > m_Vars; // 0x68	
	CUtlVector< CPulse_PublicOutput > m_PublicOutputs; // 0x80	
	CUtlVector< CPulse_InvokeBinding* > m_InvokeBindings; // 0x98	
	CUtlVector< CPulse_CallInfo* > m_CallInfos; // 0xb0	
	CUtlVector< CPulse_Constant > m_Constants; // 0xc8	
	CUtlVector< CPulse_DomainValue > m_DomainValues; // 0xe0	
	CUtlVector< CPulse_BlackboardReference > m_BlackboardReferences; // 0xf8	
	CUtlVector< CPulse_OutputConnection* > m_OutputConnections; // 0x110	
};

