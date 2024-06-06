#pragma once

#include <cstdint>

// Registered binary: schemasystem.dll (project 'resourcefile')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct ResourceId_t
{
public:
	uint64_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("ResourceId_t")->m_static_fields[0]->m_instance);};
};

