#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1008
// Has VTable
class CAI_TestHull : public CAI_BaseNPC
{
public:
	TestHullMode_t m_nHullMode; // 0x1000	
	
	// Static fields:
	static CAI_TestHull* &Get_s_pTestHulls(){return *reinterpret_cast<CAI_TestHull**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_TestHull")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bTestHullAcquired(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_TestHull")->m_static_fields[1]->m_instance);};
};

