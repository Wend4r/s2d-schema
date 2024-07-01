#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x3f0
// Has VTable
class CAI_CitadelNPC_GraphController : public CAI_BaseNPCGraphController
{
public:
	CAnimGraphParamOptionalRef< int32 > m_nHitLayerTrigger; // 0x3a0	
	CAnimGraphParamOptionalRef< char* > m_pszDamageState; // 0x3b8	
	CAnimGraphParamOptionalRef< float32 > m_fHealth; // 0x3d8	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->m_static_fields[1]->m_instance);};
};

