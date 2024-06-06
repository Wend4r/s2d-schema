#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x11b0
// Has VTable
class CGrenadeTracer : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0cc8[0x20]; // 0xcc8
public:
	float m_flTracerDuration; // 0xce8	
	GrenadeType_t m_nType; // 0xcec	
	
	// Static fields:
	static int32_t &Get_s_nColorIdx(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CGrenadeTracer")->m_static_fields[0]->m_instance);};
};

