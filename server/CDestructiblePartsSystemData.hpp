#pragma once

#include <cstdint>

struct CRangeInt;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// 
// MModelGameData
// MGetKV3ClassDefaults
class CDestructiblePartsSystemData
{
public:
	// MPropertyDescription "Destructible Parts"
	CUtlOrderedMap< HitGroup_t, CDestructiblePartsSystemData_HitGroupInfoAndPartData > m_PartsDataByHitGroup; // 0x0	
	// MPropertyDescription "Min/Max number parts to destroy when gibbing"
	CRangeInt m_nMinMaxNumberHitGroupsToDestroyWhenGibbing; // 0x28	
};

