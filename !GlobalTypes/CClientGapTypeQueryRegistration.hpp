#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8
// Has VTable
// Has Trivial Destructor
// 
// MGapTypeQueriesForScopeSingleton
class CClientGapTypeQueryRegistration
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// Static fields:
	static CClientGapTypeQueryRegistration &Get_s_Instance(){return *reinterpret_cast<CClientGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CClientGapTypeQueryRegistration")->m_static_fields[0]->m_instance);};
};

