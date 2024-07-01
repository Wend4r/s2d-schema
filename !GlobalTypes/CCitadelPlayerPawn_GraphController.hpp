#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb8
// Has VTable
class CCitadelPlayerPawn_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamRef< char* > m_pszSprintState; // 0x18	
	CAnimGraphParamRef< char* > m_pszFullBodySequence; // 0x38	
	CAnimGraphParamRef< char* > m_pszFlinchType; // 0x58	
	CAnimGraphParamOptionalRef< char* > m_pszMaxSpeedState; // 0x78	
	CAnimGraphParamOptionalRef< char* > m_pszDeathSequence; // 0x98	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->m_static_fields[1]->m_instance);};
};

