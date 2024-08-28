#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x80
// Has VTable
class CCitadel_Destroyable_Building_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamOptionalRef< bool > m_bHitTrigger; // 0x18	
	CAnimGraphParamOptionalRef< char* > m_eState; // 0x38	
	CAnimGraphParamOptionalRef< float32 > m_fHealth; // 0x60	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Destroyable_Building_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Destroyable_Building_GraphController")->m_static_fields[1]->m_instance);};
};

