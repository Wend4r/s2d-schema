#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1698
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "GameTime_t m_flFadeOutStart"
// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
// MNetworkVarNames "Vector m_vecElectricBeamLookTarget"
// MNetworkVarNames "int m_nElectricBeamCasts"
class CNPC_Boss_Tier2 : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad15a8[0x8]; // 0x15a8
public:
	Vector m_vecStartingPosition; // 0x15b0	
	// MNetworkEnable
	int32_t m_iLane; // 0x15bc	
private:
	[[maybe_unused]] uint8_t __pad15c0[0x8]; // 0x15c0
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetedEnemy; // 0x15c8	
	// MNetworkEnable
	GameTime_t m_flFadeOutStart; // 0x15cc	
	// MNetworkEnable
	GameTime_t m_flFadeOutEnd; // 0x15d0	
private:
	[[maybe_unused]] uint8_t __pad15d4[0x24]; // 0x15d4
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecElectricBeamLookTarget; // 0x15f8	
	// MNetworkEnable
	int32_t m_nElectricBeamCasts; // 0x1604	
private:
	[[maybe_unused]] uint8_t __pad1608[0x28]; // 0x1608
public:
	CEntityIOOutput m_eventOnBossKilled; // 0x1630	
	
	// Static fields:
	static ConditionId_t &Get_COND_STAGGERED(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[0]->m_instance);};
	static ConditionId_t &Get_COND_T2BOSS_ELECTRIC_BEAM_ATTACK_AVAILABLE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[1]->m_instance);};
	static ConditionId_t &Get_COND_T2BOSS_ELECTRIC_BEAM_TARGET_LOST(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[2]->m_instance);};
	static ConditionId_t &Get_COND_T2BOSS_ROCKET_BARRAGE_ATTACK_AVAILABLE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[3]->m_instance);};
	static ConditionId_t &Get_COND_T2BOSS_STOMP_ATTACK_AVAILABLE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_STAND_STILL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_WANDER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_STUNNED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[8]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_STAGGERED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[9]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_MOVE_TO_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[10]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_GUN_STANDING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[11]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_GUN_ROAMING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[12]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_GUN_ADVANCING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[13]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_ROCKET_BARRAGE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[14]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_ELECTRIC_BEAM(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[15]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_STOMP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_MOVE_TO_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[17]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_WANDER_BASE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[18]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_STUNNED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[19]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_STAGGERED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[20]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_GUN_SELECT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[21]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_GUN_FIRE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[22]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_GUN_WALK_AND_FIRE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[23]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_ROCKET_BARRAGE_SELECT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[24]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_ROCKET_BARRAGE_ACTIVATE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[25]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_ROCKET_BARRAGE_FIRING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[26]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_ELECTRIC_BEAM_SELECT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[27]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_ELECTRIC_BEAM_ACTIVATE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[28]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_ELECTRIC_BEAM_FIRING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[29]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_ELECTRIC_BEAM_WALK_AND_FIRE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[30]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_T2BOSS_STOMP_ACTIVATE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->m_static_fields[31]->m_instance);};
	
	// Datamap fields:
	// CUtlSymbolLarge m_strBossEntityName; // 0x1660
};

