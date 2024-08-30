#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d8
// Has VTable
class CAI_NetworkManager : public CPointEntity
{
public:
	// Static fields:
	static CUtlVector< uint32 > &Get_m_SpawnGroupsContributingToNodeList(){return *reinterpret_cast<CUtlVector< uint32 >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_NetworkManager")->m_static_fields[0]->m_instance);};
	static CUtlVector< CNodeEnt* > &Get_m_SpawningNodes(){return *reinterpret_cast<CUtlVector< CNodeEnt* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_NetworkManager")->m_static_fields[1]->m_instance);};
	// No schema binary for binding
};

