#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1560
// Has VTable
class CNPC_YakuzaGangster : public CAI_CitadelNPC
{
public:
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_GANGSTER_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_YakuzaGangster")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_YakuzaGangster")->m_static_fields[1]->m_instance);};
	// No schema binary for binding
};

