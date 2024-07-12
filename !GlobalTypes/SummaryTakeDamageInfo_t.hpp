#pragma once

#include <cstdint>

struct CTakeDamageInfo;
struct CTakeDamageResult;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x108
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0	
	CTakeDamageInfo info; // 0x8	
	// -> m_pOriginatingInfo - 0xe8
	// -> m_nHealthLost - 0xf0
	// -> m_nDamageTaken - 0xf4
	// -> m_nTotalledHealthLost - 0xf8
	// -> m_nTotalledDamageTaken - 0xfc
	CTakeDamageResult result; // 0xe8	
	CHandle< CBaseEntity > hTarget; // 0x100	
};

