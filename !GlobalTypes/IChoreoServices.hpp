#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
class IChoreoServices
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static uint32_t &Get_ms_uSequenceId(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("IChoreoServices")->m_static_fields[0]->m_instance);};
	// No schema binary for binding
};

