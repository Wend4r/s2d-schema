#pragma once

#include <cstdint>

struct CTakeDamageInfo;
struct CTakeDamageResult;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0	
	CTakeDamageInfo info; // 0x8	
	// -> m_pOriginatingInfo - 0xc0
	// -> m_nHealthLost - 0xc8
	// -> m_nDamageTaken - 0xcc
	// -> m_nTotalledHealthLost - 0xd0
	// -> m_nTotalledDamageTaken - 0xd4
	// -> m_flTotalledDamageAbsorbed - 0xd8
	CTakeDamageResult result; // 0xc0	
	CHandle< CBaseEntity > hTarget; // 0xe0	
};

