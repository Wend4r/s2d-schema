#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x1e0
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ConstrainDistanceToUserSpecifiedPath : public CParticleFunctionConstraint
{
public:
	// MPropertyFriendlyName "minimum distance"
	float m_fMinDistance; // 0x1b8	
	// MPropertyFriendlyName "maximum distance"
	float m_flMaxDistance; // 0x1bc	
	// MPropertyFriendlyName "Time scale"
	float m_flTimeScale; // 0x1c0	
	// MPropertyFriendlyName "Treat path as a loop"
	bool m_bLoopedPath; // 0x1c4	
private:
	[[maybe_unused]] uint8_t __pad01c5[0x3]; // 0x1c5
public:
	// MPropertyFriendlyName "path points"
	CUtlVector< PointDefinitionWithTimeValues_t > m_pointList; // 0x1c8	
};

