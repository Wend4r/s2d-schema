#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15d8
// Has VTable
class CNPC_PestilenceDrone : public CAI_CitadelNPC
{
public:
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_PESTILENCE_DRONE_NAVIGATE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_PESTILENCE_DRONE_CHARGE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_PESTILENCE_DRONE_ATTACH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_PESTILENCE_DRONE_FIZZLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PESTILENCE_DRONE_CHARGE_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PESTILENCE_DRONE_ATTACH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PESTILENCE_DRONE_FIZZLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PESTILENCE_DRONE_PATH_TO_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[7]->m_instance);};
	static ConditionId_t &Get_COND_PESTILENCE_DRONE_ATTACH(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[8]->m_instance);};
	static ConditionId_t &Get_COND_PESTILENCE_DRONE_FIZZLE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->m_static_fields[9]->m_instance);};
	// No schema binary for binding
};

