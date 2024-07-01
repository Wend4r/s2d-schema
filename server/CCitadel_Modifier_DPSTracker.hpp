#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_DPSTracker : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x18]; // 0xc8
public:
	float m_flInterval; // 0xe0	
	float m_flProgress; // 0xe4	
	float m_flDistToTarget; // 0xe8	
	
	// Static fields:
	static float &Get_k_flHighestDPS(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadel_Modifier_DPSTracker")->m_static_fields[0]->m_instance);};
};

