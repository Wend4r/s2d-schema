#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x570
// Has VTable
class CInfoDynamicShadowHint : public C_PointEntity
{
public:
	bool m_bDisabled; // 0x558	
private:
	[[maybe_unused]] uint8_t __pad0559[0x3]; // 0x559
public:
	float m_flRange; // 0x55c	
	int32_t m_nImportance; // 0x560	
	int32_t m_nLightChoice; // 0x564	
	CHandle< C_BaseEntity > m_hLight; // 0x568	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

