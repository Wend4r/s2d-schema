#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
struct CitadelTrackedAbilityProjectileCreateInfo_t : public CitadelAbilityProjectileCreateInfo_t
{
public:
	CHandle< CBaseEntity > m_hTrackedTarget; // 0x50	
};

