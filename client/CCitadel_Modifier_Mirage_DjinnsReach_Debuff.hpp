#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c0
// Has VTable
class CCitadel_Modifier_Mirage_DjinnsReach_Debuff : public CCitadelModifier
{
public:
	CHandle< C_BaseEntity > m_hFirstPartner; // 0xc0	
	CHandle< C_BaseEntity > m_hSecondPartner; // 0xc4	
	CUtlVector< CHandle< C_BaseEntity > > m_vecPartners; // 0xc8	
};

