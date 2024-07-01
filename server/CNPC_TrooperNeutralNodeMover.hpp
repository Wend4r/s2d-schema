#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f8
// Has VTable
class CNPC_TrooperNeutralNodeMover : public CNPC_TrooperNeutral
{
public:
	// Static fields:
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_MOVE_TO_NEW_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_HIDE_IN_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_COME_OUT_OF_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RETURN_TO_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->m_static_fields[3]->m_instance);};
	static ConditionId_t &Get_COND_FAR_FROM_NODE(){return *reinterpret_cast<ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_PICK_NEW_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->m_static_fields[5]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_MOVE_TO_NEXT_MOVEMENT_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->m_static_fields[6]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_HIDE_IN_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->m_static_fields[7]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_COME_OUT_OF_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->m_static_fields[8]->m_instance);};
	// No schema binary for binding
};

