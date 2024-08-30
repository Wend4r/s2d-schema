#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CInfoDynamicShadowHint : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4d8	
private:
	[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
public:
	float m_flRange; // 0x4dc	
	int32_t m_nImportance; // 0x4e0	
	int32_t m_nLightChoice; // 0x4e4	
	CHandle< CBaseEntity > m_hLight; // 0x4e8	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

