#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct ModifierPropRuntimeHandle_t
{
public:
	uint16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("ModifierPropRuntimeHandle_t")->m_static_fields[0]->m_instance);};
};

