#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x16a0
// Has VTable
class CCitadelPlayerBotNPCBrain : public CAI_CitadelNPC
{
public:
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_BOT_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MOVE_WITHOUT_GOAL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_WAIT_FOR_REEVALUATE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_ATTACK_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_USE_ABILITY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_DEFEND_OBJECTIVE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_RETREAT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_PUSH_LANE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_ZIPLINING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_USE_ZIPLINE_FROM_BASE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[9]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_USE_ZIPLINE_RETREAT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[10]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_DEFEND_BASE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[11]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_MOVE_TO_LOCATION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[12]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_RETRIEVE_IDOL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[13]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_RETURN_IDOL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[14]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_TAKEOVER_SUPPORT_ALLY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[15]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_TEST_SCHEDULE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_BOT_TEST_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[17]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_SELECT_HERO(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[18]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_GET_PATH_TO_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[19]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_GET_PATH_TO_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[20]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_GET_PATH_TO_LOCATION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[21]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_MOVE_WITHOUT_GOAL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[22]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_WAIT_MOVEMENT_RETREAT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[23]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_STOP_ZIPLING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[24]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_WAIT_FOR_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[25]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_EXECUTE_ZIPLINE_ABILITY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[26]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_WAIT_ZIPLINING_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[27]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_WAIT_ZIPLINING_RETREAT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[28]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_ATTACK_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[29]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_AIM_ABILITY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[30]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_USE_ABILITY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[31]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_PICKUP_IDOL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[32]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_TEST_TASK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[33]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BOT_TEST_END_SCHEDULE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[34]->m_instance);};
	static ConditionId_t &Get_COND_BOT_REEVALUATE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[35]->m_instance);};
	static ConditionId_t &Get_COND_HEALTH_CRITICAL(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[36]->m_instance);};
	static ConditionId_t &Get_COND_OUT_OF_AMMO(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[37]->m_instance);};
	static ConditionId_t &Get_COND_SILENCED(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[38]->m_instance);};
	static ConditionId_t &Get_COND_OBJECTIVE_LOST(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[39]->m_instance);};
	static ConditionId_t &Get_COND_USE_ABILITY(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[40]->m_instance);};
	static ConditionId_t &Get_COND_HOLDING_IDOL(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->m_static_fields[41]->m_instance);};
	// No schema binary for binding
};

