#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x320
// Has VTable
class CModifier_Mirage_EtherealBullets : public CCitadelModifier
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecShootTargets; // 0xc8	
	int32_t m_nShootIndex; // 0xe0	
	int32_t m_nShotCyclesPerformed; // 0xe4	
	bool m_bIsBulletBursting; // 0xe8	
};

