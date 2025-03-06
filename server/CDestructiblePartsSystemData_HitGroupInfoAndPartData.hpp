#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x20
// 
// MGetKV3ClassDefaults
// MModelGameData
// MFgdHelper
class CDestructiblePartsSystemData_HitGroupInfoAndPartData
{
public:
	// MPropertyDescription "Data for this destructible part."
	// MPropertyAutoExpandSelf
	CUtlVector< CDestructiblePartsSystemData_PartData > m_PartsData; // 0x0	
	// MPropertyStartGroup "+Hitgroup"
	// MPropertyDescription "The hitgroup this is related to."
	HitGroup_t m_nHitGroup; // 0x18	
	// MPropertyDescription "Do we disable the hitgroup and physics bodies tagged with said hitgroup when all sub parts are destroyed?"
	// MPropertyFriendlyName "Disable Hit Group & Remove Tagged Physics Bodies When Destroyed"
	bool m_bDisableHitGroupWhenDestroyed; // 0x1c	
};

