#pragma once

#include <cstdint>

// Registered binary: pulse_system.dll (project 'pulse_runtime_lib')
// Alignment: 8
// Size: 0x30
class CPulse_ResumePoint : public CPulse_OutflowConnection
{
public:
	// Static fields:
	static CPulse_ResumePoint &Get_Invalid(){return *reinterpret_cast<CPulse_ResumePoint*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulse_ResumePoint")->m_static_fields[0]->m_instance);};
	// No schema binary for binding
};

