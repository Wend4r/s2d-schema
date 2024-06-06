#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x108
// Has VTable
class C_CSGO_PreviewPlayer_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamOptionalRef< char* > m_pszCharacterMode; // 0x18	
	CAnimGraphParamOptionalRef< char* > m_pszTeamPreviewVariant; // 0x38	
	CAnimGraphParamOptionalRef< char* > m_pszTeamPreviewPosition; // 0x58	
	CAnimGraphParamOptionalRef< char* > m_pszEndOfMatchCelebration; // 0x78	
	CAnimGraphParamOptionalRef< int32 > m_nTeamPreviewRandom; // 0x98	
	CAnimGraphParamOptionalRef< char* > m_pszWeaponState; // 0xb0	
	CAnimGraphParamOptionalRef< char* > m_pszWeaponType; // 0xd0	
	CAnimGraphParamOptionalRef< bool > m_bCT; // 0xf0	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_CSGO_PreviewPlayer_GraphController")->m_static_fields[1]->m_instance);};
};

