#pragma once

#include <cstdint>

// Registered binary: resourcesystem.dll (project 'mathlib_extended')
// Alignment: 8
// Size: 0x2
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct FuseVariableIndex_t
{
public:
	uint16_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("resourcesystem.dll")->FindDeclaredClass("FuseVariableIndex_t")->m_static_fields[0]->m_instance);};
};

