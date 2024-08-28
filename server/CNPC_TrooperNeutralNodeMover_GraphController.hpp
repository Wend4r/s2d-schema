#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x688
// Has VTable
class CNPC_TrooperNeutralNodeMover_GraphController : public CNPC_TrooperNeutral_GraphController
{
public:
	CAnimGraphTagRef m_sHidingInNode; // 0x670	
	
	// Static fields:
	static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover_GraphController")->m_static_fields[0]->m_instance);};
	static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover_GraphController")->m_static_fields[1]->m_instance);};
};

