#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xa0
// Has VTable
class C_Chicken_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamRef< char* > m_paramActivity; // 0x18	
	CAnimGraphParamRef< bool > m_paramEndActivityImmediately; // 0x40	
	CAnimGraphParamRef< bool > m_paramSnapToSquatting; // 0x60	
	CAnimGraphTagRef m_sActivityFinished; // 0x80	
	float m_flSquatProbability; // 0x98	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_Chicken_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_Chicken_GraphController")->m_static_fields[1]->m_instance);};
};

