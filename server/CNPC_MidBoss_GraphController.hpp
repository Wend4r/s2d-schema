#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4a8
// Has VTable
class CNPC_MidBoss_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0x470	
	CAnimGraphTagRef m_sAbilityDeployActive; // 0x490	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss_GraphController")->m_static_fields[1]->m_instance);};
};

