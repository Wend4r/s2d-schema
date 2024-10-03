#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CPhysImpact : public CPointEntity
{
public:
	float m_damage; // 0x4e0	
	float m_distance; // 0x4e4	
	CUtlSymbolLarge m_directionEntityName; // 0x4e8	
	
	// Datamap fields:
	// void CPhysImpactPointAtEntity; // 0x0
	// void InputImpact; // 0x0
};

