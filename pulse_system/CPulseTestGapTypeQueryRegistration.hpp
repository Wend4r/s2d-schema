#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x8
// Has VTable
// Has Trivial Destructor
// 
// MGapTypeQueriesForScopeSingleton
class CPulseTestGapTypeQueryRegistration
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static CPulseTestGapTypeQueryRegistration &Get_s_Instance(){return *reinterpret_cast<CPulseTestGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("pulse_system.dll")->FindDeclaredClass("CPulseTestGapTypeQueryRegistration")->m_static_fields[0]->m_instance);};
};

