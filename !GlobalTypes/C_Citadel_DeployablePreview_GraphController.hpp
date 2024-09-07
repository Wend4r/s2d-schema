#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x38
// Has VTable
class C_Citadel_DeployablePreview_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamOptionalRef< bool > m_bDeploying; // 0x18	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_Citadel_DeployablePreview_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_Citadel_DeployablePreview_GraphController")->m_static_fields[1]->m_instance);};
};

