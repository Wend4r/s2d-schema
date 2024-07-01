#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct CitadelWeaponID_t
{
public:
	int32_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CitadelWeaponID_t")->m_static_fields[0]->m_instance);};
};

