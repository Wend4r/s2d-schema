#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class C_CSGO_PreviewModel_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamOptionalRef< char* > m_pszCharacterMode; // 0x60	
	CAnimGraphParamOptionalRef< char* > m_pszWeaponState; // 0x88	
	CAnimGraphParamOptionalRef< char* > m_pszWeaponType; // 0xb0	
	CAnimGraphParamOptionalRef< char* > m_pszEndOfMatchCelebration; // 0xd8	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_CSGO_PreviewModel_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_CSGO_PreviewModel_GraphController")->m_static_fields[1]->m_instance);};
};

