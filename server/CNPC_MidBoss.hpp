#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1650
// Has VTable
class CNPC_MidBoss : public CAI_CitadelNPC
{
public:
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_MIDBOSS_MOVE_TO_COVER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MIDBOSS_SLEEP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MIDBOSS_RETURN_TO_SPAWN(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MIDBOSS_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MIDBOSS_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MIDBOSS_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MIDBOSS_CHARGE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MIDBOSS_CLOSE_RANGE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MIDBOSS_SLEEP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MIDBOSS_SHIELDS_UP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[9]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MIDBOSS_SHIELDS_DOWN(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[10]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MIDBOSS_CHARGE_SELECT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[11]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MIDBOSS_CHARGE_ACTIVATE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[12]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MIDBOSS_GUN_SELECT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MidBoss")->m_static_fields[13]->m_instance);};
	// No schema binary for binding
};

