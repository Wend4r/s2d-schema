#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4c8
// Has VTable
class CPhysImpact : public CPointEntity
{
public:
	float m_damage; // 0x4b8	
	float m_distance; // 0x4bc	
	CUtlSymbolLarge m_directionEntityName; // 0x4c0	
	
	// Datamap fields:
	// void CPhysImpactPointAtEntity; // 0x0
	// void InputImpact; // 0x0
};

