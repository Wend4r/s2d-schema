#pragma once

#include <cstdint>

struct CCitadelAbilityComponent;
struct CCitadelRegenComponent;
struct CCitadelMinimapComponent;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a8
// Has VTable
// Is Abstract
// 
// MNetworkIncludeByName "m_iMaxHealth"
// MNetworkIncludeByName "m_iHealth"
// MNetworkIncludeByName "m_iTeam"
// MNetworkIncludeByName "m_vecViewOffset"
// MNetworkExcludeByName "m_blinktoggle"
// MNetworkExcludeByName "m_flAnimTime"
// MNetworkExcludeByUserGroup "m_flCycle"
// MNetworkExcludeByName "m_flEncodedController"
// MNetworkExcludeByName "m_flPoseParameter"
// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
// MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
// MNetworkVarNames "bool m_bMinion"
// MNetworkVarNames "EHANDLE m_hLookTarget"
// MNetworkVarNames "bool m_bBeamActive"
// MNetworkVarNames "Vector m_vEyeBeamTarget"
class CAI_CitadelNPC : public CAI_BaseNPC
{
private:
	[[maybe_unused]] uint8_t __pad1050[0x18]; // 0x1050
public:
	Vector m_vLastGroundEntityCheckPos; // 0x1068	
private:
	[[maybe_unused]] uint8_t __pad1074[0x4]; // 0x1074
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelAbilityComponent"
	// MNetworkAlias "CCitadelAbilityComponent"
	// MNetworkTypeAlias "CCitadelAbilityComponent"
	CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1078	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelRegenComponent"
	// MNetworkAlias "CCitadelRegenComponent"
	// MNetworkTypeAlias "CCitadelRegenComponent"
	CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1280	
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelMinimapComponent"
	// MNetworkAlias "CCitadelMinimapComponent"
	// MNetworkTypeAlias "CCitadelMinimapComponent"
	CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1400	
private:
	[[maybe_unused]] uint8_t __pad1418[0x4]; // 0x1418
public:
	int32_t m_iBaseGoldReward; // 0x141c	
	int32_t m_iSkillShotReward; // 0x1420	
private:
	[[maybe_unused]] uint8_t __pad1424[0x30]; // 0x1424
public:
	CHandle< CCitadelBaseAbility > m_hAbilityOwner; // 0x1454	
private:
	[[maybe_unused]] uint8_t __pad1458[0x48]; // 0x1458
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // 0x14a0	
	// MNetworkEnable
	bool m_bMinion; // 0x14f0	
private:
	[[maybe_unused]] uint8_t __pad14f1[0x3]; // 0x14f1
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hLookTarget; // 0x14f4	
private:
	[[maybe_unused]] uint8_t __pad14f8[0x10]; // 0x14f8
public:
	int32_t m_iCoverGroupID; // 0x1508	
private:
	[[maybe_unused]] uint8_t __pad150c[0x5c]; // 0x150c
public:
	Vector m_vecSpawnOrigin; // 0x1568	
private:
	[[maybe_unused]] uint8_t __pad1574[0x18]; // 0x1574
public:
	// MNetworkEnable
	bool m_bBeamActive; // 0x158c	
private:
	[[maybe_unused]] uint8_t __pad158d[0x3]; // 0x158d
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vEyeBeamTarget; // 0x1590	
	
	// Static fields:
	static ConditionId_t &Get_COND_RECEIVED_AGGRO(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[0]->m_instance);};
	static ConditionId_t &Get_COND_STUNNED(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[1]->m_instance);};
	static ConditionId_t &Get_COND_FORCED_AGGRO(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[2]->m_instance);};
	static ConditionId_t &Get_COND_FORCED_CALM(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[3]->m_instance);};
	static ConditionId_t &Get_COND_IMMOBILIZED(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[4]->m_instance);};
	static ConditionId_t &Get_COND_DISARMED(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[5]->m_instance);};
	static ConditionId_t &Get_COND_CAN_MELEE_ATTACK(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[6]->m_instance);};
	static ConditionId_t &Get_COND_CAN_MELEE_ATTACK_CLOSE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[7]->m_instance);};
	static ConditionId_t &Get_COND_CAN_RANGE_ATTACK(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[8]->m_instance);};
	static ConditionId_t &Get_COND_RANGE_ATTACK_LOS_BLOCKED(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[9]->m_instance);};
	static ConditionId_t &Get_COND_RANGE_ATTACK_TOO_CLOSE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[10]->m_instance);};
	static ConditionId_t &Get_COND_RANGE_ATTACK_TOO_FAR(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[11]->m_instance);};
	static ConditionId_t &Get_COND_TAKEN_DAMAGE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[12]->m_instance);};
	static ConditionId_t &Get_COND_TAKEN_FLINCH_DAMAGE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[13]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_WAIT_RANDOM(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[14]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_NO_OP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[15]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_WAIT_STUNNED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[16]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_PUSH_AWAY_FROM_BLOCKING_NPC(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[17]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_RUN_TEST_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[18]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_RUN_TEST_PATH_TO_COVER_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[19]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MOVE_TO_MELEE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[20]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MOVE_TO_SHOOT_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[21]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MOVE_TO_OWNER_AGRO(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[22]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_MOVE_TO_OWNER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[23]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_TURN_TOWARD_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[24]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_SPAWN(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[25]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PUSH_AWAY_FROM_BLOCKING_NPC(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[26]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_ADVANCE_ON_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[27]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_MELEE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[28]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_TEST_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[29]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_TEST_PATH_TO_COVER_POINT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[30]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_FIND_PATH_TO_COVER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[31]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_FORWARD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[32]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_NAV_MESH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[33]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[34]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_CROUCH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[35]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_STAND(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[36]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_WAIT_FACE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[37]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BUILD_PATH_TO_OWNER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[38]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MELEE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[39]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_BEAM_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[40]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_SLEEP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[41]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_WAIT_FOR_GROUND_MOVEMENT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->m_static_fields[42]->m_instance);};
};

