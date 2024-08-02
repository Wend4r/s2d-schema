#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a0
// Has VTable
class CNPC_HeroDecoy : public CNPC_HeroCloneTrooper
{
public:
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_HERO_DECOY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroDecoy")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_HERO_DECOY_MOVETO(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroDecoy")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MOVE_DECOY_MOVETO(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroDecoy")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MOVE_DECOY_FORWARD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroDecoy")->m_static_fields[3]->m_instance);};
	// No schema binary for binding
};

