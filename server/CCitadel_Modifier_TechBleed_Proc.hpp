#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Modifier_TechBleed_Proc : public CCitadel_Modifier_BaseEventProc
{
public:
	float m_flDamage; // 0x170	
	int32_t m_nDamageTick; // 0x174	
	CHandle< CBaseEntity > m_hTarget; // 0x178	
};

