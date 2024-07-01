#pragma once

#include <cstdint>

struct CTakeDamageInfo;
struct CTakeDamageResult;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x100
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0	
	CTakeDamageInfo info; // 0x8	
	// -> m_pOriginatingInfo - 0xe0
	// -> m_nHealthLost - 0xe8
	// -> m_nDamageTaken - 0xec
	// -> m_nTotalledHealthLost - 0xf0
	// -> m_nTotalledDamageTaken - 0xf4
	CTakeDamageResult result; // 0xe0	
	CHandle< CBaseEntity > hTarget; // 0xf8	
};

