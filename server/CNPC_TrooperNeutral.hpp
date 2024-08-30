#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1610
// Has VTable
// 
// MNetworkVarNames "bool m_bShieldActive"
// MNetworkVarNames "bool m_bPlayingIdle"
class CNPC_TrooperNeutral : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad15a8[0x63]; // 0x15a8
public:
	// MNetworkEnable
	bool m_bShieldActive; // 0x160b	
	// MNetworkEnable
	bool m_bPlayingIdle; // 0x160c	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_MOVE_TO_COVER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_SLEEP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RETURN_TO_SPAWN(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RELOAD_AND_WAIT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_FURNITURE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_AOE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[9]->m_instance);};
	static ConditionId_t &Get_COND_SQUAD_SHOOT_SLOT_AVAILABLE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[10]->m_instance);};
	static ConditionId_t &Get_COND_TROOPERNEUTRAL_WATCHER_NEARBY(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[11]->m_instance);};
	static ConditionId_t &Get_COND_TROOPERNEUTRAL_NO_WATCHER(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[12]->m_instance);};
	static ConditionId_t &Get_COND_TROOPERNEUTRAL_CAN_AOE_ATTACK(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[13]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPERNEUTRAL_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[14]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPERNEUTRAL_PLAY_AOE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[15]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPERNEUTRAL_PERFORM_AOE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TURN_INITIAL_FACING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->m_static_fields[17]->m_instance);};
};

