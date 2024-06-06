#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4d0
// Has VTable
class CPhysImpact : public CPointEntity
{
public:
	float m_damage; // 0x4c0	
	float m_distance; // 0x4c4	
	CUtlSymbolLarge m_directionEntityName; // 0x4c8	
	
	// Datamap fields:
	// void CPhysImpactPointAtEntity; // 0x0
	// void InputImpact; // 0x0
};

