#pragma once

#include <cstdint>

struct CNetworkVarChainer;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x78
class CDestructiblePartsSystemComponent
{
public:
	CNetworkVarChainer __m_pChainEntity; // 0x0	
	CHandle< CBaseModelEntity > m_hOwner; // 0x28	
private:
	[[maybe_unused]] uint8_t __pad002c[0x24]; // 0x2c
public:
	CUtlHashtable< HitGroup_t, CDestructiblePartRuntimeDataVector > m_PartsRuntimeDataByHitGroup; // 0x50	
	int32_t m_nLastHitPartIndex; // 0x70	
};

