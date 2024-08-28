#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x128
// Has VTable
class CCitadelPlayerPawn_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamRef< char* > m_pszSprintState; // 0x18	
	CAnimGraphParamRef< char* > m_pszFullBodySequence; // 0x40	
	CAnimGraphParamRef< char* > m_pszFlinchType; // 0x68	
	CAnimGraphParamOptionalRef< char* > m_pszMaxSpeedState; // 0x90	
	CAnimGraphParamOptionalRef< char* > m_pszDeathSequence; // 0xb8	
	CAnimGraphTagRef m_sAnimClippedMovement; // 0xe0	
	CAnimGraphTagRef m_sDisableGravity; // 0xf8	
	CAnimGraphTagRef m_sDirectAirControl; // 0x110	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->m_static_fields[1]->m_instance);};
};

