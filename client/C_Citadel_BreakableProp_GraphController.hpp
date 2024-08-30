#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x98
// Has VTable
class C_Citadel_BreakableProp_GraphController : public CAnimGraphControllerBase
{
public:
	CAnimGraphParamOptionalRef< bool > m_bSetInit; // 0x18	
	CAnimGraphParamOptionalRef< float32 > m_flDamageReceived; // 0x38	
	CAnimGraphParamOptionalRef< bool > m_bOnRespawn; // 0x58	
	CAnimGraphParamOptionalRef< bool > m_bHitTrigger; // 0x78	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_Citadel_BreakableProp_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_Citadel_BreakableProp_GraphController")->m_static_fields[1]->m_instance);};
};

