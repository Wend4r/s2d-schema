#pragma once

#include <cstdint>

struct CTakeDamageInfo;
struct CTakeDamageResult;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd0
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0	
	CTakeDamageInfo info; // 0x8	
	// -> m_pOriginatingInfo - 0xb0
	// -> m_nHealthLost - 0xb8
	// -> m_nDamageTaken - 0xbc
	// -> m_nTotalledHealthLost - 0xc0
	// -> m_nTotalledDamageTaken - 0xc4
	CTakeDamageResult result; // 0xb0	
	CHandle< CBaseEntity > hTarget; // 0xc8	
};

