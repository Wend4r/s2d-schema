#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1590
// Has VTable
class CNPC_CarpetBombDrone : public CAI_CitadelNPC
{
public:
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_CARPET_BOMBER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_CarpetBombDrone")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_CARPET_BOMBER_FLY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_CarpetBombDrone")->m_static_fields[1]->m_instance);};
	// No schema binary for binding
};

