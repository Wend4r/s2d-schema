#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1c8
// Has VTable
class CCitadel_Modifier_Mirage_DjinnsReach_Debuff : public CCitadelModifier
{
public:
	CHandle< CBaseEntity > m_hFirstPartner; // 0xc8	
	CHandle< CBaseEntity > m_hSecondPartner; // 0xcc	
	CUtlVector< CHandle< CBaseEntity > > m_vecPartners; // 0xd0	
};

