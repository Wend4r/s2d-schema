#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd38
// Has VTable
// 
// MNetworkVarNames "string_t m_source"
// MNetworkVarNames "string_t m_destination"
class C_FootstepControl : public C_BaseTrigger
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_source; // 0xd28	
	// MNetworkEnable
	CUtlSymbolLarge m_destination; // 0xd30	
	
	// Static fields:
	static CUtlVector< C_FootstepControl* > &Get_sm_footstepControllers(){return *reinterpret_cast<CUtlVector< C_FootstepControl* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FootstepControl")->m_static_fields[0]->m_instance);};
};

