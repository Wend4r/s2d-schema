#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1608
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "QAngle m_angTargeting1"
// MNetworkVarNames "QAngle m_angTargeting2"
// MNetworkVarNames "int m_nElectricBeamCasts"
// MNetworkVarNames "ETier3State_t m_eAliveState"
// MNetworkVarNames "ETier3Phase_t m_ePhase"
class CNPC_Boss_Tier3 : public CAI_CitadelNPC
{
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x1550	
private:
	[[maybe_unused]] uint8_t __pad1554[0x30]; // 0x1554
public:
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	QAngle m_angTargeting1; // 0x1584	
	// MNetworkEnable
	// MNetworkEncoder "qangle"
	QAngle m_angTargeting2; // 0x1590	
	// MNetworkEnable
	int32_t m_nElectricBeamCasts; // 0x159c	
private:
	[[maybe_unused]] uint8_t __pad15a0[0x20]; // 0x15a0
public:
	CEntityIOOutput m_eventOnBossKilled; // 0x15c0	
	CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x15e8	
private:
	[[maybe_unused]] uint8_t __pad15f0[0x4]; // 0x15f0
public:
	// MNetworkEnable
	ETier3State_t m_eAliveState; // 0x15f4	
private:
	[[maybe_unused]] uint8_t __pad15f8[0x4]; // 0x15f8
public:
	// MNetworkEnable
	ETier3Phase_t m_ePhase; // 0x15fc	
	
	// Static fields:
	static ConditionId_t &Get_COND_T3BOSS_CAN_ELECTRIC_BEAM(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[0]->m_instance);};
	static ConditionId_t &Get_COND_T3BOSS_OVER_CORE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[1]->m_instance);};
	static ConditionId_t &Get_COND_T3BOSS_HEALTH_PHASE_1(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[2]->m_instance);};
	static ConditionId_t &Get_COND_T3BOSS_HEALTH_PHASE_2(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T3BOSS_STAND_STILL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T3BOSS_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T3BOSS_ATTACK_WITH_ELECTRIC_BEAM(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T3BOSS_ATTACK_WITH_ELECTRIC_BEAM_QUICK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T3BOSS_RETURN_TO_HOME_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T3BOSS_FALL_BACK_TO_CORE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[9]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T3BOSS_MOVE_TO_RANDOM_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[10]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T3BOSS_MOVE_TO_LARGEST_ENEMY_GROUP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[11]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_FACE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[12]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_ELECTRIC_BEAM_SELECT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[13]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_ELECTRIC_BEAM_FIRING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[14]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_DYING_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[15]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_WAIT_AT_DYING_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_VULNERABLE_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[17]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_ARRIVE_AT_VULNERABLE_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[18]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_HOME_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[19]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_RANDOM_POSITION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[20]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_LARGEST_ENEMY_GROUP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->m_static_fields[21]->m_instance);};
	
	// Datamap fields:
	// void m_vecStartingPosition; // 0x1560
	// int32_t m_nDyingEndCoverPointID; // 0x1570
	// int32_t m_nVulnerableCoverPointID; // 0x1574
};

