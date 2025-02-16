#pragma once

#include <cstdint>

struct HeroID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "HeroID_t m_nHeroID"
// MNetworkVarNames "HeroID_t m_nHeroLoading"
class CCitadelHeroComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0xc]; // 0x8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnHeroChanged"
	HeroID_t m_nHeroID; // 0x14	
	// MNetworkEnable
	// MNetworkPriority "32"
	HeroID_t m_nHeroLoading; // 0x18	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelHeroComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelHeroComponent")->m_static_fields[1]->m_instance);};
};

