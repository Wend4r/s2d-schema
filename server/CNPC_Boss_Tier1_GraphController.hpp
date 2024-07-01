#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x478
// Has VTable
class CNPC_Boss_Tier1_GraphController : public CNPC_Trooper_GraphController
{
public:
	CAnimGraphParamRef< char* > m_pszActivity; // 0x408	
	CAnimGraphParamRef< char* > m_pszLaneSide; // 0x428	
	CAnimGraphParamRef< bool > m_bShieldMode; // 0x448	
	CAnimGraphTagRef m_sFinishedAnimateDeath; // 0x460	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier1_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier1_GraphController")->m_static_fields[1]->m_instance);};
};

