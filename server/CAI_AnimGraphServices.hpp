#pragma once

#include <cstdint>

struct LastIncomingHit_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x98
// Has VTable
class CAI_AnimGraphServices : public CAI_Component
{
public:
	HandshakeInfo_t m_pHandshakeInfo[2]; // 0x40	
	float m_flMinFaceTolerance; // 0x70	
	LastIncomingHit_t m_LastIncomingHit; // 0x74	
	
	// Static fields:
	static CUtlSymbolLarge &Get_TASK_GRAPH_START_HANDSHAKE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[0]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_HANDSHAKE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[1]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_HANDSHAKE_AND_FACE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[2]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_HANDSHAKE_TO_BECOME_ACTIVE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[3]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_PREVIOUS_HANDSHAKE_TO_BECOME_INACTIVE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[4]->m_instance);};
	static CUtlSymbolLarge &Get_TASK_GRAPH_CANCEL_HANDSHAKE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->m_static_fields[5]->m_instance);};
};

