#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4a0
// Has VTable
class CNPC_Boss_Tier2_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0x3f0	
	CAnimGraphParamRef< char* > m_pszStompAttack; // 0x410	
	CAnimGraphParamRef< char* > m_pszStaggerDirection; // 0x430	
	CAnimGraphParamRef< char* > m_pszElectricBeamPosition; // 0x450	
	CAnimGraphTagRef m_sStaggered; // 0x470	
	CAnimGraphTagRef m_sStomp; // 0x488	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[1]->m_instance);};
};

