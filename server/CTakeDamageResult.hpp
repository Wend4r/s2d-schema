#pragma once

#include <cstdint>

struct CTakeDamageInfo;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// Has Trivial Destructor
class CTakeDamageResult
{
public:
	CTakeDamageInfo* m_pOriginatingInfo; // 0x0	
	int32_t m_nHealthLost; // 0x8	
	int32_t m_nDamageTaken; // 0xc	
	int32_t m_nTotalledHealthLost; // 0x10	
	int32_t m_nTotalledDamageTaken; // 0x14	
	
	// Static fields:
	static CTakeDamageResult &Get_EmptyResult(){return *reinterpret_cast<CTakeDamageResult*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CTakeDamageResult")->m_static_fields[0]->m_instance);};
};

