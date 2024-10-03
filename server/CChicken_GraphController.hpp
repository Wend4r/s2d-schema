#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CChicken_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamRef< char* > m_paramActivity; // 0x18	
	CAnimGraphParamRef< bool > m_paramEndActivityImmediately; // 0x40	
	CAnimGraphTagRef m_sActivityFinished; // 0x60	
	CAnimGraphParamRef< float32 > m_paramTurnAngle; // 0x78	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CChicken_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CChicken_GraphController")->m_static_fields[1]->m_instance);};
};

