#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x318
// Has VTable
class CModifier_Mirage_EtherealBullets : public CCitadelModifier
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // 0xc0	
	int32_t m_nShootIndex; // 0xd8	
	int32_t m_nShotCyclesPerformed; // 0xdc	
	bool m_bIsBulletBursting; // 0xe0	
};

