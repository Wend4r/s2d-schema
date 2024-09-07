#pragma once

#include <cstdint>

struct CPulse_ResumePoint;
// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_FireCursors : public CPulseCell_BaseYieldingInflow
{
public:
	CUtlVector< CPulse_OutflowConnection > m_Outflows; // 0x48	
	bool m_bWaitForChildOutflows; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0061[0x7]; // 0x61
public:
	CPulse_ResumePoint m_OnFinished; // 0x68	
	CPulse_ResumePoint m_OnCanceled; // 0x98	
	
	// Static fields:
	static char* &Get_m_pTagName(){return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseCell_FireCursors")->m_static_fields[0]->m_instance);};
};

