#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8
// Has VTable
// Has Trivial Destructor
// 
// MGapTypeQueriesForScopeSingleton
class CSharedGapTypeQueryRegistration
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static CSharedGapTypeQueryRegistration &Get_s_Instance(){return *reinterpret_cast<CSharedGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CSharedGapTypeQueryRegistration")->m_static_fields[0]->m_instance);};
};

