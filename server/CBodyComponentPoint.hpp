#pragma once

#include <cstdint>

struct CGameSceneNode;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b0
// Has VTable
// 
// MNetworkVarNames "CGameSceneNode m_sceneNode"
class CBodyComponentPoint : public CBodyComponent
{
public:
	// MNetworkEnable
	CGameSceneNode m_sceneNode; // 0x50	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBodyComponentPoint")->m_static_fields[1]->m_instance);};
};

