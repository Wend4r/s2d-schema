#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a0
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_hOwner"
class CNPC_HeroCloneTrooper : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1578[0x4]; // 0x1578
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOwner; // 0x157c	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_CLONE_TROOPER_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLONE_TROOPER_DODGE_ROLL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLONE_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLONE_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLONE_MELEE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLONE_CHARGE_FORWARD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLONE_CHARGE_TO_SQUAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLONE_ADVANCE_ON_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLONE_JUMP_TOWARD_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_CLONE_FOLLOW_OWNER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[9]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_CLONE_DODGE_ROLL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[10]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_CLONE_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[11]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_CLONE_JUMP_AT_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[12]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_CLONE_GET_PATH_TO_SQUAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[13]->m_instance);};
	static ConditionId_t &Get_COND_CLONE_FAR_FROM_OWNER(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[14]->m_instance);};
	static ConditionId_t &Get_COND_CLONE_NEW_ORDERS(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->m_static_fields[15]->m_instance);};
};

