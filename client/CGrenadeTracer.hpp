#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0x1200
// Has VTable
class CGrenadeTracer : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0d28[0x18]; // 0xd28
public:
	float m_flTracerDuration; // 0xd40	
	GrenadeType_t m_nType; // 0xd44	
	
	// Static fields:
	static int32_t &Get_s_nColorIdx(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CGrenadeTracer")->m_static_fields[0]->m_instance);};
};

