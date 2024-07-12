#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CNPC_Boss_Tier2_GraphController : public CAI_CitadelNPC_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0x470	
	CAnimGraphParamRef< char* > m_pszStompAttack; // 0x490	
	CAnimGraphParamRef< char* > m_pszStaggerDirection; // 0x4b0	
	CAnimGraphParamRef< char* > m_pszElectricBeamPosition; // 0x4d0	
	CAnimGraphTagRef m_sStaggered; // 0x4f0	
	CAnimGraphTagRef m_sStomp; // 0x508	
	bool m_bHasStompStarted; // 0x520	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->m_static_fields[1]->m_instance);};
};

