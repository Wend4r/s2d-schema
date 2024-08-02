#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
class CNPC_Boss_Tier2_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0x488	
	CAnimGraphParamRef< char* > m_pszStompAttack; // 0x4a8	
	CAnimGraphParamRef< char* > m_pszStaggerDirection; // 0x4c8	
	CAnimGraphParamRef< char* > m_pszElectricBeamPosition; // 0x4e8	
	CAnimGraphTagRef m_sStaggered; // 0x508	
	CAnimGraphTagRef m_sStomp; // 0x520	
	bool m_bHasStompStarted; // 0x538	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[1]->m_instance);};
};

