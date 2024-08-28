#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MNetworkVarNames "float m_flForwardSpeed"
// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
class CNPC_NanoRollermine : public CAI_CitadelNPC
{
private:
	[[maybe_unused]] uint8_t __pad1578[0x38]; // 0x1578
public:
	// MNetworkEnable
	float m_flForwardSpeed; // 0x15b0	
private:
	[[maybe_unused]] uint8_t __pad15b4[0x44]; // 0x15b4
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hOwnerPawn; // 0x15f8	
	
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_NANO_ROLLERMINE_ROLL_FORWARD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_NANO_ROLLERMINE_EXPLODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_NANO_ROLLERMINE_EXPLODING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_NANO_ROLLERMINE_CHARGE_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_NANO_ROLLERMINE_EXPLODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_NANO_ROLLERMINE_PATH_TO_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->m_static_fields[5]->m_instance);};
	static ConditionId_t &Get_COND_NANO_ROLLERMINE_EXPLODE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->m_static_fields[6]->m_instance);};
	static ConditionId_t &Get_COND_NANO_ROLLERMINE_EXPLODING(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->m_static_fields[7]->m_instance);};
};

