#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1620
// Has VTable
// 
// MNetworkVarNames "int m_iLane"
// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
// MNetworkVarNames "float m_flHealingChargeParticlePct"
class CNPC_Trooper : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1560[0x8]; // 0x1560
public:
	// MNetworkEnable
	int32_t m_iLane; // 0x1568	
	int32_t m_iLaneSlot; // 0x156c	
private:
	[[maybe_unused]] uint8_t __pad1570[0x1c]; // 0x1570
public:
	CHandle< CInfoTrooperBossSpawn > m_hSpawnWaveController; // 0x158c	
	CHandle< CBaseEntity > m_hTrooperSpawnPoint; // 0x1590	
private:
	[[maybe_unused]] uint8_t __pad1594[0x1c]; // 0x1594
public:
	CModifierHandleTyped< CCitadelModifier > m_hNearDeathModifier; // 0x15b0	
private:
	[[maybe_unused]] uint8_t __pad15c8[0x8]; // 0x15c8
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hTargetedEnemy; // 0x15d0	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flHealingChargeParticlePct; // 0x15d4	
	
	// Static fields:
	static ConditionId_t &Get_COND_TROOPER_MOVE_OUT(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[0]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_SEEN_LARGE_EXPLOSION(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[1]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_CAN_ADVANCE_DOWN_LANE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[2]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_ENEMY_IN_CHARGE_RANGE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[3]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_CAN_ZIPLINE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[4]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_ON_ZIPLINE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[5]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_FOLLOW_OWNER(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[6]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_FOLLOW_OWNER_CLOSE_ENOUGH(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[7]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_CLIP_EMPTY(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[8]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_UNDER_HEAVY_ATTACK(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[9]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_INACTIVE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[10]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_FORCE_ADVANCE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[11]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_NEAR_BASE_ATTACKER(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[12]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_ZIPLINING_NEAR_ENEMY_CAN_DISMOUNT(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[13]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_FIGHTING_FINAL_CORE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[14]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_OUT_OF_LANE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[15]->m_instance);};
	static ConditionId_t &Get_COND_TROOPER_NEAR_DEATH(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_ADVANCE_UNDER_FIRE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[17]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_RUN_DOWN_LANE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[18]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_MELEE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[19]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[20]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[21]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[22]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_WAIT_TO_ADVANCE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[23]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_PAUSE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[24]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_FLINCH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[25]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_START_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[26]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_RIDE_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[27]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_DISMOUNT_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[28]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_INITIAL_WAIT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[29]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_AVOID_TIER2BOSS_LASER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[30]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_CAPTURE_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[31]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_REACT_TO_EXPLOSION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[32]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_MOVE_TO_MELEE_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[33]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_DEPLOY_SHIELD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[34]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_RETURN_TO_LANE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[35]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPER_STUNNED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[36]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_GET_LANE_NODE_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[37]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_GET_CLOSEST_LANE_NODE_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[38]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[39]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_ACTIVATE_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[40]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_DEACTIVATE_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[41]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_FOR_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[42]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_JUMP_TOWARD_LANE_SLOT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[43]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_UNTIL_LAND_ON_GROUND(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[44]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_INITIAL_WAIT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[45]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_FOR_SQUAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[46]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_FACE_INITIAL_DIRECTION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[47]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_FLINCH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[48]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_GET_PATH_TO_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[49]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_PLAY_ANIMATION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[50]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_FOR_LANE_MOVEMENT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[51]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TROOPER_DEPLOY_SHIELD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->m_static_fields[52]->m_instance);};
	
	// Datamap fields:
	// int32_t m_iCoverGroupID; // 0x14c0
};

