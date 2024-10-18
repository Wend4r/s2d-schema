#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
// Has VTable
class CCSGOViewModel_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphTagOptionalRef m_sReloadComplete; // 0x60	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGOViewModel_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCSGOViewModel_GraphController")->m_static_fields[1]->m_instance);};
};

