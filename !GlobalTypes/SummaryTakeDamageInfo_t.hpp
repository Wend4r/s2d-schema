#pragma once

#include <cstdint>

struct CTakeDamageInfo;
struct CTakeDamageResult;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x120
struct SummaryTakeDamageInfo_t
{
public:
	int32_t nSummarisedCount; // 0x0	
	CTakeDamageInfo info; // 0x8	
	// -> m_pOriginatingInfo - 0xf8
	// -> m_nHealthLost - 0x100
	// -> m_nDamageTaken - 0x104
	// -> m_nTotalledHealthLost - 0x108
	// -> m_nTotalledDamageTaken - 0x10c
	// -> m_flTotalledDamageAbsorbed - 0x110
	CTakeDamageResult result; // 0xf8	
	CHandle< CBaseEntity > hTarget; // 0x118	
};

