#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x20
// Has VTable
class CCitadelPlayerClipComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x10]; // 0x8
public:
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelPlayerClipComponent")->m_static_fields[0]->m_instance);};
	static int32_t &Get_entity_component_error_class_decl_says_referenced_but_impl_is_contained(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CCitadelPlayerClipComponent")->m_static_fields[1]->m_instance);};
	// No schema binary for binding
};

