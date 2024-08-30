#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iMaxHealth"
class CNPC_FlyingDrone : public CAI_CitadelNPC
{
public:
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_DRONE_FOLLOW_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_DRONE_TELEPORT_TO_FOLLOW_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_DRONE_TELEPORT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_DRONE_FOLLOW_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->m_static_fields[3]->m_instance);};
	static ConditionId_t &Get_COND_DRONE_LOST_TARGET(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->m_static_fields[4]->m_instance);};
};

