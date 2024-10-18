#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
class CDestructiblePartsSystemData_HitGroupInfoAndPartData
{
public:
	// MPropertyDescription "Name for this destructible part."
	CUtlString m_sName; // 0x0	
	// MPropertyDescription "Data for this destructible part."
	// MPropertyAutoExpandSelf
	CUtlVector< CDestructiblePartsSystemData_PartData > m_DestructiblePartsData; // 0x8	
	// MPropertyStartGroup "+Hitgroup"
	// MPropertyDescription "Do we disable the hitgroup when all sub parts are destroyed?"
	bool m_bDisableHitGroupWhenDestroyed; // 0x20	
};

