#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// Has VTable
class CTakeDamageSummaryScopeGuard
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries; // 0x8	
	
	// Static fields:
	static SummaryTakeDamageInfo_t &Get_EmptySummary(){return *reinterpret_cast<SummaryTakeDamageInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageSummaryScopeGuard")->m_static_fields[0]->m_instance);};
};

